#include<bits/stdc++.h>
using namespace std;
stack<int> p;
queue<int> m;
vector<int> n;
void cins(int x)
{
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        m.push(a);
    }
}
int main()
{
    cins(5);
    for(int i=0;i<5;i++)
    {
        cout<<m.front();
        m.pop();
    }
}