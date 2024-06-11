#include <iostream>
#define maxstack 7
using namespace std;

// Struktur data stack
struct stack {
    string s[7];
    int top;
};

// Deklarasi objek stack
struct stack st;

// Fungsi untuk menambahkan data ke dalam stack (push)
void push(string data) {
    // Memeriksa apakah stack penuh
    if (st.top == maxstack) {
        cout << "data penuh" << endl;
    } else {
        st.top = st.top + 1;
        st.s[st.top] = data;
        cout << "data ditambahkan" << endl;
    }
}

// Fungsi untuk menghapus data dari stack (pop)
void pop() {
    // Memeriksa apakah stack kosong
    if (st.top == -1) {
        cout << "data kosong" << endl;
    } else {
        st.top = st.top - 1;
        cout << "data dihapus" << endl;
    }
}

// Fungsi untuk menampilkan isi stack
void show() {
    // Memeriksa apakah stack kosong
    if (st.top == -1) {
        cout << "data kosong, tidak ada yang bisa ditampilkan" << endl;
    } else {
        // Menampilkan isi stack
        for (int x = 0; x <= st.top; x++) {
            cout << st.s[x] << " => ";
        }
        cout << endl;
    }
}

int main() {
    // Inisialisasi nilai top stack
    st.top = -1;

    int pilihan;
    string data;

    // Loop untuk menu operasi stack
    while (true) {
        cout << "\n==== KERANJANG BUKU ==== " << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. SHOW" << endl;
        cout << "4. EXIT" << endl;
        cout << "\nPILIH OPERASI : ";
        cin >> pilihan;

        // Switch case untuk memilih operasi stack
        switch (pilihan) {
            case 1:
                cout << "Masukkan buku yang akan ditambahkan :";
                cin.ignore();
                getline(cin, data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }
    return 0;
}
