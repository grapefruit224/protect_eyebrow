#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int numTestCases, n;
    int answer;

    cin >> numTestCases;

    while(numTestCases--){
        cin >> n;
        vector<string> v;
        string s;
        while(n--){
            cin >> s;
            v.push_back(s);
        }
        
        for(int i = 1; i < v.size(); i++){
            for(int j = 0; j < v[0].size(); j++){
                if(v[0][j] == v[i][j]){
                    answer = 0;
                }
                else{
                    answer = 1;
                    break;
                }
            }
            if(answer == 0)
                break;
        }
        if(answer == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;


    }

        
}