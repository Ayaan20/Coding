#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            if (i==0) break;
            cout<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*n-1-2*i);j++){
            if (i==n-1) break;
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}