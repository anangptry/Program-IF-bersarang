#include <iostream>
#include <conio.h>

using namespace std;

int main()


{
  int siswa;
  
  
 cout<<"CONTOH 1";cout<<endl;
 cout<<"KETIKA DIINPUT JUMLAH SISWA 25 ORANG";
 cout<<endl;cout<<endl;
  
   cout<<"Input Jumlah Siswa : ";
    cin>>siswa;
 
 
 
 
  if((siswa>=0)&(siswa<=25))
  {cout<<"Jumlah kelas 1"<<endl;}  
 
 
  else if((siswa>=26)&(siswa<=50))
  {cout<<"Jumlah Kelas 2"<<endl;}
 
 
  else if((siswa>=51)&(siswa<=75))
  {cout<<"Jumlah Kelas 3"<<endl;}
 
  else if((siswa>=76)&(siswa<=100))
  {cout<<"Jumlah kelas 4"<<endl; }
 
  
  
  
 else
 {cout<<"Inputan Anda Salah";}
  cout<<endl;
  
  
  getch;
}
