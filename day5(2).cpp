
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    std::vector<int> vec;
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
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    int y=96;
    for(int i=0;i<vec.size();i++){
        // cout<<vec.at(i)<<" ";
        if(y!=vec.at(i)){
            cout<<"ans= "<<y;
            break;
        }
        y++;
    }
}

