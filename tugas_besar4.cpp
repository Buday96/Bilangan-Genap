#include <iostream>
using namespace std;

// Mendefinisikan struktur data siswa
struct siswa{
    string nama;
    int tugas;
    int quiz;
    int mid;
    int uas;
};

int main(){
    // Deklarasi struct siswa dengan nama siswa01
    struct siswa siswa01;

    // input nama siswa
    cout << "Masukkan nama siswa : ";
    getline(cin, siswa01.nama);

    // input nilai tugas 
    cout << "Masukkan nilai TUGAS : ";
    cin >> siswa01.tugas;

    // input nilai quiz
    cout << "Masukkan nilai QUIZ : ";
    cin >> siswa01.quiz;

    // input nilai MID
    cout << "Masukkan nilai MID : ";
    cin >> siswa01.mid;

    // input nilai UAS
    cout << "Masukkan nilai UAS : ";
    cin >> siswa01.uas;

    // Menghitung nilai akhir berdasarkan bobot masing-masing komponen
    int nilai_akhir = (10 * siswa01.tugas + 20 * siswa01.quiz + 30 * siswa01.mid + 40 * siswa01.uas) / 100;
    
    cout << "Nilai akhir " << siswa01.nama << " adalah = " << nilai_akhir <<endl;

    // Menentukan dan menampilkan grade berdasarkan nilai akhir
    if(nilai_akhir > 85){
        cout << "Grade A ";
    }else if(nilai_akhir >= 85 && nilai_akhir > 70){
        cout << "Grade B";
    }else if(nilai_akhir >= 70 && nilai_akhir > 55){
        cout << "Grade C";
    }else if(nilai_akhir >= 55 && nilai_akhir > 40){
        cout << "Grade D";
    }else{
        cout << "Grade E";
    }

    return 0;
}