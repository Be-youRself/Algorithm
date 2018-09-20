// vector & sort（由大到小排序 cmp）的一些用法
// vector 与 array 区别 vector 类似不定长数组（Java ArrayList）
/*
   最初我的想法是：
       把每一个输入数的序列求出来，比较其他数在不在这个序列中，
       如果在就抹除该数据。
   更简便的算法是：
       设置一个很大的数组，列出序列，把序列中的数对应数组中进行
       标记，最后没标记的输入数就是结果，这样就可以省去比较的过程。
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main()
{
    int k, n, flag = 0;
    int arr[10000];
    for(int i = 0; i < 10000; i++){
        arr[i] = 0;
    }
    cin >> k;
    vector<int> v(k);
    for(int i = 0; i < k; i++){
        cin >> n;
        v[i] = n;
        while(n != 1){
            if(n % 2 == 1)
                n = 3 * n + 1;
            n = n / 2;
            arr[n] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        if(arr[v[i]] == 0){
            if(flag == 1)
                cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
}
