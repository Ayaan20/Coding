#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){
            cout<<" "; 
        }
        char a='A';
        int j=0;
        for(;j<=i;j++){
            cout<<a;
            a++;

        }
        a--;
        a--;
        j--;
        while(j){
            cout<<a;
            a--;
            j--;

        }
        cout<<endl;
    }

    return 0;
}