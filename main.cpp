
#include <iostream>
#include <locale>
#include "support.h"

using namespace std;

//  Main    -------------------------------------------
int main()
{
    int     opcao;
    float   fah=0, cel=0;

    language();

    do
    {
        clear();
        head();
        cout << menu.at(lang);
        fflush(stdin);
        fscanf(stdin, "%d", &opcao);

        switch (opcao)
        {
            case 99:
                head();
                cout << endMessage.at(lang);
                enter();
                break;
            
            case 1:
                head();
                cout << insertFah.at(lang);
                cin  >> fah;

                cel = (fah-32.0)*(5.0/9.0);

                cout << "\n\n  " << fah << "°F " << equals.at(lang) << cel << " °C. \n\n";

                enter();
                break;

            case 2:
                head();
                cout << insertCel.at(lang);
                cin  >> cel;

                fah = (cel*1.8) + 32.0;

                cout << "\n\n  " << cel << "°C " << equals.at(lang) << fah << " °F. \n\n";
                enter();
                break;

            default:
                cout << error.at(lang);
                enter();
        }
    } 
    while(opcao!=99);

    cout << "\n\n\n";
    return 0;
}