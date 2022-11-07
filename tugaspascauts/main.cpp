#include <iostream>

using namespace std;

int main()
{

    int uangDito = 5000;
    int hrgPermen;

    cout<<"Uang Dito: "<<uangDito<<endl;
    cout<<"Harga Satuan Pertemuan: ";
    cin>> hrgPermen;


        if(hrgPermen == 500 || hrgPermen == 1000){
            cout<<"Maka permen yang didapatkan: "<<uangDito / 1000<<" buah." <<endl;
        }else{
            cout<<"Kelipatan harga Permen: ";
                for(int i = hrgPermen ; i <= uangDito ; i+=300){
                    cout<<i<<" ";
            }
             cout<<endl;
             cout<<"Maka permen yang didapatkan: "<< uangDito / hrgPermen<<" Buah"<<endl;
        }
    return 0;
}
