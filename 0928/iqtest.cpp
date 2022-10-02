#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void end(int n);
int solve(int n);
int num;
vector<int> sequence;

void end(int n){
    if(n == 2 && sequence[0] == sequence[1])
        printf("%d\n", sequence[1]);
    else
        printf("A\n");
}

int solve(int n){
    int a, b, result;
    //vector<int> sequence;
    if(sequence[0] == sequence[1]){
        for(int i = 0; i < sequence.size() - 1; i++){
            if(sequence[i] != sequence[i+1]){
                printf("B\n");
                return 0;
            }
        }
        printf("%d\n", sequence[1]);
        return 0;
    }
    if((sequence[2] - sequence[1]) % (sequence[1] - sequence[0]) != 0){
        printf("B\n");
        return 0;
    }
    else{
        a = (sequence[2] - sequence[1]) / (sequence[1] - sequence[0]);
        b = sequence[2] - (sequence[1] * a);
        for(int i = 0; i < sequence.size() - 1; i++){
            if(sequence[i] * a + b != sequence[i+1]){
                printf("B\n");
                return 0;
            }
        }
        result = sequence[n - 1] * a + b;

        printf("%d\n", result);
        return 0;
    }

    
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        sequence.push_back(num);
    }

    if(n < 3)
        end(n);
    else
        num = solve(n);

    return 0;
}