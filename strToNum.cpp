#include <iostream>

using namespace std;

int main()
{
    char* str = "4193 with words";
    int num = 0;
    for(int i = 0; i < sizeof(str)/sizeof(str[0]); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            num *= 10;
            num += str[i] - 48;
        }
    }
    cout << num << endl;
}
