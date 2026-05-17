#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    vector<int>::iterator it;
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<endl;
    }
    return 0;
}