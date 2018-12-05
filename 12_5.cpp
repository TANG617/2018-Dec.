#include<bits/stdc++.h>
using namespace std;
int main()
{
    //位运算
    long long x=3,y=5;
    cout<<"~x="<<(unsigned short)~x<<endl;//位求反
    cout<<"~x="<<~x<<endl;//位求反
    cout<<"x&y="<<(x&y)<<endl;//位与
    cout<<"x^y="<<(x^y)<<endl;//位异或
     cout<<"x|y="<<(x|y)<<endl;//位或
     cout<<"x<<1="<<(x<<1)<<endl;//位左移
     cout<<"y>>1="<<(y>>1)<<endl;//位右移
     return 0;
}


