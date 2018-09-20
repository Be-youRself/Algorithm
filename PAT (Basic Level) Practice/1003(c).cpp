#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n = -1, p = -1, t = -1;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        map<char, int> m;
        for(int j = 0; j < s.length(); j++){
            m[s[j]]++;
            if(s[j] == 'P')
                p = j;
            if(s[j] == 'T')
                t = j;
        }
        if(m['P'] == 1 && m['T'] == 1 && m['A'] > 0 && m.size() == 3 && (p * (t - p - 1)) == (s.length() - t - 1))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
