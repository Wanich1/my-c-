#include <iostream>

using namespace std;

int main()
{
    int nArray,i=0;
    char pilihan;
    cout << "Masukkan nilai array = ";
    cin >> nArray;
    int angka[nArray];

    cout << "\n\nApakah anda ingin mengisi nilai array? (y/n)";
    cin >> pilihan;

    while (pilihan=='y')
    {
        while (i<nArray)
        {
            cout << "\nMasukkan nilai Array ke" << i << " = " ;
            cin >> angka[i];
            i++;
        }
        cout << "\n\nApakah anda sudah selesai mengisi nilai array? (Y/N)";
        cin >> pilihan;
    }

    int j=0;
    while (j<nArray)
    {
        cout << "\nNilai array ke " << j << " = ";
        cout << angka[j];
        j++;
    }
    return 0;
}
