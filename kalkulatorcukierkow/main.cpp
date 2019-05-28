#include <iostream> //include - podpina biblioteki iostream - biblioteka standardowa

using namespace std; //using namespace std - uzywa przestrzeni nazw standard

int uczniowie; //int dla liczb calkowitych
int cukierki;
int x;
int y;
            //endl - end line, powoduje przejscie do kolejnej linijki
int main() //main - funkcja glowna
{
    cout << "ilu uczniow jest w twojej klasie:"; //cout - console output, wypisuje to co jest w nawiasach
    cin >>uczniowie; //cin - console input, instrukcja wejscia

    cout << "ile cukierkow kupila mama:";
    cin >>cukierki;

    x = cukierki/(uczniowie-1);

    cout << "cukierki dla kazdego ucznia:" <<x;

    y = cukierki-x*(uczniowie-1);

    cout <<endl<< "cukierki dla Jasia:" <<y;

    return 0;
}
