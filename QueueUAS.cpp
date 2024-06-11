#include <iostream>
#include <queue>

using namespace std;

class Queue {
private:
    queue<int> q;

public:
    void enqueue(int customerNumber) {
        q.push(customerNumber);
    }

    void dequeue() {
        if (!q.empty()) {
            cout << "Pelanggan dengan nomor antrian " << q.front() << " sedang dilayani." << endl;
            q.pop();
        } else {
            cout << "Antrian kosong." << endl;
        }
    }

    void displayQueue() {
        if (!q.empty()) {
            cout << "Antrian pelanggan: ";
            queue<int> tempQ = q;
            while (!tempQ.empty()) {
                cout << tempQ.front() << " ";
                tempQ.pop();
            }
            cout << endl;
        } else {
            cout << "Antrian kosong." << endl;
        }
    }
};

int main() {
    Queue customerQueue;
    int choice, customerNumber;

    do {
        cout << "Pilihan Menu:" << endl;
        cout << "1. Tambah Pelanggan" << endl;
        cout << "2. Layani Pelanggan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nomor antrian pelanggan: ";
                cin >> customerNumber;
                customerQueue.enqueue(customerNumber);
                break;

            case 2:
                customerQueue.dequeue();
                break;

            case 3:
                cout << "Keluar dari program." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

        customerQueue.displayQueue();

    } while (choice != 3);

    return 0;
}
