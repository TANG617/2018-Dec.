#include<bits/stdc++.h>
using namespace std;
struct point{
    int left,right;
    // point(int x=0,int y=0)
    // {
    //     left=x;
    //     right=y;
    // }
};
point seet[10000];
int main()
{
    int m;
    cin>>m;
    //cout<<"ok"<<endl;
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        cin>>seet[i].left>>seet[i].right;
        //cout<<"okkk"<<endl;
    }
    //cout<<"enter confirm"<<endl;
    for(int i=0;i<m;i++)
    {
        
        for(int j=0;j<m;j++)
        {
            if(seet[i].left<seet[j].left&&seet[i].right<seet[j].right&&seet[i].right>seet[j].left)
            {
                cnt++;
            }
            else if(seet[i].left>seet[j].left&&seet[j].right<seet[i].right&&seet[j].right>seet[i].left)
            {
                cnt++;
            }
            // if(seet[i].left<seet[j].left && seet[i].right<seet[j].right||seet[i].right>seet[j].left)//||(seet[i].left>seet[j].left && seet[i].right<seet[j].right))
            // {
            //     cout<<" num:"<<seet[i].left<<" "<<seet[i].right<<" "<<seet[j].left<<" "<<seet[j].right;
            //     cnt++;
            // }
        }
    }
    cout<<endl<<cnt;
}
/*
5
1
4
2
3
5
10
6
7
8
9
*/