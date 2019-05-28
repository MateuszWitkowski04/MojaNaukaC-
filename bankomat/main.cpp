#include <iostream>

using namespace std;

string PIN; //string - dotyczace napisow
string Pieniadze;
int main()
{
    cout << "Witaj w naszym banku!" <<endl;
    cout <<"Podaj PIN:";
    cin >>PIN;

    if(PIN=="1729")          //if - jezeli == - rowna sie
    {
        cout<<"Poprawny PIN" <<endl;
        cout<<"Ile pieniedzy wyplacic:"<<endl;
        cin>>Pieniadze;
    }
    else
    {
        cout<<"Niepoprawny PIN"<<endl;
    }

    if(Pieniadze<="2000")
    {
        cout<<"Wyplacanie, zabierz karte"<<endl;
    }
    else
    {
        cout<<"Za malo srodkow na karcie";
    }

    return 0;
}

    /*if(PIN!="1729")       != nie rowna sie
        {
            cout<<"Niepoprawny PIN";
        } */
