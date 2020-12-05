
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    int ans=0;
    while(cin>>x){
        int front=0,back=127,mid,temp;
        mid=(front+back)/2;
        int i=0;
        while(i<=6){
            if(x[i]=='F'){
                back=mid;
            }
            else{
                front=mid+1;
            }
            mid=(front+back)/2;
            i++;
        }
        temp=mid*8;
        front=0;
        back=7;
        mid=(front+back)/2;
        while(i<=9){
             if(x[i]=='L'){
                back=mid;
            }
            else{
                front=mid+1;
            }
            mid=(front+back)/2;
            i++;
        }
        // cout<<mid<<" ";
        temp=temp+mid;
        if(temp>ans){
            ans=temp;
        }
    }
    cout<<ans;
}

