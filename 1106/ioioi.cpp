#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, M;
    int i, j;
    int o, cnt = 0;

    scanf("%d", &N);


    scanf("%d", &M);
    char a[M];

    for(i = 0; i < M; i++)
        scanf("%c", &a[i]);
    
    for(i = 0; i < M; i++){
        if(a[i + 1] == 'O' && a[i + 2] == 'I'){
            o = 0;
            while(a[i] == 'I' && a[i + 1] == 'O'){
                i += 2;
                o++;
                if(a[i] == 'I' && o == N){
                    o--;
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
        
}