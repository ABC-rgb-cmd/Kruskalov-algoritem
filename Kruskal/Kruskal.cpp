// Kruskal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
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
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            enabled = false;
            break;
        default:
            break;
        }
    }
}
