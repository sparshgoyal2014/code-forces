#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

long long int maxHappiness(pair<lli, lli> arr[], lli m, lli n){  // m size of arrays

    lli sortFirstofPair[m];

    for(lli i=0; i<m; i++){
        sortFirstofPair[i] = arr[i].first;
    }

    sort(sortFirstofPair, sortFirstofPair + m);


    lli prefixSum[m+1];
    memset(prefixSum, 0, sizeof(prefixSum));

    prefixSum[m-1] = sortFirstofPair[m-1];

    for(lli i=m-2; i>=0; i--){
        prefixSum[i] = prefixSum[i+1] + sortFirstofPair[i];
    }

    lli maxHappy = 0;


    for(lli i=0; i<m; i++){

        lli index = upper_bound(sortFirstofPair, sortFirstofPair + m, arr[i].second) - sortFirstofPair;
        lli count = 0;
        count = m - index;

        lli tempMaxhappy = 0;
       


        if(count >= n){
            // maxHappy = max(maxHappy, prefixSum[m-n]);

            if(m >= n){
                tempMaxhappy = prefixSum[m-n];
            }
        }else{
            // maxHappy = max(maxHappy, prefixSum[index]);
            tempMaxhappy = prefixSum[index];

            if(arr[i].first <= arr[i].second){
                tempMaxhappy += arr[i].first + (n-count-1) * arr[i].second;
            }else{
                tempMaxhappy += (n-count) * arr[i].second;
            }
        }

        maxHappy = max(maxHappy, tempMaxhappy);
        
    }
    
    return maxHappy;

}

int main() {
    int t;
    cin >> t;

    while(t--){
        lli n,m;
        cin >> n >> m;

        pair<lli, lli> arr[m];

        for(lli i=0; i<m; i++){
            lli a,b;
            cin >> a >> b;
            arr[i] = make_pair(a,b);
        }
        
        cout << maxHappiness(arr, m, n) << endl;

    }
    return 0;
}















