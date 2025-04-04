// Kruskal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct povezava {
    int p;
    int q;
    int cena;
};
void readGraph(int**& C, int& stevilo_vozlisc) {
    ifstream f("graf.txt"); 
    int stevilo_povezav;
    f >> stevilo_vozlisc;  // v prvi vrstici datoteke imamo stevilo vozlisc
    f >> stevilo_povezav;  // v drugi vrstici datoteke imamo stevilo povezav oziroma vrstic v nadaljevnaju datoteke

    C = new int* [stevilo_vozlisc];
    for (int i = 0; i < stevilo_vozlisc; i++) {
        C[i] = new int[stevilo_vozlisc] {0};
    }

    int v1, v2, cena;
    for (int i = 0; i < stevilo_povezav; i++) {
        f >> v1 >> v2 >> cena;
        if (v1 < 1 || v1 > stevilo_vozlisc || v2 < 1 || v2 > stevilo_vozlisc) {
            cerr << "Napaka: Indeksi vozlišè (" << v1 << ", " << v2 << ") so izven dovoljenega obsega!" << endl;
            exit(1);
        }
        v1--;
        v2--;

        C[v1][v2] = cena;
        C[v2][v1] = cena;
    }
}

void getPovezave(int** C, int stevilo_vozlisc, vector<povezava> P) {
    for (int i = 0; i < stevilo_vozlisc; i++) {
        for (int j = i + 1; j < stevilo_vozlisc; j++) {
            if (C[i][j] > 0) {
                P.push_back({ i, j, C[i][j] });
            }
        }
    }
}

void run() {

}

void generateRandomGraph(int**& C) {

}

void outputAcceptedPaths() {
}
int main()
{
    int** C;
    int stevilo_vozlisc;
    bool enabled = true;
    int choice;
    vector<povezava> P;
    while (enabled)
    {
        cout << "\nIskanje v Globino - Izbira \n1 Preberi graf iz datoteke\n2 Generiraj nakljucni graf\n"
            << "3 Pozeni\n4 Izpis sprejetih povezav\n5 Konec\n\n"
            << "Vasa Izbira: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            readGraph(C, stevilo_vozlisc);
            getPovezave(C,stevilo_vozlisc, P);
            break;
        case 2:
            generateRandomGraph(C);
            break;
        case 3:
            run();
            break;
        case 4:
            outputAcceptedPaths();
            break;
        case 5:
            enabled = false;
            break;
        default:
            break;
        }
    }
}
