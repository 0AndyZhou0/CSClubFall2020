#include <iostream>

using namespace std;

int main()
{
    int number;
    cin>>number;
    while(number != 1){
        cout << number << ", ";
        if(number%2){
            number = 3 * number + 1;
        }else{
            number /= 2;
        }
    }
    cout << 1;
    return 0;
}

