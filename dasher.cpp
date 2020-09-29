#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int isVowel(char c){
    switch(tolower(c))
    {
        case 'a': return 1;
        case 'e': return 1;
        case 'i': return 1;
        case 'o': return 1;
        case 'u': return 1;
    }
    return 0;
}

string dashVowel(string str){
    string newStr(str.length() * 2 + 1, ' ');
    int index = 0;
    for(int i = 0; str[i]; i++){
        if(isVowel(str[i])){
            newStr[index++] = '-';
            newStr[index++] = str[i];
            newStr[index++] = '-';
        }else{
            newStr[index++] = str[i];
        }
    }
    return newStr;
}

int main()
{
    string line = "Hello World";
    string dashed = dashVowel(line);
    cout << line;
    cout << dashed;

    return 0;
}
