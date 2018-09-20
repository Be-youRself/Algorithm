//处理一个多位数的各个数位时候 可以使用字符串的处理方法
//将汉字拼音存入数组中对应下标
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');
    string num = to_string(sum);
    for (int i = 0; i < num.length(); i++) {
        if (i != 0) cout << " ";
        cout << str[num[i] - '0'];
    }
    return 0;
}

/*
#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <string.h>

using namespace std;

void printOut(int n);

int main()
{
    char number[100];
    int sum = 0;
    scanf("%s", number);
    for(int i = 0; i < strlen(number); i++){
        sum = sum + (int)(number[i] - '0');
    }
    int a[10];
    int index = 0;
    while(sum >= 10){
        a[index] = sum % 10;
        sum = sum / 10;
        index++;
    }
    a[index] = sum;
    for(int j = index; j > 0; j--){
        printOut(a[j]);
        printf(" ");
    }
    printOut(a[0]);
}

void printOut(int n){
    char *c;
    switch(n){
        case 0: c = "ling";break;
        case 1: c = "yi";break;
        case 2: c = "er";break;
        case 3: c = "san";break;
        case 4: c = "si";break;
        case 5: c = "wu";break;
        case 6: c = "liu";break;
        case 7: c = "qi";break;
        case 8: c = "ba";break;
        case 9: c = "jiu";break;
    }
    printf("%s", c);
}
*/