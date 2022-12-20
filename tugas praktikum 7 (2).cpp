#include<iostream>
using namespace std;
double c (double);
float c (float);
int c (int);

int main(){
    double bil1;
    float bil2;
    int bil3;
    cout << "Masukkan berapa fahrenheit 1: ";
    cin >> bil1;
    cout << "Masukkan berapa fahrenheit 2: ";
    cin >> bil2;
    cout << "Masukkan berapa fahrenheit 3: ";
    cin >> bil3;
    cout << "Hasil konversi C = " << c(bil1) << endl;
    cout << "Hasil konversi C = " << c(bil2) << endl;
    cout << "Hasil konversi C = " << c(bil3) << endl;
    return 0;
}
double c (double bil1){
    return ((bil1 - 32.0)*5/9);
}
float c (float bil2){
    return ((bil2 - 32.0)*5/9);
}
int c (int bil3){
    return ((bil3 - 32.0)*5/9);
}
