#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variable global n untuk menyimpan jumlah elemen dalam array

void input()
 { // procedur untuk input
    int d; 
    while (true)
    {
        cout << "Masukkan jumlah elemen pada array: ";
        cin >> n;
        if (n > 0 && n <= 20)
            break;
        else
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
    }

}
