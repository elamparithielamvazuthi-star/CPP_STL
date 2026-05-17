#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    vec.empty();
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"Is empty: "<<vec.empty();
    return 0;
    
}