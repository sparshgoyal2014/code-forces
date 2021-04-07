#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    int result = 0;

    while(n--){
        int arr[3];
        int count = 0;
        for(int i=0; i<3; i++){
            cin >> arr[i];
            (arr[i] == 1) ? count++ : count;
        }

        if(count >= 2){
            result++;
        }

    }

    cout << result << endl;

    return 0;

    
}