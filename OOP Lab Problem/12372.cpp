#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,i=1;

    cin>>t;

    while(t--)
    {

        cin>>a>>b>>c;

        if(a<=20 && b<=20 && c<=20)
        {
            cout<<"Case "<<i++<<": good"<<endl;
        }

        else
        {
            cout<<"Case "<<i++<<": bad"<<endl;
        }
    }

    return 0;

}
