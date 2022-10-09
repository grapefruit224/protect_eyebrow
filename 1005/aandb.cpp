#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, t;
    int result = 0;

    cin >> s;
    cin >> t;

    while(s.size() != t.size()){
        if(t[t.size() - 1] == 'A')
            t.pop_back();
        else{
            t.pop_back();
            reverse(t.begin(), t.end());
        }

    }

    if(s == t)
        result = 1;

    cout << result << endl;

}