#include<iostream.h>
    #include<conio.h>
    main()
   {
   cout<<"program untuk menghitung 10 deret bilangan ganjil"<<endl;
   int a=1,b=19,n;
   for(a=a;a<=b;a+=2)
   {
   cout<<a;
   if(a<b)
   {
   cout<<" + ";
   }
   }
   cout<<" = ";
   n=(b+1)/2;
   n=n*n;
   cout<<n;
  getch ();
   }
