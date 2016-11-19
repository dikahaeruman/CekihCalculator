#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;
struct players{
int skor;
string pemain;
}player[4];

int round = 0,skorTemp = 0;

void tambahPemain();
void hitungSkor();
void lihatSkor();
void resetSkor();
void hallofShame();
bool sort_skor(players const& lhs,players const&rhs);
bool terendah(players const& lhs,players const&rhs);

int main(int argc, char *argv[])
{

    int pilih=0,endgame;
    cout<<"Masukan Skor Maksimal : ";cin>>endgame;
    while(player[0].skor <= endgame && player[1].skor <= endgame && player[2].skor <= endgame && player[3].skor <= endgame){
    system("cls");
    cout<<"==============================================================\n";
    cout<<"               CEKIH CALCULATOR BY ANDHIKA.H.S\n";
    cout<<"==============================================================\n";
    cout<<"Main Menu:\n";
    cout<<"1. Tambah Pemain\n";
    cout<<"2. Hitung Skor\n";
    cout<<"3. Reset Skor\n";
    cout<<"4. Exit Program\n";
    cout<<"==============================================================\n";
    lihatSkor();
    hallofShame();
    cout<<"Pilih: ";cin>>pilih;
    switch(pilih){
    case 1:{
        tambahPemain();
        break;
    }
    case 2:{
        hitungSkor();
        break;
    }
    case 3:{
        resetSkor();
        break;
    }
    case 4:{
      return EXIT_SUCCESS;
    }
            }
    }
    cout<<"=====================\n";
    cout<<"   CONGRATULATIONS   \n";
    cout<<"=====================\n";
    cout<<player[0].pemain<<" Menjadi juara dengan skor " << player[0].skor << " dalam Iron Cekih Tournament!!!\n";
    cout<<"Tekan Enter untuk melihat hasil akhir...";
    getch();
    system("cls");
    lihatSkor();
}

void tambahPemain(){
    system("cls");
    cout<<"=================================\n";
    cout<<"KING OF THE IRON CEKIH TOURNAMENT\n";
    cout<<"=================================\n";
for(int i = 0;i<=3;i++){
    cout<<"Nama Pemain " << i+1 << " : ";cin>>player[i].pemain;
}
}

void lihatSkor(){
    std::sort(player, player+4, &sort_skor);
    cout<<"==============================================================\n";
    cout<<"               SKOR PERTANDINGAN TURNAMEN CEKIH\n";
    cout<<"==============================================================\n";
    cout<<"No.\t" << "Nama Pemain\t\t" << "Skor\n";
    for(int i = 0;i<=3;i++){
        cout<< i+1 << ".\t" << player[i].pemain << "\t\t\t" << player[i].skor << "\n";
    }
    cout<<"==============================================================\n";
}

void hitungSkor(){
    system("cls");
    for(int i = 0;i<=3;i++){
        cout<<"Masukan Skor " << player[i].pemain << " : ";cin>>skorTemp;
        player[i].skor = player[i].skor + skorTemp;
    }
}

void resetSkor(){
    for(int i=0;i<=3;i++){
        player[i].skor=0;
    }
}

void hallofShame(){
    cout<< player[3].pemain <<" Adalah Pemain Tercupu Sepanjang Sejarah Dengan Skor " << player[3].skor << "\n";
    cout<<"==============================================================\n";
}

bool sort_skor(players const& lhs,players const&rhs){
    if(lhs.skor != rhs.skor)
        return lhs.skor > rhs.skor;
}

