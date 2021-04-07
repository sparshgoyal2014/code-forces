#include <bits/stdc++.h>
// #include <boost/lexical_cast.hpp>
#include <sstream>

using namespace std;

typedef long long int lli;

unsigned long long int suitableNumber(lli n){

    int digits = n;
    lli totalBits = digits*4;
    lli remainingBits = 3*digits;

    lli noOfTimes9 = (remainingBits)/4;

    string str = "";

    for(lli i=0; i<noOfTimes9; i++){
        str = str + "9";
    }

    lli remainder = (remainingBits)%4;

    if(remainder != 0){
        str = str + "8";
    }else{
        str = str + "8";
    }

    lli remaining = digits - str.length();

    for(lli i=0; i<remaining; i++){
        str = str + "8";
    }

    // int result = boost::lexical_cast<int>(str); 

    // return result;

    stringstream obj(str);

    lli result = 0;
    obj >> result;


    return result;



}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;

        cout << suitableNumber(n) << endl;
    }

    return 0;
}
