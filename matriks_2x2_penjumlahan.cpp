#include <iostream>

using namespace std;

int main(){
    cout << "====================" << endl;
    cout << "  BY : BUDI AGUNG  " << endl;
    cout << "====================" << endl;
    int matriks_a[2][2] = {
        {7, 6},
        {4, 3}
    };
    int matriks_b[2][2] = {
        {2, 4},
        {5, 6}
    };

    int hasil_matriks [2][2];

    // nilai matriks A
    cout << "NILAI MATRIKS A " << endl;
    for( int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << " " << matriks_a[i][j];
        }
        cout << endl;
    }
    // nilai matriks B
    cout << "NILAI MATRIKS B " << endl;
    for(int i = 0; i < 2; i++){
        for(int j  = 0; j < 2; j++){
            cout << " " << matriks_b[i][j];
        }
        cout << endl;
    }

    // hasil penjumlahan A + B
    cout << " HASIL MATRIKS A + B " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            int sum = 0;
            sum += matriks_a[i][j] + matriks_b[i][j];
            hasil_matriks[i][j] = sum;
            cout << " " << hasil_matriks[i][j];
        }
        cout << endl;
    }
return 0;
}