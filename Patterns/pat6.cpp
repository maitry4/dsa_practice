#include<iostream>
using namespace std;
int main(){
    /*  
        Input Format: N = 3
        Result: 
        1 2 3 
        1 2 
        1
    */
    int n;
    cin>>n;
    for(int i = 0; i<n; i++) {
        for(int j = 1; j<=(n-i); j++) {
            cout<<" "<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}