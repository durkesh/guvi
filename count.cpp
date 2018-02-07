#include<iostream>
using namespace std;
int main()
{
   int a,b,i,j,c=0;
  cin>>a;
  cin>>b;
   for( i=a;i<=b;i++)
   {
        for (j=2;j<a;j++)
    {
      if(a%j!=0)
        {
         
            c++;
           
        }
    }


   }
   cout<<c;
   return 0;
}
