#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if((login=="mateusz")&&(haslo=="mati")) //&& - spojnik logiczny
    {                                       //|| - or (shift+lewy_slesz) - lub np ((odp==a)||(odp==A))
        cout <<"Zalogowano"<<endl;
    }
    else
    {
        cout <<"Niepoprawny login lub haslo"<<endl;
    }


    return 0;
}
