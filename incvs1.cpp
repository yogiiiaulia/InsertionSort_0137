#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; // Membuat variable inputan n

void input()
{ // procedure input
    while (true)
    {
        cout << "masukan jumlah data pada array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\narray yang anda masukan maksimal 20 element.\n";
        }
    }
    cout << endl;
    cout << "==========" << endl;
    cout << "masukan element array" << endl;
    cout << "==========" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}