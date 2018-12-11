#include<bits/stdc++.h>
using namespace std;
vector<int> ram;

int main()
{
    int m,n,cnt=0;
    cin>>m>>n;//两个正整数M,NM,N，代表"内存容量"和"文章的长度"。
    //printf("cin ok\ninput:    ");
    for(int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if ( !(std::find(ram.begin(), ram.end(), a) != ram.end()))//查找是否在内存=no
        {
            if (ram.size()<m) {//未超出限定大小
                ram.push_back(a);
                //printf("404 in lim\n");
                cnt++;
            }
            else if (ram.size()==m) {//超出限定大小
                ram.push_back(a);
                ram.erase(ram.begin());
                cnt++;
                //printf("404 out of lim\n");
            }
        }
        // else
        // {
        //     printf("found\n");
        // }
        //printf("process:%d\ninput:    ",cnt);
    }
    printf("%d",cnt);
    //3 7
//1 2 1 5 4 4 1
}