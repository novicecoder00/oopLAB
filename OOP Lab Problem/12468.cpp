#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,r1,r2;



    while(1)
    {
        cin>>a>>b;
         if(a==-1 && b==-1)break;

         r1=abs(a-b);
         if(a<b)
         {
            r2=(100+a)-b;
         }
         else
         {
            r2=(100+b)-a;
         }

         if(r1>r2)
         {
            cout<<r2<<endl;
         }
         else
         {
            cout<<r1<<endl;
         }

    }

    return 0;

}
