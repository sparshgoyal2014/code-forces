#include <bits/stdc++.h>
using namespace std;

bool doesAliceWins(string str){
    int numberOfOnes = 0;
    int numberOfZeroes = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '0'){
            numberOfZeroes++;
        }else{
            numberOfOnes++;
        }
    }

    int chances = min(numberOfOnes, numberOfZeroes);

    if(chances % 2 == 0){
        return false;
    }

    return true;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        if(doesAliceWins(str)){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }

    }

    return 0;
}
