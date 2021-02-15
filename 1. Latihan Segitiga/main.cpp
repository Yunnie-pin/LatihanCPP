#include <iostream>
using namespace std;

int main(){
   int tinggi;
   int nomor = 0 ;
   int bintang = 30;
   int bintangKedua = 2;
   cout << "Inputkan Tinggi Segitiga = ";
   cin >> tinggi;

   for (int j = 0; j < tinggi; j++){
      for (int i = 0; i < bintang; i++){
      cout << "*";
      }
      if (nomor <= 9){
         for (int k = 0; k < nomor+1; k++){
            cout << k;
         }
      }
      else{
         for (int k = 0; k < 9; k++){
         cout << k;
         }
         if (nomor > 9){
            for (int l = 0; l < bintangKedua; l++){
               cout << "*";
            }
            bintangKedua = bintangKedua + 2;
         }
      }
      nomor = nomor+2;
      bintang = bintang - 1;
      cout << endl;
   }
   return 0;
}