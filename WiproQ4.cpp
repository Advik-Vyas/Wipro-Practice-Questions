#include <iostream>
using namespace std;

int revnum(int num){
    int reverse = 0;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10;
    }
    return reverse;
}

bool isPalindrome(int n){
    int reverse = 0;
    int num = n;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10;
    }
    if(reverse == n)
        return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    int sum = n;
    for(int i = 0;i < 5;i++){
        if(isPalindrome(sum)){
            cout<<sum;
            return 0;
        }
        sum += revnum(n);
    }
    cout<<-1;
    return 0;
}