//https://www.luogu.org/problemnew/show/P1540
//泪目，用vector完成
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

//https://www.luogu.org/problemnew/show/P1042
//不玩了。。。(数据在后面)
#include<bits/stdc++.h>
using namespace std;
vector<int> point_w,point_l,poooint_w,poooint_l;
int twe_l[2500],twe_w[2500];
int main()
{
    int w, l,i=-1;
    char a;
    
    while(a!='E')
    {
        cin>>a;
        if(a=='W')
        {
            point_w.push_back(1);
            poooint_w.push_back(1);
        }
        else if (a=='L') {
            point_l.push_back(1);
            poooint_l.push_back(1);
        }
        
        if (point_w.size()==11||point_l.size()==11) {
            printf("%d:%d\n",point_w.size(),point_l.size());
            point_w.clear();
            point_l.clear();
        }  
        if (poooint_w.size()==21||poooint_l.size()==21)
        {
            twe_w[++i]=poooint_w.size();
            twe_l[i]=poooint_l.size();
            poooint_w.clear();
            poooint_l.clear();
            //printf("i:%d",i);
        }
        
    }
    twe_w[++i]=poooint_w.size();
    twe_l[i]=poooint_l.size();
    //printf("i:%d",i);
    printf("%d:%d\n\n",point_w.size(),point_l.size());
    for(int j=0;j<=i;j++)
    {
        printf("%d:%d\n",twe_w[j],twe_l[j]);
    }
}
//WWWWWWWWWWWWWWWWWWWWWWLWE
//
/*data.in
WWLWWWWLWWWWLWWWWWWL
WWWWWLWWWWWLWWWWWLWW
WWLWWWWWLWLWWLWLLWWL
WWLLLWWWLWLWWLWWWWWW
WWWWWWLLWLWWLWWLWWLW
WWLWLWWLWWLWWWWLWWWL
LLWWWWLLLWWWLWWWLLWW
LWWWWWLLWWWWLWLWWWWW
WWWWLLWWWWWWWLWWLWLW
WLLWWLLWLWLLWWLLWWWW
LWWLLLLWLWWWLLWWWLWL
WWWWWWWLWWLLLWWLWWLW
WLWWWLLLWWWLWWWWLLLL
WWWWWWWWWLLLWLWLWWLW
WLWWWLWWWWLWWWWWWWWL
WWLWWWWWWWLLWWLWWWLW
WLWLWWWWLWWWWLWLWWWL
WWLWLLLLWWWLWWWWWWWL
WWWWWWWWLWWWWLWLWWLL
LLWWWWLWWLWLLLWWWWLW
WLWWWWLWLWLWWWWWWLWL
WWWWLWWWWWWWLLWWLLWW
LLLWLWWWWLLLLWWLWLLL
WWLWWWWLWWWWWWWLLWWL
WWWLWWWLWWWWWWWLLLWW
WLWWWLWWWWWLWWLLWLLW
WWWWWWWWLLWLLWLWWWLW
WWLWWWLLWWWWLWWWWWLW
WWWWWWWLWWWLLWWWWWWL
WLLWLWWWLLWLWLWWWWWL
WWLLWWWWWWWWWLLWLLWW
LWLLWLWLLWWWLWLWLLWW
WWLWWWWWLLLWLWWWWWWL
WLWLWWLWLLLWLLLWWWWL
WWWWWLWLLWWLLWLWLWLW
LWLLLWWLLWLWWWWWWWWW
WWWLLWWWWLWWWWLLWLWL
WLWLWWWLWWWLLWWLWLLW
WWWWWWWWLLWWLWWLLLWW
LWWWLWWWWWWWLWLWWWWW
WWLWLLWWWLWWLLWLLLWL
WLWWWLLWWWWLLWWLWWWL
LWWWLWLWLWWWWWWLWWWW
WWWWWLLWWLWWLLLWWWWW
LWWLLWWWWWLWWLWWWLLW
WLWWWWWWWLLWLLWLWLWW
LLWWLWWWLWLLLWLLWWWW
WWLLWWLWWWWLWWLWLWWL
LLWLWLWWWWWLLWWWLLLW
LLLLWWWLLLWLWWWWLWLW
WWWWWWLLWLWLWLWWWWWL
LWLWWWLWLWLWWWWWLLWW
LWLWWWWWWLWWWWWWLWLL
LLLWWWWLWLWWLWWWWLLW
WLLWWLWLLWWWLWLLWLLW
WWWLWWLWLLWWLWLWWWWW
WWWWWWLLWWLLWWLLLLWW
WWLLLWWLLWWWWWWLWWWW
WWWWLLWWWLWWWLWWWLLW
WLLLLLWWLWLLWWWWWWWW
WWLWWWWWLWWLWWWWWWWW
WLWWWWLWLWLWLLWWWLLW
WWWWWWLWWWWLWLWWWLLW
WWWWWWWWWWWWLWWLWLWL
WWLLWWWLWWWWWLWLWWWW
WLWWLWWWLWLLWWLWWWLL
WLWWWWLWLWWWWLWWLWWW
WLWWLLWWWWWLWWWLWWWW
LWWLWWWLLWLLWWWLLLLL
LWLLLWWWWWLLWWWWWLLL
LWWLWWWLWLWLWWLWWWWL
WLWWWWWLLWLWWWWWWWWW
WWWWWLWLWWWWLLLWLWWL
WLWWLLWWLWLWWLLWLWLW
WLLWLLLWWLWWLLWLWWLW
WLWWLWWWWWWLWWWLLWWW
LLWLWWLWWWLLWLWWWWWW
WLLLWWWWLWLWWWWWWLWL
WWLWWWWLWLWWLLWLWLWW
WLWLLLWWLWLWWLLWWWWL
WWWWWWWLWWLWWWWWLWWW
WWWWWWLWLWWLWWWLWWWL
WWLLWWLLWWLWWLWWLLLW
WLWWLWWWLWLWWLWWWWWW
WWLWLLWLLWWWLWLWWWWW
WWLWLLWWWLWWLWWWWWLW
LWLWWLLWWWWWWLWWWWLL
WWWLWLLLWLLWLWWWWWWW
WWWWWWLWWWLWLWWWWLLW
WLLWLLWLLLWWWWWWWWWL
WLWWLWWLLLWLWLWWWLWL
LWWLWLWWWWWWWWLLWWWL
WWWWWWWWLWWWWLWWWWWL
WWWWLWLWWWWWWWLWLLWW
WWLWWLLWLWLLWLWLWWWW
WWLWLWLWWLWLLLLWWLWW
WLWWWWWWLWLWWWWWLWLW
WWLWLWWWWLLWLWWWLWWL
WWWWLWWLWLLWLWWWLWWW
LWWLWWLWLWWLWLWWWWWW
E
/*data.out
11:3
11:2
11:2
11:4
11:9
11:0
11:7
11:4
11:9
11:4
11:3
11:5
11:8
11:9
11:6
11:5
11:8
11:4
11:3
11:3
11:4
11:9
11:1
11:7
11:6
11:4
11:3
11:8
12:10
11:4
11:4
11:3
11:6
11:7
11:2
11:3
11:8
11:3
12:10
11:5
11:7
11:8
9:11
11:4
11:3
11:7
11:5
11:8
11:2
11:9
11:7
11:5
11:1
11:7
11:6
11:6
12:10
11:4
11:9
7:11
11:2
11:8
11:5
11:3
11:9
11:7
11:9
11:2
9:11
11:3
11:3
8:11
11:1
11:2
11:4
11:5
11:4
11:1
11:6
11:4
11:7
11:4
11:4
11:7
8:11
11:6
11:5
11:3
11:2
16:18
11:7
11:4
11:7
11:5
11:3
14:12
11:3
11:3
11:3
11:7
11:8
11:4
11:4
11:5
11:6
11:9
11:0
11:7
11:6
12:10
11:4
11:2
11:2
11:5
11:8
11:9
11:3
11:4
11:5
11:7
11:5
2:0

21:4
21:6
21:10
21:10
21:11
21:6
21:18
21:11
21:13
21:6
21:7
21:10
21:12
21:8
21:17
21:6
21:10
21:9
21:5
21:11
21:15
21:15
21:15
21:10
21:12
21:6
21:16
21:9
21:8
21:15
21:13
21:17
21:11
21:10
21:17
21:12
21:7
21:11
21:8
21:7
21:7
21:11
21:8
21:16
21:13
21:5
22:20
21:12
21:9
21:14
21:7
21:7
21:12
21:11
21:9
21:8
21:13
21:13
21:4
21:13
21:10
21:10
21:11
7:2
