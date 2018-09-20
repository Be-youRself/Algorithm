//我自己写的最后一个测试用例超时了
//利用 && 的特性 先计算第一个如果不是就不需要计算下一个
//而越到后面耗费时间越多
//使用<time.h> 中 clock()进行测试
//我自己写的需要1559ms
//优化后只需要15ms
#include <iostream>

using namespace std;

bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}

int main() {
    int N, cnt = 0;
    cin >> N;
    for (int i = 5; i <= N; i++)
        if (isprime(i-2) && isprime(i)) cnt++;
    cout << cnt;
    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int n = 0;
    int flag = 0;
    int first = 2;
    for(int i = 3; i <= N; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            if(i - first == 2)
                n++;
            first = i;
        }
        flag = 0;
    }
    cout << n;
}
*/
