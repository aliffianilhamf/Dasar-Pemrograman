#include <iostream>

using namespace std;

int main()
{
    //LUAS LINGKARAN
    const float phi = 3.14;
    float L,r;
    float Lp,p,l;


    //value r
    cout<<"Menghitung Luas Lingkaran"<<endl;
    cout<<"Masukkan jari-jari lingkaran = ";
    cin>>r;

    //proses perhitungan luas
    L= phi * r * r;

    //diketahui
    cout<<"Diketahui lingkaran dengan = "<< endl;
    cout<<"jari-jari \t= "<<r<<" cm"<< endl;
    cout<<"phi \t\t= "<<phi<<endl;
    cout<<"\n";

    //ditanya
    cout<<"Ditanya = "<<endl;
    cout<<"Berapa luas lingkaran dengan jari jari "<<r<<" cm?"<<endl;
    cout<<"\n";

    //hasil
    cout<<"Jawab = "<<endl;
    cout<<"Luas lingkaran dengan jari-jari "<<r<<" cm";
    cout<<" adalah "<<L<<" cm2"<<endl;
    cout<<"\n";

    cout<<"==============================\n"<<endl;

    //LUAS PERSEGI
    cout<<"Menghitung Luas Persegi Panjang"<<endl;


   //value p dan l
    cout<<"Masukkan p : ";
    cin>>p;
    cout<<"Masukkan l : ";
    cin>>l;
    cout<<"\n";

    //proses perhitungan
     Lp= p * l ;

    //Deiketahui
    cout<<"Diketahui persegi panjang dengan : "<<endl;
    cout<<"Panjang \t= "<<p<<"cm"<<endl;
    cout<<"Lebar \t\t= "<<l<<"cm"<<endl;
    cout<<"\n";

    //Ditanya
    cout<<"Ditanya = "<<endl;
    cout<<"Berapa Luas persegi panjang dengan Panjang sisi "<<p<<" cm, dan";
    cout<<" lebar "<<l<<" cm?"<<endl;
    cout<<"\n";

    //hasil
    cout<<"Jawab = "<<endl;
    cout<<"Luas pesegi panjang dengan panjang sisi "<<p<<" cm, dan lebar "<<l<<" cm"<<" adalah "<<Lp<<" cm2";
    cout<<"\n";

    return 0;
}
