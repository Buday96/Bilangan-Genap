#include <iostream>
using namespace std;

int main(){
	int bil;
	cout << "============================" << endl;
    cout << "BILANGAN DERET VIBONACCI" << endl;
    cout << "     BY BUDI AGUNG " << endl;
    cout << "============================" << endl;

    int n, t1 = 0, t2 = 1, angka_berikutnya = 0;
 
    cout << "Masukkan Jumlah Deret Vibonacci : ";
    cin >> n;
 
    for(int i = 1; i <= n; i++) {
        // Tampilkan 2 angka pertama
        if(i == 1) {
            cout << i << ". Deret vibonacci : ";
            cout << t1 << " " << endl;
            continue;
        }
        if(i == 2) {
            cout << i << ". Deret vibonacci : ";
            cout << t2 << " " << endl;
            continue;
        }
        cout << i << ". Deret vibonacci : ";
        // Hitung untuk angka ke 3 dan seterusnya
        angka_berikutnya = t1 + t2;
        t1 = t2;
        t2 = angka_berikutnya;
         
        cout << angka_berikutnya << " " << endl;
    }
	
}