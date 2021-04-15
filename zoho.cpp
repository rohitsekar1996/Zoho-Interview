#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.size();
    int mid = len/2;
    if(len%2==0)
    {
        mid+=1;
    }
    //cout<<mid;
    string ss="";
    for(int i=mid;i<len;i++)
    {
        ss+=s[i];
        //cout<<s[i]<<" ";
    }
    for(int i=0;i<mid;i++)
    {
       ss+=s[i];
    }
    int r=len;
    for(int i=0;i<len;i++)
    {
        for(int k=1;k<=r;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<ss[j];
        }
        cout<<endl;
        r--;
    }
    cout<<ss;
}