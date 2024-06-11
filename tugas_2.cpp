#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    string jurusan;
};

int main(){
    struct mahasiswa siswa[3];
    siswa[0].nama = "Budi agung";
    siswa[0].nim = "411222025";
    siswa[0].jurusan = "Tehnik informatika";

    struct mahasiswa siswa02;
    siswa[1].nama = "Bayu pramana";
    siswa[1].nim = "411222026";
    siswa[1].jurusan = "Tehnik Mesin";

    struct mahasiswa siswa03;
    siswa[2].nama = "Nurjanah";
    siswa[2].nim = "411222027";
    siswa[2].jurusan = "Management";

    string cari_nama;
    string cari_nim;
    char ulang;
    
    do{
    cout <<"Nama Mahasiswa: ";
    getline(cin,cari_nama);
    cout <<"Nim Mahasiswa: ";
    getline(cin,cari_nim);

    bool ditemukan = false;

    for( int i = 0; i < 3; i++){
        if(siswa[i].nama == cari_nama){
            if(siswa[i].nim == cari_nim){
            cout <<"=== Data Mahasiswa Ditemukan ===" <<endl;
            cout <<"Nama\t: "<< siswa[i].nama <<endl;
            cout <<"NIM\t: "<< siswa[i].nim <<endl;
            cout <<"Jurusan\t: "<< siswa[i].jurusan <<endl;
            ditemukan = true;
            break;
            }
        }
    }

    if(!ditemukan){
        cout <<"Data Tidak Ditemukan" <<endl;
    }

    cout <<"Ketik y (lanjut) / n (Selesai) : ";
    cin >> ulang;
    cin.ignore();
    } while (ulang == 'y');

    cout <<"Program Selesai" <<endl;
    

    return 0;
}
