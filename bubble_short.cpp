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
        if (n <= 20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
cout << endl;
cout << "======================" << endl;
cout << "Masukkan elemen array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++)
    {                                           //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";  //output ke layar
        cin >> arr[i];                          //input dari pengguna
    }                                           
} 

void bubbleSortArray()
{                  // prosedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1;  // step 1

    do
    {
        for (int j = 0; j < n - pass; j++)
        { // step 2
            if (arr[j] > arr[j + 1])
            { // step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
        pass += 1; // step 4

        cout << "\nPass " << pass - 1 << ": "; //number of pass
        for (int k = 0; k < n; k++)
       {
            cout << arr[k] << " "; //menampilkan data pada number of pass 
        }
        cout << endl;

    } while (pass < n); // step 5
}    
