#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        if (i==0 || i==n-1){
            for(int j=0;j<n;j++)
            cout<<"*"<<" ";
            cout<<endl;
            cout<<endl;
            continue;
        }
        cout<<"*"<<" ";
        for(int j=0;j<n-2;j++){
            cout<<"  ";
        }
        cout<<"*"<<" ";
        cout<<endl;  
        cout<<endl;  
    }

    return 0;
}