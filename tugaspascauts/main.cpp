#include <iostream>

using namespace std;

int main()
{

    int uangDito = 5000;
    int hrgPermen;

    cout<<"Uang Dito: "<<uangDito<<endl;
    cout<<"Harga Satuan Permen: ";
    cin>> hrgPermen;


        if(hrgPermen == 500 || hrgPermen == 1000){
            cout<<"Maka permen yang didapatkan Dito: "<<uangDito / 1000<<" buah." <<endl;
        }else if(hrgPermen == 300){
            cout<<"Kelipatan harga Permen: ";
                for(int i = hrgPermen ; i <= uangDito ; i+=300){
                    cout<<i<<" ";
            }
             cout<<endl;
             cout<<"Maka permen yang didapatkan Dito: "<< uangDito / hrgPermen<<" Buah"<<endl;
        }else{
            cout<<"maaf yang anda inputkan salah"<<endl;
        }
    return 0;
}
