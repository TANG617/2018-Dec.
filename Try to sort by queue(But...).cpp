#include<bits/stdc++.h>
using namespace std;
queue<int> ram;

bool find(queue<int>& q, int n)
{
int size = q.size();
for (int i=0; i<size; i++)
{
    int a = q.front();
    //printf("%d",a);
    if (a == n)
        {
        return true;
        }
    q.pop();
}
return false;
}

int main()
{
    while(1)
    {
        int m;
        cin>>m;
        
        cout<<find(ram,m)<<endl;
        ram.push(m);
        
    }
}
