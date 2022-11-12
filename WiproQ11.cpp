#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,m,flag=0,i,j;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];

    for(i=0;i<n;i++){
        int count = 0;
        for(j=0;j<m;j++){
            if(arr[i][j] == 1)
                count++;
        }
        if(count > 1)
            flag += pow(count-1,2);
        
    }
    cout<<flag;
    return 0;
}