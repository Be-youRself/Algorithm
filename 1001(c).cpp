#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int number = 0;
    cin >> number;
    while(number != 1){
        if(number % 2 == 1)
            number = number * 3 + 1;
        number = number / 2;
        n++;
    }
    cout << n;
}
