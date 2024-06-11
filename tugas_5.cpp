#include <iostream>
#include <queue>
#include <ctime>

using namespace std;

struct antrian_pasien {
    int nomor_antrian;
    time_t waktu_datang;
};

class Klinik {
private:
    queue<antrian_pasien> antrian;
    int nomor_antrian_terakhir;

public:
    Klinik() {
        nomor_antrian_terakhir = 1;
    }

    void ambilNomorAntrian() { 
        antrian_pasien pasien;
        pasien.nomor_antrian = nomor_antrian_terakhir++;
        pasien.waktu_datang = time(nullptr);
        antrian.push(pasien);
        cout << "Nomor Antrian Anda: " << pasien.nomor_antrian << endl;
    }

    void lihatAntrianTersisa() {
        cout << "Antrian yang tersisa: " << antrian.size() << " orang" << endl;
    }

    void lihatPerkiraanWaktuTunggu() {
        if (antrian.empty()) {
            cout << "Tidak ada pasien dalam antrian." << endl;
        } else {
            time_t waktu_sekarang = time(nullptr);
            antrian_pasien pasien_terdepan = antrian.front();
            int jumlah_pasien = antrian.size();
            int perkiraan_waktu_tunggu = jumlah_pasien * 15; // 15 menit per pasien

            cout << "Perkiraan waktu tunggu Anda: " << perkiraan_waktu_tunggu << " menit" << endl;
        }
    }
};

int main() {
    Klinik klinik;
    int pilihan;

    do {
        cout << "\nPROGRAM ANTRIAN KLINIK ABC\n" << endl;
        cout << "1. AMBIL ANTRIAN" << endl;
        cout << "2. LIHAT ANTRIAN TERSISA" << endl;
        cout << "3. LIHAT PERKIRAAN WAKTU TUNGGU" << endl;
        cout << "4. EXIT" << endl;
        cout << "PILIH OPERASI : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                klinik.ambilNomorAntrian();
                break;
            case 2:
                klinik.lihatAntrianTersisa();
                break;
            case 3:
                klinik.lihatPerkiraanWaktuTunggu();
                break;
            case 4:
                cout << "Terima kasih, program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    return 0;
}