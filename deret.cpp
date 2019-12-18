# Author  : Dfv47
# My Team : Black Coder Crush

#iclude <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a=0, b, c, jumlah=0, i, n;
    
    cout<<"Menghitung Jumlah Deret Bilangan";
    cout<<"----------------------------------------";
    cout<<"Masukkan bilangan awal : ";
    cin>>a;
    cout<<"Masukkan beda : ";
    cin>>b;
    cout<<"Masukkan jumlah sampai deret ke-n : ";
    cin>>n;
    
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
    
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
    
    getch();
    return 0;    
}
