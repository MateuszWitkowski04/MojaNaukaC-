#include <iostream>
#include <windows.h>
#include <cstdlib> // biblioteka do sleep, na linuxie i mac <unistd.h>

using namespace std;

int main()
{
    for(int i=15; i>=1; i=i-1)// od; do; ile
    {
        Sleep(1000);
        system("cls"); //cls dla cmd czyszczenie, clear dla linux, mac
        cout << i <<endl;
    }
    cout<<"jebut";

    return 0;
}
