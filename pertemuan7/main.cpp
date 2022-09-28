#include <iostream>
#include <string>
using namespace std;

int main()
{

    int j,k;
    string jurusan [3] = {"Teknik Informatika" , "Sistem Informasi" , "Desain Komunikasi Visual"};
    string kategori [4] = {"Freshman" , "Sophomore" , "Junior" , "Senior"};

   cout << "==Daftar Jurusan==" << endl;
   cout << "1. "<<jurusan[0] << endl;
   cout << "2. "<<jurusan[1] << endl;
   cout << "3. "<<jurusan[2] << endl;
   cout << "\n";

   cout << "==Kategori Mahasiswa==" << endl;
   cout << "1. Semester 1-2 = "<<kategori[0] << endl;
   cout << "2. Semester 3-4 = "<<kategori[1] << endl;
   cout << "3. Semester 5-6 = "<<kategori[2] << endl;
   cout << "4. Semester 7-8 = "<<kategori[3] << endl;
   cout << "\n";

   cout << "Masukkan Jurusan Anda : " ; cin >> j;
   cout << "Masukkan Semester Anda : " ; cin >> k;
   cout << "\n";

    //Teknik Informatika
   if(j == 1 && k == 1){
    cout << "Jurusan Anda Adalah "<<jurusan[0]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[0]<<" Year." << endl;
   }else if(j ==1 && k == 2){
    cout << "Jurusan Anda Adalah "<<jurusan[0]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[1]<<" Year." << endl;
   }else if(j == 1 && k == 3){
    cout << "Jurusan Anda Adalah "<<jurusan[0]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[2]<<" Year." << endl;
   }else if(j == 1 && k == 4){
    cout << "Jurusan Anda Adalah "<<jurusan[0]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[3]<<" Year." << endl;
   }else if(j == 2 && k == 1){
    cout << "Jurusan Anda Adalah "<<jurusan[1]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[0]<<" Year." << endl;
   }else if(j == 2 && k == 2){
    cout << "Jurusan Anda Adalah "<<jurusan[1]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[1]<<" Year." << endl;
    }else if(j == 2 && k == 3){
    cout << "Jurusan Anda Adalah "<<jurusan[1]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[2]<<" Year." << endl;
    }else if(j == 2 && k == 4){
    cout << "Jurusan Anda Adalah "<<jurusan[1]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[3]<<" Year." << endl;
    }else if(j == 3 && k == 1){
    cout << "Jurusan Anda Adalah "<<jurusan[2]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[0]<<" Year." << endl;
    }else if(j == 3 && k == 2){
    cout << "Jurusan Anda Adalah "<<jurusan[2]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[1]<<" Year." << endl;
    }else if(j == 3 && k == 3){
    cout << "Jurusan Anda Adalah "<<jurusan[2]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[2]<<" Year." << endl;
    }else if(j == 3 && k == 4){
    cout << "Jurusan Anda Adalah "<<jurusan[2]<<"." << endl;
    cout << "Anda Dalam Kategori "<<kategori[3]<<" Year." << endl;
    }else{
    cout<<"Maaf Nomor Yang Anda Masukkan Salah"<<endl;
    }
    return 0;
}
