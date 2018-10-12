// 先使用 vector 将数字归类 再相应打印
// 还没有找到原先的方法的 bug
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, num, A1 = 0, A2 = 0, A5 = 0;
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num%5].push_back(num);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
            if (i == 1 && j % 2 == 0) A2 += v[i][j];
            if (i == 1 && j % 2 == 1) A2 -= v[i][j];
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
            printf("N"); continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}
/*
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    int flag = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 10 == 0){
            sum += num[i];
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "N" << " ";
    }
    else{
        cout << sum << " ";
    }
    sum = 0;
    flag = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 5 == 1){
            if(flag == 2){
                sum -= num[i];
                flag = 1;
            }
            else{
                sum += num[i];
                flag = 2;
            }
        }
    }
    if(flag == 0){
        cout << "N" << " ";
    }
    else{
        cout << sum << " ";
    }
    sum = 0;
    flag = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 5 == 2){
            sum++;
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "N" << " ";
    }
    else{
        cout << sum << " ";
    }
    sum = 0;
    flag = 0;
    int ass = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 5 == 3){
            ass++;
            sum += num[i];
            flag = 1;
        }
    }
    double avg = ((double)sum) / ass;
    avg = avg + 0.05;
    if(flag == 0){
        cout << "N" << " ";
    }
    else{
        printf("%.1f", avg);
        cout << " ";
    }
    sum = 0;
    flag = 0;
    ass = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 5 == 4 && num[i] > ass){
            ass = num[i];
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "N";
    }
    else{
        cout << ass;
    }
}
*/
