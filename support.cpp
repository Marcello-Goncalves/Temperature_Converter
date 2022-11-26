#include <iostream>
#include <locale>
#include <vector>

using namespace std;

//  0 - English / 1 Portuguese

int lang = 0;

string separator = "  ------------------------------------";

vector<const char*> langs   = {"en_US", "pt_PT"};
vector<string> equals       = {"equals to ","equivale a " };
vector<string> insertFah    = {"\n  Insert the Temperature in Fahrenheit: ", "\n  Introduza a Temperatura em Fahrenheit: "};
vector<string> insertCel    = {"\n  Insert the Temperature in Celsius: ", "\n  Introduza a Temperatura em Celsius: "};
vector<string> error        = {"\n\n  ERROR: Invalid Option! \n\n",  "\n\n  ERRO: Opção Invalida! \n\n"};
vector<string> endMessage   = {"\n  The Program is Finished! \n\n\n", "\n  Fim da Realização do Programa! \n\n\n"};
vector<string> pressEnter   = {"\n  Press 'ENTER' To Continue... ", "\n  Pressione 'ENTER' Para Continuar... "};
vector<string> progName     = {"    - Fahrenheit/Celsius Converter -  ","    - Conversor Fahrenheit/Celsius -  " };

vector<string> menu =
{
    "\n  Choose Intended Operation: \n\n  1  - Fahrenheit to Celsius\n  2  - Celsius to Fahrenheit\n  99 - Exit Program\n\n  >>> ",
    "\n  Escolha a Operação que Deseja Realizar: \n\n  1 - Fahrenheit Para Celsius\n  2 - Celsius Para Fahrenheit\n  99 - Para Sair Do Programa\n\n  >>> "
};

void clear()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
};

void enter()
{
    cout << pressEnter.at(lang);
    fflush(stdin);
    getchar();
};

void head()
{
    clear();
    cout << endl;
    cout << separator << endl;
    cout << progName.at(lang) << endl;
    cout << separator << endl;
    cout << endl;
};

void language()
{
    int choice;
    
    head();
    cout << "\n  Language/Idioma:\n\n  1 - EN\n  2 - PT\n\n  >>> ";
    
    fflush(stdin);
    fscanf(stdin, "%d", &choice);

    if(choice > 0 && choice <= langs.size()) 
    {    
        lang = choice-1;
        setlocale(LC_ALL, langs.at(lang));
    }
    else language();
};
