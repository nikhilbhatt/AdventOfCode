/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,i,j,ans,count=0,k;
    vector<int> vec;
    while(cin>>x){
        if(x<=2020){
            vec.push_back(x);
        }
    }
    for(i=0;i<vec.size();i++){
        for(j=i+1;j<vec.size();j++){
            for(k=j+1;k<vec.size();k++){
            if(vec.at(i)+vec.at(j)+vec.at(k)==2020){
                ans=vec.at(i)*vec.at(j)*vec.at(k);
                count++;
                cout<<vec.at(i)<<" "<<vec.at(j)<<" "<<vec.at(k)<<endl;
            }}
        }
    }
    cout<<ans<<" "<<count;
}

