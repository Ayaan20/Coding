#include <bits/stdc++.h>
using namespace std;
int main()
{   int n =5;

    for(int i=0;i<n;i++){
        int j=0;
        for(;j<=i;j++){
            cout<<j+1;
        }
        for(int k=1;k<(2*n-1-2*i);k++){
            cout<<" ";
        }
        // --j;
        while(j){
            cout<<j;
            --j;
        }
        cout<<endl;
    }


    return 0;
}