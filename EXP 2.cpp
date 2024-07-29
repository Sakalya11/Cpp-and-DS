#include<iostream>
//Sakalya Tatte 
// PRN: 23070123142
using namespace std;
int main()
{
   int a = 10;
   short int a1 = 15;
   unsigned short  int a2 = 20;
   long long int a3;
   char b = 'B';
   wchar_t b1;
   float c = 3.14;
   double d;
   long double d1;
   unsigned long long int d2;


  static int e1;
  register int e2 = 100;
  extern float e3 ;
  
   cout<<endl<<sizeof(a);
   cout<<endl<<sizeof(a1);
   cout<<endl<<sizeof(a2);
   cout<<endl<<sizeof(a3);
   cout<<endl<<sizeof(b);
   cout<<endl<<sizeof(b1);
   cout<<endl<<sizeof(c);
   cout<<endl<<sizeof(d);
   cout<<endl<<sizeof(d1);
   cout<<endl<<sizeof(d2);
   cout<<endl<<sizeof(e1);
   cout<<endl<<sizeof(e2);
   cout<<endl<<sizeof(e3);
    return 0;
}
