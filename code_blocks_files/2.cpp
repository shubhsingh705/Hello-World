#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    for(int i=0;i<3;i++){
        v[i]=v[i]+'0';
    }
    string s=v[2];
    cout<<s;
}
