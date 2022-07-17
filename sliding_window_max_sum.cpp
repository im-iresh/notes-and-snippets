#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define f(i,a,b) for ( int i = a; i < b; i++)
int main(){
    int n,k;
    cin>>n;
    int a[n];
    f(i,0,n){
        cin>>a[i];
    }
    cin>>k;
    int sum=0,flag=0;
    f(i,0,k){
        sum+=a[i];
    }
    if(sum<0){
        cout<<sum<<"\n";
        return 0;
    }

    f(i,1,(n-k+1)){
        sum-=a[i-1];
        sum+=a[i+k-1];
        if(sum<0){
            flag++;
            cout<<sum<<"\n";
            continue;
        }     
    }
    if(flag<=0){
        cout<<"none\n";
    } 
    return 0;
}
