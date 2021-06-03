#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(3);
    int n=nums.size();
    stringstream ss;
        vector<string> v;
        for(int i=0;i<n;i++)
            string w;
        {
            ss<<nums[i];
            ss>>w;
            v.push_back(w);
        }
        cout<<v.size()<<endl;
        cout<<v[2];
    for(int i=0;i<v.size();i++){
        //cout<<v[i];
    }
    cout<<endl;

   for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                string a=v[i];
                string b=v[j];
                string c=a.append(b);
                string d=b.append(a);
                int k=c.compare(d);
                if(k<0){
                    //swap two elements of array
                    swap(v[i],v[j]);
                }
            }
    }
    string r;
        for(int i=0;i<n;i++){
            r=r.append(v[i]);
        }
        //cout<<r;
}
