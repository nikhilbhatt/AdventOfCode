#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,ans,temp=0,count=0,row=0,col=0;
    string x;
    while(cin>>x){
        if(temp==0){
            ans=x.length();
            temp=1;
        }
        else
        if(temp==1)
         {
             col=(col+3)%ans;
             
         }
         
        if(temp==1&&x[col]=='#'){
            count++;
        }
    }
    cout<<count;
}

