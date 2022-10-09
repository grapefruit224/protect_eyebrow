#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int numTestCases, n, a;

    scanf("%d", &numTestCases);

    while(numTestCases--){
        vector<int> vec;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            vec.push_back(a);
        }
        int max = 0;
        long long buy = 0;

        for(int i = n - 1; i >= 0; i--){
            if(vec[i] < max)
                buy += (max- vec[i]);
            else
                max = vec[i];
        }

        printf("%lld\n", buy);
    }
}