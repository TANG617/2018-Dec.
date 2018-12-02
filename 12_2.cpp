#include<bits/stdc++.h>
using namespace std;
struct node{
    int to,val,last;
    node(int x=0,int y=0,int z=0)
    {
        to=x;
        val=y;
        last=z;
    }
};
//vector<node> link;用vector做不到
int main()
{
node link[100]={0};
cin>>link[0].val>>link[0].to;
link[0].last= -1;//position of last number
int i=0;
int con=0;
int temp=link[0].to;
//printf("good");
while(con<3)
{
    temp=link[i].to;
    cin>>link[temp].val>>link[temp].to;
    link[temp].last=temp;
    i=temp;
    con++;
    //printf("also good\n");
    //printf("%d",con);
}
label:
cout<<endl;
for(int i=0;i<10;i++)
{
    cout<<link[i].val<<" ";
}
cout<<endl;
for(int i=0;i<10;i++)
{
    cout<<link[i].to<<" ";
}
cout<<endl;
for(int i=0;i<10;i++)
{
    cout<<link[i].last<<" ";
}
//delete (3)
//1->3->5->7
//(1->5)derictly
//1.to=3.to


//     int cha;
//     char character_1[cha],character_2[cha];
//     cin>>cha;
//     for(int i=0;i<cha;i++)
//     {
//         cin>>character_1[i];
//     }
//     for(int i=0;i<cha;i++)
//     {
//         cin>>character_2[i];
//     }
//     for(int i=0;i<cha;i++)
//     {
//         character_1[i]<character_2[i]?cout<<character_1[i]:cout<<character_2[i];
//     }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {    
//     long t,n,i;
//     char x[101],z[101];
//     cin>>n; 
//     cin>>x; cin>>z; 
//     for (i=0;i<n;i++)
//         if (x[i] < z[i])
//         {
//             cout<<-1<<endl;
//             return 0;
//         }
//     cout<<z<<endl;
//     return 0;
// }