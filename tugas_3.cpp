#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk produk
struct Product {
    string productCode;
    string productName;
    double productPrice;
    int productStock;
    Product* next;
};

// Fungsi untuk menambahkan produk baru ke daftar
void tambah_produk(Product*& head, string code, string name, double price, int stock) {
    Product* newProduct = new Product;
    newProduct->productCode = code;
    newProduct->productName = name;
    newProduct->productPrice = price;
    newProduct->productStock = stock;
    newProduct->next = head;
    head = newProduct;
}

// Fungsi untuk menampilkan semua produk
void lihat_produk(Product* head) {
    Product* current = head;
    cout << endl;
    cout << "\tDAFTAR PRODUK" << endl;
    cout << endl;
    while (current != nullptr) {
        cout << "KODE PRODUK: " << current->productCode << endl;
        cout << "NAMA PRODUK: " << current->productName << endl;
        cout << "HARGA JUAL: " << current->productPrice << endl;
        cout << "STOK: " << current->productStock << endl;
        cout << endl;
        current = current->next;
    }
}

// Fungsi untuk melakukan transaksi penjualan
void jual_produk(Product* head, string code, int quantity) {
    Product* current = head;
    while (current != nullptr) {
        if (current->productCode == code) {
            if (current->productStock >= quantity) {
                current->productStock -= quantity;
                cout << "\nPENJUALAN BERHASIL!\n" << endl;
            } else {
                cout << "Stok produk tidak mencukupi." << endl;
            }
            return;
        }
        current = current->next;
    }
    cout << "Produk tidak ditemukan." << endl;
}

int main() {
    Product* head = nullptr;
    int choice;


    while (true) {
        cout << "============================" << endl;
        cout << "\tTOKO BAJU XYZ " << endl;
        cout << "============================\n" << endl;
        cout << "1. TAMBAH PRODUK" << endl;
        cout << "2. LAPORAN PENJUALAN" << endl;
        cout << "3. TRANSAKSI PENJUALAN" << endl;
        cout << "4. EXIT\n" << endl;
        cout << "PILIH OPSI : ";
        cin >> choice;

        if (choice == 1) {
            string code, name;
            double price;
            int stock;
            cout << "MASUKKAN KODE PRODUK : ";
            cin >> code;
            cout << "MASUKKAN NAMA PRODUK: ";
            cin.ignore();
            getline(cin, name);
            cout << "MASUKKAN HARGA JUAL : ";
            cin >> price;
            cout << "MASUKKAN STOK PRODUK : ";
            cin >> stock;
            cout << endl;
            tambah_produk(head, code, name, price, stock);
            cout << "PRODUK BERHASIL DITAMBAHKAN!!\n" << endl;
        } else if (choice == 2) {
            lihat_produk(head);
        } else if (choice == 3) {
            lihat_produk(head);
            string code;
            int quantity;
            cout << "MASUKKAN KODE YANG AKAN DIJUAL: ";
            cin >> code;
            cout << "MASUKKAN JUMLAH YANG INGIN DIJUAL: ";
            cin >> quantity;
            jual_produk(head, code, quantity);
        } else if (choice == 4) {
            break;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    }

    // Membebaskan memori produk sebelum program berakhir
    Product* current = head;
    while (current != nullptr) {
        Product* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
