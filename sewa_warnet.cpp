// 1. Buat program menghitung durasi rental warnet, dengan ketentuan perhitungannya:
// 30 detik = Rp. 130,-
// Satuan waktu : jam : menit : detik

#include <iostream>
using namespace std;

// INISIALISASI STRUCT
struct agung_warnet{
    // INISIALISASI VARIABEL
    int jam;
    int menit;
    int detik;
    int no_sewa;
    int harga;
    string nama;
};

int main(){
    
    // PENGUNAAN STRUCT 
    struct agung_warnet warnet;
    
    // INPUT DAN OUTPUT
    cout <<"===================\n";
    cout <<"RENTAL WARNET AGUNG\n";
    cout <<"===================\n";
    cout << "No SEWA : ";
    cin >> warnet.no_sewa;
    cout << "NAMA \t: ";
    cin >> warnet.nama;
    cout << endl;
    cout <<"===================\n";
    cout <<"DURASI RENTAL\n";
    cout <<"===================\n";
    cout <<"JAM \t: ";
    cin >> warnet.jam;
    cout <<"MENIT \t: ";
    cin >> warnet.menit;
    cout <<"DETIK \t: ";
    cin >> warnet.detik;
    cout << endl;

    // KONVERSI KE DETIK
    warnet.harga = (warnet.jam * 3600) + (warnet.menit * 60) + (warnet.detik) / 30 * 130;

    // OUTPUT RINCIAN
    cout <<"===================\n";
    cout <<"RINCIAN RENTAL\n";
    cout <<"===================\n";
    cout << "NO SEWA : " << warnet.no_sewa << endl;
    cout << "NAMA \t: " << warnet.nama << endl;
    cout << "DURASI \t: " << warnet.jam << ":" << warnet.menit << ":" << warnet.detik << endl;
    cout << "HARGA \t: RP." << warnet.harga;
    
    return 0;
}
