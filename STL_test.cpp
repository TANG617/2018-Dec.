//https://www.luogu.org/problemnew/show/P1223
//重载运算符挂了
#include<bits/stdc++.h>
using namespace std;
struct pep
{
    int num;int val_time;
    pep(int x=0,int y=0)
    {
        num=x;
        val_time=y;
    }
    
    

};

// bool operator<(pep a, pep b)
// {
//       if(a.val_time > b.val_time) return 1;
//       else if(a.val_time <= b.val_time)
//       return 0;
// }

vector<int> final_que;
priority_queue<pep> que;

int main(int argc, char const *argv[])
{
    bool operator< (pep a,pep  b)
    {
      if(a.val_time > b.val_time) return 1;
      else if(a.val_time == b.val_time)
           if(a.num >= b.num)   return 1;
      return 0;
    }
    
    int howmanypeople,howmuchtime;
    scanf("%d",howmanypeople);
    for(int i=0;i<howmanypeople;i++)
    {
        cin>>howmuchtime;
        pep temp=(i,howmuchtime);
        que.push(temp);
    }
    // for(int i=0;i<howmanypeople;i++)
    // {
        printf("%d",que.top().val_time);
        printf("%d",que.top().val_time);
        que.pop();
    // }
    return 0;
}
 