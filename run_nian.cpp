#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x%400==0 or (x%100!=0 and x%4==0))
    {
        cout<<"闰年！！！！";
    }else{
        cout<<"这根本就不是闰年！";
    }
    return 0;
}