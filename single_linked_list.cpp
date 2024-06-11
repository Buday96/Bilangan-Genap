#include <iostream>
using namespace std;

struct buku{
    string judul, pengarang;
    int tahun_terbit;

    buku *next;
};

buku * head, *tail, *cur, *newNode, *del;

// tambah awal linked list
void input_depan(string judul, string pengarang, int tahun_terbit){
    head = new buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahun_terbit = tahun_terbit;
    head->next = NULL;
    tail = head;
}

// tambah akhir single linked list
void input_blakang(string judul, string pengarang, int tahun_terbit){
    newNode = new buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahun_terbit = tahun_terbit;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// Ubah awal single linked list
void ubah_awal(string judul, string pengarang, int tahun_terbit){
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahun_terbit = tahun_terbit;
}

// Ubah akhir single linked list
void ubah_akhir(string judul, string pengarang, int tahun_terbit){
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahun_terbit = tahun_terbit;
}

// Delete awal single linked list
void hapus_depan(){
    del = head;
    head = head->next;
    delete del;
}

// Delete akhir single linked list
void hapus_belakang(){
    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

// menampilkan single linked list
void tampil_linkedlist(){
    cur = head;
    while(cur != NULL){
        cout << "JUDUL BUKU   : " << cur->judul << endl;
        cout << "JUDUL BUKU   : " << cur->pengarang << endl;
        cout << "TAHUN TERBIT : " << cur->tahun_terbit << endl;
        cout << endl;
        
        cur = cur->next;
    }
}

int main(){
    int pil;
    int tahun_terbit;
    string judul, pengarang;

    // Looping inputan 
    do{
        cout << "================================" << endl;
        cout << "PROGRAM PERPUSTAKAAN BUKU" << endl;
        cout << "================================" << endl;
        cout << "1. INPUT BUKU DEPAN" << endl;
        cout << "2. INPUT BUKU BELAKANG" << endl;
        cout << "3. TAMPILKAN BUKU" << endl;
        cout << "4. HAPUS BUKU DEPAN" << endl;
        cout << "5. HAPUS BUKU BELAKANG" << endl;
        cout << "6. UBAH BUKU DEPAN" << endl;
        cout << "7. UBAH BUKU BELAKANG" << endl;
        cout << "8. KELUAR\n" << endl;
        cout << "MASUKKAN PILIHAN : ";
        cin >> pil;
        cout << endl;
        
        // melakukan pilihan yang diinput
        switch (pil){
            case 1:
                cout << "MASUKKAN JUDUL BUKU : ";
                cin.ignore();
                getline (cin, judul);
                cout << "MASUKKAN PENGARANG BUKU : ";
                cin.ignore();
                getline (cin, pengarang);
                cout << "MASUKKAN TAHUN TERBIT BUKU : ";
                cin >> tahun_terbit;
                input_depan(judul, pengarang, tahun_terbit);
                cout << "\nBUKU BERHASIL DITAMBAHKAN!!!!!!! \n" << endl;
                break;
            case 2:
                cout << "MASUKKAN JUDUL BUKU : ";
                cin.ignore();
                getline (cin, judul);
                cout << "MASUKKAN PENGARANG BUKU : ";
                cin.ignore();
                getline (cin, pengarang);
                cout << "MASUKKAN TAHUN TERBIT BUKU : ";
                cin >> tahun_terbit;
                input_blakang(judul, pengarang, tahun_terbit);
                cout << "\nBUKU BERHASIL DITAMBAHKAN!!!!!!! \n" << endl;
                break;
            case 3:
                tampil_linkedlist();
                break;
            case 4:
                hapus_depan();
                cout << "BUKU DEPAN BERHASIL DIHAPUS!!!!!!!" << endl;
                break;
            case 5:
                hapus_belakang();
                cout << "BUKU BELAKANG BERHASIL DIHAPUS!!!!!!!" << endl;
                break;
            case 6:
                cout << "================================" << endl;
                cout << "          EDIT BUKU" << endl;
                cout << "================================" << endl;
                cout << "MASUKKAN JUDUL BUKU : ";
                cin.ignore();
                getline (cin, judul);
                cout << "MASUKKAN PENGARANG BUKU : ";
                cin.ignore();
                getline (cin, pengarang);
                cout << "MASUKKAN TAHUN TERBIT BUKU : ";
                cin >> tahun_terbit;
                ubah_awal(judul, pengarang, tahun_terbit);
                cout << "\nBUKU BERHASIL DI EDIT!!!!!!! \n" << endl;
                break;
            case 7:
                cout << "================================" << endl;
                cout << "          EDIT BUKU" << endl;
                cout << "================================" << endl;
                cout << "MASUKKAN JUDUL BUKU : ";
                cin.ignore();
                getline (cin, judul);
                cout << "MASUKKAN PENGARANG BUKU : ";
                cin.ignore();
                getline (cin, pengarang);
                cout << "MASUKKAN TAHUN TERBIT BUKU : ";
                cin >> tahun_terbit;
                ubah_akhir(judul, pengarang, tahun_terbit);
                cout << "\nBUKU BERHASIL DI EDIT!!!!!!! \n" << endl;
                break;
            case 8:
                cout << "Program selesai" << endl;
                break;
            default:
                cout << "pilihan tidak valid" << endl;
        }
    } while (pil != 8);    
    
    return 0;
}