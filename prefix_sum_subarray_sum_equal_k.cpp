#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define f(i,a,b) for ( int i = a; i < b; i++)
int main(){
    vector<int> nums;
    int k,n,t;
    cin>>n>>k;
    f(i,0,n){
        cin>>t;
        nums.push_back(t);
    }
    unordered_map<int,int> m;
        int temp=0,count=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            temp+=nums[i];
            if(m.find(temp-k)!=m.end()){
                count+=m[temp-k];
            }
            m[temp]++;
        }
        cout<<count<<endl;
    return 0;
}
