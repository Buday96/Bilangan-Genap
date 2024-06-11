#include <iostream>

using namespace std;

int main(){
    cout << "========================="<< endl;
    cout << "BY : Budi Agung" << endl;
    cout << "========================="<< endl;
    cout << endl;
    int matrix_a[3][3] = {
        {2,1,3},
        {5,4,6},
        {7,5,8}
    };
        
    int matrix_b[3][3] = {
        {4,3,2},
        {1,2,5},
        {6,3,8}
    };
    
    int matrix_hasil[3][3];
    
        
        
    //nilai matrix A
    cout << "NILAI MATRIX A \n";
        
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << " " << matrix_a[i][j];
            }
            cout << endl;
        }
    
    //nilai matrix b
    cout <<"NILAI MATRIX B \n";
        
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << " " << matrix_b[i][j];
            }
            cout << endl;
        }
        
    //hasil Perkalian
    cout <<"HASIL MATRIX A * B \n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                int sum = 0;
                for (int k = 0; k < 3; k++) {
                    sum += matrix_a[i][k] * matrix_b[k][j];
            }
            matrix_hasil[i][j] = sum;
            cout << " " << matrix_hasil[i][j];
        }
            cout << endl;
        }
return 0;
}

