#include <iostream>
#include<string>
using namespace std;

class mahasiswa{
public:
void input();
void output();
private:
string nama[30],huruf[10];
long int nim[20];
int nilai[10],n;
};

void mahasiswa::input(){
  cout<<"Berapa banyak Mahasiswa : "; cin>>n;
  for(int i=0; i<n; i++){
    cout<<"Mahasiswa ke-"<<i+1<<endl;
    cout<<"Masukkan Nama  : "; cin>>nama[i];
    cout<<"Masukkan Nim   : "; cin>>nim[i];
    cout<<"Masukkan Nilai : "; cin>>nilai[i];
    if(nilai[i]>=90){
      huruf[i]="A";
    }
    else if(nilai[i]>=70){
      huruf[i]="B";
    }
    else if(nilai[i]>=50){
      huruf[i]="C";
    }
    else if(nilai[i]<50){
      huruf[i]="D";
    }
    else huruf[i]="E";;
    }
    }    

void mahasiswa::output(){
  cout<<endl<<endl;
  for(int i=0; i<n; i++){
    cout<<"================================\n";
    cout<<"Nama        : "<<nama[i]<<endl;
    cout<<"Nim         : "<<nim[i]<<endl;
    cout<<"Nilai       : "<<nilai[i]<<endl;
    cout<<"Nilai Huruf : "<<huruf[i]<<endl;   
  cout<<"================================\n";
  }
  }
int main() {
  mahasiswa x;
  x.input();
  x.output();
}
