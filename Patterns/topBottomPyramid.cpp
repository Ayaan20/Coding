#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        if (i==0) continue;
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        // if (i==0) continue;
        for(int j=0;j<(2*n-1-2*i);j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}