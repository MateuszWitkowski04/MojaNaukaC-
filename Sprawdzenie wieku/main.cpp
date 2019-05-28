#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat: ";
    cin>>wiek;

    if((wiek>=36)&&(wiek>=18))
    {
        cout << "jestes pelnoletni i mozesz zostac prezydentem"<<endl;
    }
    else
    {
            if((wiek>=18)&&(wiek<=36))
        {
            cout << "jestes pelnoletni ale nie mozesz zostac prezydentem"<<endl;
        }
        else
        {
            cout << "nie jestes pelnoletni"<<endl;
        }
    }



    return 0;
}
