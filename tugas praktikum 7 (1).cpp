#include<iostream>
using namespace std;
int pokok(int), lembur(int), makan(int), transport(int);
int main(){
    int nip, jamnya;
    string nama;
    cout<<"Masukkan NIP : ";cin>>nip;
    cout<<"Masukkan Nama : ";cin>>nama;
    cout<<"Masukkan Jumlah Jam Kerja : ";cin>>jamnya;cout<<endl;
    cout<<"NIP : "<<nip<<endl;
    cout<<"Nama : "<<nama<<endl;
    cout<<"Gaji Pokok : "<<pokok(jamnya)<<endl;
    cout<<"Lembur : "<<lembur(jamnya)<<endl;
    cout<<"Uang Makan : "<<makan(jamnya)<<endl;
    cout<<"Transport : "<<transport(jamnya)<<endl;
    return 0;
}
int pokok(int jamnya){
    return 7500 * jamnya;
}
int lembur(int jamnya){
    if (jamnya > 8){
        return jamnya * (1.5 * 7500);
    } else {
        return 0;
    }
}
int makan(int jamnya){
    if (jamnya >= 9){
        return 10000;
    } else {
        return 0;
    }
}
int transport(int jamnya){
    if (jamnya >= 10){
        return 13000;
    } else {
        return 0;
    }
}
