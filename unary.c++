#include<iostream>
using namespace std;
class dist
{
   int m,cm;
   public:
   void get()
   {
      cout<<"enter metre value:"<<endl;
      cin>>m;
      cout<<"enter the centimetre value:"<<endl;
      cin>>cm;
   }
   dist operator++()
   {
      dist temp;
      temp.m=++m;
      temp.cm=++cm;
      if (temp.cm>=100)
      {
         temp.cm=temp.cm-100;
         temp.m++;
      }
      return temp;
   }
   dist operator++(int)
   {
      dist temp1;
      temp1.m=++m;
      temp1.cm=++cm;
      if(temp1.cm>=100)
      {
         temp1.cm=temp1.cm-100;
         temp1.m++;
      }
      return temp1;
   }
   dist operator--()
   {
      dist temp2;
      temp2.m=--m;
      temp2.cm=--cm;
      if(temp2.cm<=0)
      {
         temp2.cm=temp2.cm+100;
         temp2.m--;
      }
      return temp2;
   }
   dist operator--(int)
   {
      dist temp3;
      temp3.m=--m;
      temp3.cm=--cm;
      if(temp3.cm<=0)
      {
         temp3.cm=temp3.cm+100;
         temp3.m--;
      }
      return temp3;
   }
   void print()
   {
      cout<<m<<endl;
      cout<<cm<<endl;
   }
};
int main()
{
   dist d1;
   d1.get();
   dist d2=++d1;
   dist d3=d1++;
   dist d4=--d1;
   dist d5=d1--;
   cout<<"++d:";
   d2.print();
    cout<<"d++:";
   d3.print();
    cout<<"--d:";
   d4.print();
    cout<<"d--:";
   d5.print();
   return 0;
}
