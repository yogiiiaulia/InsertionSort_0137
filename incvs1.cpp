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

void insertionSort()
{


    int tempt;
    int j, i;
    for (i - 1; i <= n - 1; i++)
    {
       temp = arr [i];
       j = i - 1;
       while (j >= 0 && arr[j] > temp) 
       {
        arr [j+ 1] = arr [j];
        j--; 
        }
        arr [j + 1] = tempt;
    }
}


void display()
{
    cout << endl;
    cout << "=========" << endl;
    cout << "total passs = " << n - 1 << endl;
    cout << "=========" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=========" << endl;
    
    for (int j = 0; j < n; J++)
    {
        cout << arr [j] << endl;
    }
    cout << endl;
}