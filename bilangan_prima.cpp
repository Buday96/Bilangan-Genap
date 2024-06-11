#include <iostream>
using namespace std;

int main(){
	int bil;
	cout << "============================" << endl;
    cout << "DERET ANGKA BILANGAN PRIMA" << endl;
    cout << "     BY BUDI AGUNG " << endl;
    cout << "============================" << endl;

    int jumlah_deret, i;
    cout << "Masukkan Jumlah Deret : ";
    cin >> jumlah_deret;

    for(int i = 1; i <= jumlah_deret; i++){
        bil = 0;
		for(int j = 1;j <= i; j++){
			if(i % j == 0){
				bil = bil + 1;
			}
		}
		if (bil == 2)
		cout << i - 1 <<". Bilangan Prima : " << i << endl;
    }
	
}