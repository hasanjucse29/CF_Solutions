#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y=0;
        cin>>x;
        if(x==1)
        {
            cout<<3<<endl;
            continue;
        }
        for(int i=0;i<=31;i++)
        {
            if((1<<i)&x)
            {
                if((1<<i)==x)
                {
                    cout<<x+1<<endl;
                    break;
                }
                else
                {
                    cout<<(1<<i)<<endl;
                    break;
                }
            }
        }
    }
}
