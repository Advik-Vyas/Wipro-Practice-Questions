#include <iostream>
using namespace std;

int sumfrom1toN(int n){
    if(n <= 0)
        return n;
    return n + sumfrom1toN(n-1);
    
}

int main(){
    int n;
    cin>>n;
    cout<<sumfrom1toN(n);
    return 0;
}