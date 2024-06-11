#include <iostream>
using namespace std;

int main(){
    
    int n;
    char ulang;
    do{
    int total = 0;

    cout <<"Masukkan Elemen Array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i ++){
        cout << "Masukkan Elemen ke : " << i + 1 <<": ";
        cin >> arr[i];
        total += arr[i];
    }
    cout <<"Total dari Elemen Array adalah : "<< total <<endl;
    cout << "Ketik (Y) untuk lanjut (N) selesai: ";
    cin>>ulang;
    }while(ulang == 'y');
    cout <<"Program selesai" <<endl;

    return 0;
}