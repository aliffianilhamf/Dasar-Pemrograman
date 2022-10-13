#include <iostream>

using namespace std;

int main()
{
   //Program fibonacci
   //rumus fn = f(n-1)+f(n-2)
   int f1 = 0;
   int f2 = 1;
   int f3;


   cout<< "Deret Fibonacci Kurang Dari 100"<< endl;
   cout<< "==============================="<< endl;

   cout<< f1 << ",";
   cout<< f2 << ",";

   for(int i = 1; i < 11 ; i++){
    f3 = f1 + f2;
    cout<< f3 ;
    if(i != 10){
       cout<< ",";
    }
    f1 = f2;
    f2 = f3;
   }
   cout<<"\n"<< "==============================="<< endl;
    return 0;
}
