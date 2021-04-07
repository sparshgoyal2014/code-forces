#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int lli;


bool checkNotAngryGuest(lli &a, lli &b, lli &m, lli &n){  // a ---> vanilla b ----> chocolate
    if(a + b < m + n){
        return false;
    }


    if(a <= b){
        if(n > a){
            return false;
        }
    }else{
        if(n > b){
            return false;
        }
    }



    if(m > a+b-n){
        return false;
    }

    return true;

}


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    int t;
    cin >> t;

    while(t--){
        lli a, b, m, n;
        cin >> a >> b >> m >> n;

        if(checkNotAngryGuest(a,b,m,n)){
            cout << "Yes";
        }else{
            cout << "No";
        }cout << endl;


    }


    return 0;
}