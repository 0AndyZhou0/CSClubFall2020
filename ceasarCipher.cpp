#include <iostream>
#include <string>

using namespace std;

char shiftLetter(char c, int i){
    if(c + i > 'z' || (c + i > 'Z' && c + i < 'a')){
        c-=26;
    }
    c+=i;
    cout << c << endl;
    return c;
}

string shiftWord(string s, int i){
    for(int x = 0; x < sizeof(s)/sizeof(s[0]); x++){
        s[x] = shiftLetter(s[x], i);
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    
    int i;
    cin >> i;
    
    //invalid i's
    //too big
    i = i % 26;
    //negative
    i += 26
    i = i % 26;
    
    s = shiftWord(s, i);
    cout << s;
}
