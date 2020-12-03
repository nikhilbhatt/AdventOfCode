#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,ans,temp=0,count1=0,count3=0,count5=0,count7=0,count12=0,odd=0;
    int col1=0,col3=0,col5=0,col7=0,col12=0;
    string x;
    long long a;
    while(cin>>x){
        odd++;
        if(temp==0){
            ans=x.length();
            temp=1;
        }
        else
        if(temp==1)
         {
             col1=(col1+1)%ans;
            
             col3=(col3+3)%ans;
            
             col5=(col5+5)%ans;
            
             col7=(col7+7)%ans;
             if(x[col1]=='#'){
                 count1++;
             }
             
             if(x[col3]=='#')
             {
                 count3++;
             }
             if(x[col5]=='#')
             {
                 count5++;
             }
             if(x[col7]=='#')
             {
                 count7++;
             }
             
             if(odd%2==1){
                 col12=(col12+1)%ans;
                 if(x[col12]=='#'){
                     count12++;
                 }
             }
         }
    }
    cout<<count1<<" "<<count3<<" "<<count5<<" "<<count7<<" "<<count12<<" ";
    a=count1*count3*count5*count7*count12;
    cout<<a;
}

