#include <iostream>
using namespace std;

typedef long long int lli;

int diskRunTime(lli arr[], lli n, lli value){   // this function returns the time in seconds until the disk stops.

    lli result = 0;
    lli sum = 0;
    if(arr[0] >= value){
        return result; 
    }

    for(lli i=0; i<n; i = (i + 1)%n){
        sum += arr[i];
        result++;
        if(sum >= value){
            return result -1;
        }

        if(i == n-1){
            if(value > 0  && sum <= 0){
                break;
            }else if(value < 0 && sum >= 0){
                break;
            }
        }
    }


    return -1;

}



int main(){
    int t;
    cin >> t;

    while(t--){
        lli n, m;
        cin >> n >> m;

        lli arr[n];
        lli x[m];
        for(lli i=0; i<n; i++){
            cin >> arr[i];
        }

        for(lli i=0; i<m; i++){
            cin >> x[i];
        }

        for(lli i=0; i<m; i++){
            cout << diskRunTime(arr, n, x[i]) << " ";
        }
        cout << endl;

    }


    return 0;
}