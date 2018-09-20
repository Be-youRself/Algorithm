//使用stack进行存储
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> sentence;
    string s;
    while(cin >> s)//这个判定是否输入完毕
        sentence.push(s);
    cout << sentence.top();
    sentence.pop();
    while(sentence.empty() != 1){
        cout << " " << sentence.top();
        sentence.pop();
    }
}
