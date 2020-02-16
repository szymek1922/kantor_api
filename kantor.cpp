#include <iostream>
#include <windows.h>

using namespace std;

void print_napis()
{
    cout << "########" << endl;
    Sleep(400);
    cout << "#K" ;
    Sleep(400);
    cout << "A" ;
    Sleep(400);
    cout << "N" ;
    Sleep(400);
    cout << "T" ;
    Sleep(400);
    cout << "O" ;
    Sleep(400);
    cout << "R#" << endl;
    Sleep(400);
    cout << "########" << endl;
}

void wprowadzenie_kursow(float kurs[])
{
    
    cout << "Wprowadz kurs walut: " << endl;
    cout << "Euro skup: ";
    cin >> kurs[0];
    cout << "Euro sprzedaz: ";
    cin >> kurs[1];
    cout << "Dollar skup: ";
    cin >> kurs[2];
    cout << "Dollar sprzedaz: ";
    cin >> kurs[3];
    cout << "Frank skup: ";
    cin >> kurs[4];
    cout << "Frank sprzedaz: ";
    cin >> kurs[5];
    cout << "Funt skup: ";
    cin >> kurs[6];
    cout << "Funt sprzedaz: ";
    cin >> kurs[7];
}
void print_kursow(float kurs[])
{
    cout << endl<<"kursy walut: " << endl;
    cout << "Euro skup: ";
    cout << kurs[0];
    cout << " Euro sprzedaz: " ;
    cout << kurs[1] << endl;
    cout << "Dollar skup: ";
    cout << kurs[2];
    cout << " Dollar sprzedaz: " ;
    cout << kurs[3] << endl;
    cout << "Frank skup: ";
    cout << kurs[4];
    cout << " Frank sprzedaz: ";
    cout << kurs[5] << endl;
    cout << "Funt skup: ";
    cout << kurs[6];
    cout << " Funt sprzedaz: " ;
    cout << kurs[7] << endl;
}

// main() is where program execution begins.
int main() {

    float kurs[8];
    print_napis();
    wprowadzenie_kursow(kurs);
    print_kursow(kurs);
    int wybor[2];
    float ilosc;
    for (;;)
    {
        cout << "Wybierz walute: 1-Euro 2-Dollar 3-Frank 4-Funt 0-Zakoncz: ";
        cin >> wybor[0];
        if (wybor[0] == 0)
        {
            break;
        }
        cout << "Wybierz walute: 1-Skup 2-Sprzedaz 0-Zakoncz: ";
        cin >> wybor[1];
        if ( wybor[1] == 0)
        {
            break;
        }
        cout << "Wprowadz kwote: ";
        cin >> ilosc;




        if (wybor[0] == 1)
        {
            if (wybor[1] == 1)
            {
                cout << kurs[0] * ilosc << endl;

            }
            if (wybor[1] == 2)
            {
                cout << ilosc/ kurs[1] << endl;

            }

        }
        if (wybor[0] == 2)
        {
            if (wybor[1] == 1)
            {
                cout << kurs[2] * ilosc << endl;

            }
            if (wybor[1] == 2)
            {
                cout << ilosc / kurs[3] << endl;

            }

        }

        if (wybor[0] == 3)
        {
            if (wybor[1] == 1)
            {
                cout << kurs[4] * ilosc << endl;

            }
            if (wybor[1] == 2)
            {
                cout << ilosc / kurs[5] << endl;

            }

        }

        if (wybor[0] == 4)
        {
            if (wybor[1] == 1)
            {
                cout << kurs[6] * ilosc << endl;

            }
            if (wybor[1] == 2)
            {
                cout << ilosc / kurs[7] << endl;

            }

        }


    
    }






    return 0;
}
