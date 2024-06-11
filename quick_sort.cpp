#include <iostream>

using namespace std;

// fungsi dengan algoridma quick sort
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    // pilihan elemen pivot
    int pivot = arr[high];

    // indeks element pertama yang lebih besar dari pivot
    int i = (low - 1);

    // perulangan untuk membandingkan element dengan pivot
    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // swap pivot dengan element ke- i
    swap(&arr[i + 1], &arr[high]);

    // mengemblikan indeks pivot
    return (i + 1);
}

void quicksort(int arr[], int low, int high){
    // jika array memiliki satu element, maka array itu sudah terurut
    if (low >= high){
        return;
    }

    // pilih pivat
    int pi = partition(arr, low, high);

    // mengurutkan bagian kiri dari pivot
    quicksort(arr, low, pi - 1);

    // mengurutkan bagian kanan dari pivot
    quicksort(arr, pi + 1, high);
}

int main(){
    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << "PROGRAM C++ MENGURUTKAN ANGKA (QUICKSORT)" << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    int i, n;

    // Membaca angka input dari user
    cout << "MASUKKAN JUMLAH ELEMENT ARRAY : ";
    cin >> n;
    cout << endl;

    int arr[n];

    cout << "MASUKKAN " << n << " ANGKA YANG AKAN DIURUTKAN ";
    cout << endl;

    for(i = 0; i < n; i ++){
        cout << "ANGKA KE- " << +1 << " : ";
        cin >> arr[i];
    }
    cout << endl;
    
    // Menampilkan array sebelum diurutkan
    cout << "ARRAY SEBELUM DIURUTKAN : ";
    for(i = 0; i < n; i ++){
         cout << arr[i] << " ";
    }
    cout << endl;

    // Mengurutkan array dengan algoridma merge sort
    quicksort(arr, 0, n - 1);

    // Menampilkan hasil Pengurutan 
    cout << endl;
    cout << "ARRAY SETELAH DIURUTKAN : ";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}