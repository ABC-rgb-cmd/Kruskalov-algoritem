// Kruskal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
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
}
void generateRandomGraph(int**& C) {

}
void run() {

}
void outputAcceptedPaths()
{

}
int main()
{
    int** C;
    int stevilo_vozlisc;
    bool enabled = true;
    int choice;
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
