#include<iostream>
using namespace std;
int main()
{
   int a=2,b=10,i,j;
  // cin>>a;
   //cin>>b;
   for( i=a+1;i<b;i++)
   {
        for (j=2;j<a+1;j++)
    {
      if(a%j!=0)
        {
            cout<<j<<"\n";
        }
    }


   }
   return 0;
}
