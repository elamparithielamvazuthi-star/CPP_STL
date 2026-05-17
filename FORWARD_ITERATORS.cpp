#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<endl;
    }
    return 0;
}