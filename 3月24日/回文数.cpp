#include<iostream>
using namespace std;
int main(void){
int a,b,c1,d,e;
cin>>e;
for(a=100;a<e;a++)
{
    b=a,c1=0;
    while(b>1)
    {
        d=b%10;
        c1=c1*10+d;
        b=b/10;
    }
    if(a==c1)
    cout<<a<<endl;
}
return 0;
}