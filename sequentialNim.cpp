#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

bool  doesFirstWin(lli arr[], int n){
    if(n==0){
        return false;
    }

    int maxOnesFromFirst = 0;

    if( arr[0] == 1){
        int i=0;
        while(i<n){
            if(arr[i] == 1){
                maxOnesFromFirst++;
            }else{
                break;
            }
            i++;
        }


        if(maxOnesFromFirst != n){
            if(maxOnesFromFirst % 2 == 0){
                return true;
            }else{
                return false;
            }
        }else{

            if(n%2 == 0){
                return false;
            }else{
                return true;
            }
        }

    }else{
        return true;
    }



}



int main(){

    int t;
    cin >> t;


    while(t--){
        int n;
        cin >> n;

        // lli* arr = new lli[n];

        lli arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }




        if(doesFirstWin(arr, n)){
            cout << "First";
        }else{
            cout << "Second";
        }cout << endl;


    }

    return 0;

}