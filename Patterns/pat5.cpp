#include<iostream>
using namespace std;
int main(){
    /*  
        Input Format: N = 3
        Result: 
        1 
        2 2 
        3 3 3
    */
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++) {
            cout<<" "<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}