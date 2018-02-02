#include<iostream>
using namespace std;
int  main()
{
    int a,i,b;
    cin>>a;
       for (i=2;i<a;i++)
    {
      if(a%i==0)
        {
            b=1;
        }
    }
    if(b==1)
    {
    cout<<"n0";
    }
    else{
        cout<<"yes";
    }
  return 0;

}
