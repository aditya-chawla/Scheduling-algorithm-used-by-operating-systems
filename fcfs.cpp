#include <bits/stdc++.h>

using namespace std;
int main()
{
int n,temp,r;
cin>>n;
int num[n],count[n];
for(int i=0;i<n;i++)
{
    cin>>num[i];
}
for(int i=0;i<n;i++)
{
    temp=num[i];
    r=0;
    while(temp>0)
    {
        r=temp%10;
        temp=temp/10;
        if(n%r==0)
        {
            count[i]++;
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<count[i];
    }

}