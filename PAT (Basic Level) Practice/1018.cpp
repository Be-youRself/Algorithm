#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int j_win = 0, j_ping = 0, j_lose = 0,
    y_win = 0, y_ping = 0, y_lose = 0;
    int j_j_win = 0, j_c_win = 0, j_b_win = 0,
    y_j_win = 0, y_c_win = 0, y_b_win = 0;
    string first = "", second = "";
    for(int i = 0; i < n; i++){
        cin >> first;
        cin >> second;
        if(first == "C"){
            if(second == "C"){
                j_ping++;
                y_ping++;
            }
            if(second == "J"){
                j_win++;
                y_lose++;
                j_c_win++;
            }
            if(second == "B"){
                j_lose++;
                y_win++;
                y_b_win++;
            }
        }
        if(first == "J"){
            if(second == "C"){
                j_lose++;
                y_win++;
                y_c_win++;
            }
            if(second == "J"){
                j_ping++;
                y_ping++;
            }
            if(second == "B"){
                j_win++;
                y_lose++;
                j_j_win++;
            }
        }
        if(first == "B"){
            if(second == "C"){
                j_win++;
                y_lose++;
                j_b_win++;
            }
            if(second == "J"){
                j_lose++;
                y_win++;
                y_j_win++;
            }
            if(second == "B"){
                j_ping++;
                y_ping++;
            }
        }
    }
    cout << j_win << " " << j_ping << " " << j_lose << endl;
        cout << y_win << " " << y_ping << " " << y_lose << endl;
        if(j_b_win >= j_c_win && j_b_win >= j_j_win){
            cout << "B" << " ";
        }
        else if(j_c_win >= j_b_win && j_c_win >= j_j_win){
            cout << "C" << " ";
        }
        else{
            cout << "J" << " ";
        }
        if(y_b_win >= y_c_win && y_b_win >= y_j_win){
            cout << "B";
        }
        else if(y_c_win >= y_b_win && y_c_win >= y_j_win){
            cout << "C";
        }
        else{
            cout << "J";
        }
}