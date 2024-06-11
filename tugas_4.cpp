#include <iostream>
#include <string>
using namespace std;

struct menara_haoni{
    char nama;
    int data[3];
};

void kondisi (menara_haoni menara_haoni[], int jumlah){
    for(int n=0;n<jumlah;n++){
                cout<<menara_haoni[n].nama<<" : ";
            for(int i=0;i<jumlah;i++){
                cout<<menara_haoni[n].data[i]<<" ";
            }
            cout<<endl;
            }
}

void hanoi(menara_haoni menara_haoni[], int jumlah,int batu[], int n,int awal,int ke){
    if (ke==2){
    for(n=0;n<jumlah-1;n++){
    cout<<"Pindahkan batu "<<batu[n]<<" dari "<<menara_haoni[awal].nama<<" ke "<<menara_haoni[ke].nama<<endl<<endl;
    menara_haoni[ke].data[n]=batu[n];
    menara_haoni[awal].data[n]=0;
    kondisi(menara_haoni, jumlah);
    cout<<endl;
    }
    }
    else if (ke==1 && awal==2){
    for (n=1;n>=0;n--){
    cout<<"Pindahkan batu "<<batu[n]<<" dari "<<menara_haoni[awal].nama<<" ke "<<menara_haoni[ke].nama<<endl<<endl;
    menara_haoni[ke].data[n]=batu[n];
    menara_haoni[awal].data[n]=0;
    kondisi(menara_haoni, jumlah);
    cout<<endl;
    }
        }
    else {
    cout<<"Pindahkan batu "<<batu[n]<<" dari "<<menara_haoni[awal].nama<<" ke "<<menara_haoni[ke].nama<<endl<<endl;
    menara_haoni[ke].data[n]=batu[n];
    menara_haoni[awal].data[n]=0;
    kondisi(menara_haoni, jumlah);
    cout<<endl;
        
    }
        

}

int main() {
    const int jumlah=3;
    int batu[jumlah] = {50, 75, 100};
    menara_haoni menara_haoni[jumlah]={
        {'A',{batu[0],batu[1],batu[2]}},
        {'B',{0,0,0}},
        {'C',{0,0,0}}
    };

    cout << "Kondisi Awal: " << endl;;
    kondisi(menara_haoni, jumlah);
    cout<<endl;
    hanoi(menara_haoni, jumlah, batu, 0, 0, 2);
    hanoi(menara_haoni, jumlah, batu, 2, 0, 1);
    hanoi(menara_haoni, jumlah, batu, 0, 2, 1);

    return 0;
}