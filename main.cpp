#include <iostream>
#include <stdlib.h>

using namespace std;
void tambahPemain();
void hitungSkor();
void lihatSkor();
string pemain[4];
int skor[4]={0,0,0,0};
int round = 0,skorTemp = 0;
int main()
{
    int pilih=0;
    while(pilih != 5){
    system("cls");
    cout<<"===============================\n";
    cout<<"Ceki  Calculator by Andhika.H.S\n";
    cout<<"===============================\n";
    cout<<"Main Menu:\n";
    cout<<"1. Tambah Pemain\n";
    cout<<"2. Hapus Pemain\n";
    cout<<"3. Hitung Skor\n";
    cout<<"4. Hall of Shame\n";
    cout<<"5. Exit Program\n";
    cout<<"===============================\n";
    lihatSkor();
    cout<<"Pilih: ";cin>>pilih;
    switch(pilih){
    case 1:{
        tambahPemain();
        break;
    }
    case 3:{
        hitungSkor();
        break;
    }
        }
    }
}

void tambahPemain(){
    system("cls");
    cout<<"================================\n";
    cout<<"King of the Iron Ceki Tournament\n";
    cout<<"================================\n";
for(int i = 0;i<=3;i++){
    cout<<"Nama Pemain " << i+1 << " : ";cin>>pemain[i];
}
}

void lihatSkor(){
    cout<<"===============================\n";
    cout<<"SKOR PERTANDINGAN TURNAMEN CEKI\n";
    cout<<"===============================\n";
    cout<<"No.\t" << "Nama Pemain\t\t" << "Skor\n";
    for(int i = 0;i<=3;i++){
        cout<< i+1 << ".\t" << pemain[i] << "\t\t\t" << skor[i] << "\n";
    }
}

void hitungSkor(){
    system("cls");
    for(int i = 0;i<=3;i++){
        cout<<"Masukan Skor " << pemain[i] << " : ";cin>>skorTemp;
        skor[i] = skor[i] + skorTemp;
    }
}
