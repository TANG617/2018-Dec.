#include <bits/stdc++.h>
using namespace std;
int des(int x_1,int x_2,int y_1,int y_2)
{
    int x,y;
    (x_1>x_2)?x=x_1-x_2:x=x_2-x_1;
    (y_1>y_2)?y=y_1-y_2:y=y_2-y_1;
    return x+y;
}

struct point
{
    int time,x,y,endhome;
};
point maap[10005][10005];

int main(int argc, char const *argv[])
{
    int m,n,sigme_time;
    cin>>m>>n>>sigme_time;
    
    for(int i = 0; i < m; i++)
    {
        
        for(int j = 0; j < n; j++)
        {
            cin>>maap[i][j].time;
            
            if (maap[i][j].time!=0) {
                maap[i][j].x=j;
                maap[i][j].y=i;
            }
            
        }
        
    }
    //============whether input===============
    // cout<<endl;
    // for(int i = 0; i < m; i++)
    // {
        
    //     for(int j = 0; j < n; j++)
    //     {
    //         cout<<maap[i][j].time<<" ";
            
    //     }
    //     cout<<endl;
    // }
    //============whether set input===============
    // cout<<endl;
    // for(int i = 0; i < m; i++)
    // {
        
    //     for(int j = 0; j < n; j++)
    //     {
    //         printf("(%d , %d)  ",maap[i][j].x,maap[i][j].y);
            
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    return 0;
}
