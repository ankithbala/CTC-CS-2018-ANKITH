#include <iostream>
#include<math.h>
using namespace std;
int a,b,r,i,j,res=0;
int bin(int n)
{
    int dec=0;
    for(i=0; n!=0; i++)
    {
        r=n%10;
        dec=dec+(r*pow(2,i));
        n=n/10;
    }
    return dec;
}
int decTobin(int res)
{
    int d[100],result[100],c=0;
    for(i=0; res>0; i++)
    {
        d[i]=res%2;
        res=res/2;
        //cout<<d[i];
    }
    c=i-1;
    i=c;
    for(j=0; j<=c; j++,i--)
    {
        result[j]=d[i];
        cout<<result[j];
    }
}
int main()
{
    int decA,decB;
    cout<<"Enter value for a"<<endl;
    cin>>a;
    decA=bin(a);
    cout<<"Enter value for b"<<endl;
    cin>>b;
    decB=bin(b);
    res=decA+decB;
    cout<<res<<endl;
    cout<<"Addition of "<<a<<" and "<<b<<" is ";
    decTobin(res);
}
