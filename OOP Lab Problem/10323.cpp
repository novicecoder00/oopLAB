#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    long int fac;

    while(scanf("%d",&n)!=EOF)
    {
        fac=1;
        if(n>13)
        {
            cout<<"Overflow!"<<endl;
        }

        else if(n<-13)
        {
            if(n%2==0)
            {
                cout<<"Overflow!"<<endl;
            }
            else

            {
                cout<<"Underflow!"<<endl;
            }
        }

        else if(n<0)
        {
             while(n<=-1)
            {
                fac=fac*n;
                n++;
            }

            if(fac>6227020800)
            {
                cout<<"Overflow!"<<endl;
            }

            else if(fac<10000)
            {
                cout<<"Underflow!"<<endl;
            }

        }

        else
        {
            while(n>=1)
            {
                fac=fac*n;
                n--;
            }

            if(fac<10000)
            {
                cout<<"Underflow!"<<endl;
            }
            else
            {
                cout<<fac<<endl;
            }
        }
    }

    return 0;
}
