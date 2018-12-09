//https://www.luogu.org/problemnew/show/P1540
#include<bits/stdc++.h>
using namespace std;
queue<int> ram;
vector<int> pass;
int m,n;//第一行为两个正整数M,N，代表内存容量和文章的长度。

bool find(queue<int>& q, int n)
{
int size = q.size();
for (int i=0; i<size; ++i)
{
    int a = q.front();
    if (a == n)
        {
        return true;
        }
    q.pop();
}
return false;
}

// bool find(int x)
// {
//     for(int i=0;i<m;i++)
//     {
//         if(ram.pop()==x)
//         {
//             return 0;
//         }
//     }
// return 1;
// }

int main()
{
    
    cin>>m>>n;
    int cnt=0;
    printf("-----ok-----\n");
    for(int i=0;i<n;i++)
    {
        int chara;
        cin>>chara;
        printf("-----cin_ok-----");
        printf("---find:%d  size:%d  chara:%d  cnt:%d--- \n",find(ram,chara),ram.size(),chara,cnt);
        if(ram.size()<=m && !find(ram,chara))
        {
            cnt++;
        }
        if(ram.size()>m && !find(ram,chara))
        {
            ram.pop();
            cnt++;
        }
        ram.push(chara);
    
    }
cout<<cnt;
}