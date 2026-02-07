#include <iostream>
#include <string>
using namespace std;

void mainProgram(){
    int jamMasuk, jamKeluar;
    int lamaWaktu;
    string tipeKendaraan;
    char ulangi;
    
    cout<<"===========Parkir==========="<<endl;
    cout<<"masukkan jam kedatangan: ";
    cin>>jamMasuk;
    cout<<"masukkan jam keluar: ";
    cin>>jamKeluar;
    
    lamaWaktu = jamKeluar - jamMasuk;
    
    while(true){
        cout<<"masukkan tipe kendaraan(motor/mobil): ";
        cin>>tipeKendaraan;
        
        if(tipeKendaraan == "motor"){
            int biayaParkir = lamaWaktu * 2000;
            cout<<"biaya = rp."<<biayaParkir<<endl;
            break;
        }
        
        else if(tipeKendaraan == "mobil"){
            int biayaParkir = lamaWaktu * 4000;
            cout<<"biaya = rp."<<biayaParkir<<endl;
            break;
        }
        
        else{
            cout<<"kendaraan tidak valid."<<endl;
        }
    }
    
    cout<<"input data lagi?(Y/N): ";
    cin>>ulangi;
    if(ulangi == 'Y' || ulangi == 'y'){
        mainProgram();
    }
    else{
        cout<<"program berakhir.";
    }
}

int main(){
    mainProgram();
    return 0;
}
