#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mengecek apakah suatu bilangan adalah bilangan prima
bool adalahPrima(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> bilanganGanjil, bilanganGenap, bilanganPrima;
    int n;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    cout << "Masukkan " << n << " bilangan\n";
    for (int i = 0; i < n; ++i) {
        cout << " Bilangan ke-" << i+1 << ": ";
        int num;
        cin >> num;

        if (num % 2 == 0) {
            bilanganGenap.push_back(num);
        } else {
            bilanganGanjil.push_back(num);
        }

        if (adalahPrima(num)) {
            bilanganPrima.push_back(num);
        }
    }

    cout << "Bilangan Ganjil: ";
    for (int num : bilanganGanjil) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int num : bilanganGenap) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    for (int num : bilanganPrima) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
