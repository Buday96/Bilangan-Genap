#include <iostream>
using namespace std;

int main(){
    cout << "============================" << endl;
    cout << "DERET ANGKA BILANGAN GENAP" << endl;
    cout << "     BY BUDI AGUNG " << endl;
    cout << "============================" << endl;

    int jumlah_deret, i;
    cout << "Masukkan Jumlah Deret : ";
    cin >> jumlah_deret;

    for(int i = 1; i <= jumlah_deret; i++){
        cout << i << ". Angka Genap : " << i * 2 <<endl;
    }
    cout << endl;

    return 0;
}