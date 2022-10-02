#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int num;
    vector<int> v;
    scanf("%d", &num);

    if(num == 0)
        v.push_back(0);

    while(num != 0){
        if (num % 2 == 0)
            v.push_back(0);
        else{
            v.push_back(1);
            num -= 1;
        }
        num /= -2;
    }

    for(int i = v.size() - 1; i >= 0; i--){
        printf("%d", v[i]);
    }
    printf("\n");
}