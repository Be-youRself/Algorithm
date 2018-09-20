//这里使用 vector 并不能更简便可以用数组
//尽量避免嵌套循环 使用数组赋初值0来避免 尽管效率一样
#include <iostream>

using namespace std;

int main()
{
    int a, i = 0;
    cin >> a;
    int b[3] = {0};
    while (a != 0) {
        b[i++] = a % 10;
        a = a / 10;
    }
    for (int k = 0; k < b[2]; k++)
        cout << "B";
    for (int k = 0; k < b[1]; k++)
        cout << "S";
    for (int k = 0; k < b[0]; k++)
        cout << k + 1;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> index(3);
    int times = 0;
    while(n >= 10){
        index[times++] = n % 10;
        n = n / 10;
    }
    index[times] = n;
    for(int i = times; i >= 0; i--){
        if(i == 0){
            for(int j = 0; j < index[i]; j++){
                cout << j + 1;
            }
        }
        if(i == 1){
            for(int j = 0; j < index[i]; j++){
                cout << "S";
            }
        }
        if(i == 2){
            for(int j = 0; j < index[i]; j++){
                cout << "B";
            }
        }
    }
}
*/
