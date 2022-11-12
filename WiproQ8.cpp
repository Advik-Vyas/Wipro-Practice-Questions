#include <iostream>
#include <string.h>
using namespace std;

int findNumberOfVowels(char* word){
    int res = 0;
    while(*word != '\0'){
        if ((*word == 'a') || (*word == 'e') || (*word == 'i') || (*word == 'o') || (*word == 'u') || (*word == 'A') || (*word == 'E') || (*word == 'I') || (*word == 'O') || (*word == 'U'))
            res++;
        word++;
    }
    return res;
}

int main(){
    char word[32];
    cin>>word;
    cout<<"Count of vowels in "<<word<<" is "<<findNumberOfVowels(word);
    return 0;
}
