#include <iostream>
#include <stdlib.h>

using namespace std;
void tambahPemain();
string pemain[4];
int main()
{
    int pilih=0;
    cout<<"===============================\n";
    cout<<"Cekih Calculator by Andhika.H.S\n";
    cout<<"===============================\n";
    cout<<"Main Menu:\n";
    cout<<"1. Tambah Pemain\n";
    cout<<"2. Hapus Pemain\n";
    cout<<"3. Hitung Skor\n";
    cout<<"4. Lihat skor\n";
    cout<<"5. Hall of Shame\n";
    cout<<"===============================\n";
    cout<<"Pilih: ";cin>>pilih;
    switch(pilih){
    case 1:{
        tambahPemain();
        break;
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
