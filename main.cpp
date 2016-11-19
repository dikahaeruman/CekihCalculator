#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;
void tambahPemain();
void hitungSkor();
void lihatSkor();
struct players{
int skor;
string pemain;
}player[4];
/*string pemain[4];
int skor[4]={0,0,0,0};*/
int round = 0,skorTemp = 0;
bool sort_skor(players const& lhs,players const&rhs);
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
    cout<<"Nama Pemain " << i+1 << " : ";cin>>player[i].pemain;
}
}

void lihatSkor(){
    std::sort(player, player+4, &sort_skor);
    cout<<"===============================\n";
    cout<<"SKOR PERTANDINGAN TURNAMEN CEKI\n";
    cout<<"===============================\n";
    cout<<"No.\t" << "Nama Pemain\t\t" << "Skor\n";
    for(int i = 0;i<=3;i++){
        cout<< i+1 << ".\t" << player[i].pemain << "\t\t\t" << player[i].skor << "\n";
    }
}

void hitungSkor(){
    system("cls");
    for(int i = 0;i<=3;i++){
        cout<<"Masukan Skor " << player[i].pemain << " : ";cin>>skorTemp;
        player[i].skor = player[i].skor + skorTemp;
    }
}

bool sort_skor(players const& lhs,players const&rhs){
    if(lhs.skor != rhs.skor)
        return lhs.skor > rhs.skor;
}
