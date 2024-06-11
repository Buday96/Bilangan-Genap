#include <iostream>
 
using namespace std;
 
int main(){
    cout << "=====================================" << endl;
    cout << "BILANGAN FAKTORIAL (FUNGSI FAKTORIAL)" << endl;
    cout << "            BY BUDI AGUNG " << endl;
    cout << "=====================================" << endl;
 
    int angka,hasil,i;
    
    cout << "Input angka: ";
    cin >> angka; 
    
    hasil = 1;
    for(i = 1; i <= angka;i++){
        hasil = hasil * i;
    
        // untuk menampilkan angka
        cout << i;
        if(i != angka) {
        cout << " * ";
        }
    }
    cout << " = " << hasil << endl;
    cout << "Faktorial dari " << angka <<" adalah = " << hasil << endl;
    cout << endl;
    
    return 0;
}