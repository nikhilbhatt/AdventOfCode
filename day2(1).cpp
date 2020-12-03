
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,ans,temp=0,count=0,min=0,max=0,tempcount=0;
    string x,y,z;
    char word;
    while(cin>>x){
        cin>>y>>z;
        for(i=0;i<x.size();i++){
            if(x[i]=='-'){
                temp=1;
            }
            else
            if(temp==0){
                min=min*10+x[i]-48;
            }
            else{
                max=max*10+x[i]-48;
            }
        }
        word=y[0];
        
        for(i=0;i<z.size();i++){
            if(word==z[i]){
                tempcount++;
            }
        }
        if(tempcount>=min&&tempcount<=max){
            count++;
        }
        tempcount=0;
        temp=0;
        min=0;
        max=0;
    }
    cout<<count;
}

