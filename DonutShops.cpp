#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int lli;

void printMinCostDonuts(lli &a, lli &b, lli &c){

    int firstDonut = 0;
    long long int secondDonut = 0;
    if(a >= c){
        firstDonut = -1;
    }else{
        firstDonut = 1;
    }


    if(a <= c/b){
        secondDonut = -1;
    }else{
        secondDonut = b;
    }


    cout << firstDonut << " "  << secondDonut; 
}


int main(){
    int t;
    cin >> t;

    while(t--){
        lli a,b,c;
        cin >> a >> b >> c;

        printMinCostDonuts(a,b,c);
        cout << endl;
    }

    return 0;
}