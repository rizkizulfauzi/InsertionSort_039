#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
cout << "\nArray yang anda masukan maksimal 20 Elemen.\n";
        }
    }
    cout << endl;
    cout << "=================" << endl;
    cout << "Masukan Element Array" << endl;
    cout << "=================" << endl;

    for (int i =0; i < n; i++)
    {
cout << " Data ke-" << (i + 1) << ":" ;
cin >> arr[1];
    }
}

void insertionSort()
{
    int  temp;
    int j,i;
    for (i = 1; i <= n -1; i++)
    {
        temp = arr[i];
         j = i -1;
         while (j >= 0 && arr[j] > temp)
         {
            arr[j + 1] = arr [j];
            j--;
            
            
         }
         arr[j +1] = temp;
    }
}

void display()
{
    cout << endl;
    cout << " ===============================" << endl;
    cout << " Total Pass = " << endl;
    cout << " ===============================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "================================" << endl
}