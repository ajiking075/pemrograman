#include <iostream>
#include <cstdlib>
using namespace std;
class BangunRuang {
      public :
          BangunRuang(){cout<<"PROGRAM PERHITUNGAN LUAS DAN KELILING"<<endl;}
          ~BangunRuang(){cout<<"clas hancur "<<endl;}
          void input(){
               int input_1,input_2;
               cout<<endl<<"KUBUS"<<endl;
               cout<<"masukkan nilai sisi kubus : "<<endl;
               cin>>input_2;
               s2 = input_2;
          
               cout<<endl<<"BOLA"<<endl;
               cout<<"masukkan nilai jari-jari bola : "<<endl;
               cin>>input_3;
               r = input_3;
               phi=22/7;
          }
          void proses(){
               
               luas_kub=s2*s2*6;
               luas_bol=4*phi*r*r;
               kel_kub=12*s2;
               vol_kub= s2*s2*s2;
               vol_bol=(4*3.14*r*r*r)/3;
            
               }   
          void output(){
               system("cls");
               cout<<"Hasil Penghitungannya"<<endl<<endl;
          
               cout<<"KUBUS"<<endl<<"luas= "<<luas_kub<<endl;
               cout<<"keliling= "<<kel_kub<<endl<<"volume= "<<vol_kub<<endl<<endl;
          
               cout<<"BOLA"<<endl<<"luas= "<<luas_bol<<endl;
               cout<<"volume= "<<vol_bol<<endl<<endl;
               }
      private : 
              float phi;
              float luas_kub,luas_bol,kel_kub,vol_kub,vol_bol;
              int s,s2,r;
          };
 
int main(){
           BangunRuang a;
           a.input();
           a.proses();
           a.output();
                      
           system("pause");
           return 0;
}
