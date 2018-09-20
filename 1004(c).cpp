//字符串输入输出使用 cin 与 cout
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string name;
    string number;
    int grade;
    int maxGrade = -1, minGrade = 101;
    string maxName, maxNum, minName, minNum;
    for(int i = 0; i < n; i++){
        cin >> name >> number >> grade;
        if(grade > maxGrade){
            maxName = name;
            maxNum = number;
            maxGrade = grade;
        }
        if(grade < minGrade){
            minName = name;
            minNum = number;
            minGrade = grade;
        }
    }
    cout <<  maxName << " " << maxNum << endl << minName << " " << minNum;
}