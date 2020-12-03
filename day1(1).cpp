
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,i,j,ans,count=0;
    vector<int> vec;
    while(cin>>x){
        if(x<=2020){
            vec.push_back(x);
        }
    }
    for(i=0;i<vec.size();i++){
        for(j=i+1;j<vec.size();j++){
            if(vec.at(i)+vec.at(j)==2020){
                ans=vec.at(i)*vec.at(j);
                count++;
                cout<<vec.at(i)<<" "<<vec.at(j)<<endl;
            }
        }
    }
    cout<<ans<<" "<<count;
}

