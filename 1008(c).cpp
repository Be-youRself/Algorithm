//掌握关于 vector 以及 reverse 方法的使用
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    m %= n;
    if (m != 0) {
        reverse(a.begin(), a.begin() + n);
        //将最后m位数移动到前面
        reverse(a.begin() + m, a.begin() + n);
        reverse(a.begin(), a.begin() + m);
        //两部分分别将顺序调正
    }
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    return 0;
}
