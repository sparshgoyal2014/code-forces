#include <bits/stdc++.h>
using namespace std;


int maxScore(int arr[], int n,int k, int z){

    int maxScr = 0;
    int maxPairSum = 0;

    int sum = arr[0];
    for(int i=1; i<=k; i++){


        maxPairSum = max(maxPairSum, arr[i] + arr[i-1]);
        sum = sum + arr[i];
        int tempSum = sum;

        int remainingSteps = k - i;

        if(remainingSteps % 2 == 0){
            int possibleLeftMoves = min(remainingSteps/2, z);

            tempSum += possibleLeftMoves * maxPairSum;
        }else{

            int possibleLeftMoves = min(remainingSteps/2 + 1, z);

            tempSum += possibleLeftMoves * maxPairSum - arr[i];
        }

        maxScr = max(maxScr, tempSum);

    }


    return maxScr;

}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k,z;
        cin >> n >> k >> z;

        int arr[n];
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        cout << maxScore(arr, n, k, z) << endl;
    
    }


    return 0;
}