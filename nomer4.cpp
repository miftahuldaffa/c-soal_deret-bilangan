   #include <cstdlib>
   #include <iostream>
   #include <iomanip>
   using namespace std;
   int main(int argc, char *argv[])
   {
    int n=11;
    int baris=n/2;
    int hasil;
    int total=0;
    int k;
    for (int i=1;i<=baris;i++)
   {
        hasil=1;k=1;
        for(int j=1;j<=i;j++)
   {
        hasil=hasil*k;
        cout<<k;
        if (j==i)
        cout<<"  ";
    else
        cout<<" * ";
        k=k+2;      
    }
       cout<<setiosflags(ios::right)<<setw(10)<<" = "<<hasil<<endl;
       total=total+hasil;
    }
       cout<<setiosflags(ios::right)<<setw(10)<<" total = "<<total<<endl;
       cout<<endl;
       system("PAUSE");
       return EXIT_SUCCESS;
    }
