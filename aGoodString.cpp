#include <bits/stdc++.h>
using namespace std;


int minMovesTogoodUtil(const string &str, int size, int l, int r, char currentGoodCharacter){

    if(l > r){
        return 0;
    }

    if(l == r){
        if(str[l] == currentGoodCharacter){
            return 0;
        }else{
            return 1;
        }
    }


    int tempFirsthalf = 0;
    int tempSecondHalf = 0;
    // for(int i=l; i<= l + (r-l)/2; i++){
    //     if(str[i] != currentGoodCharacter){
    //         tempFirsthalf++;
    //     }
    // }


    // for(int i= l + (r-l)/2+1; i<=r; i++){
    //     if(str[i] != currentGoodCharacter){
    //         tempSecondHalf++;
    //     }
    // }

    // tempFirsthalf = minMovesTogoodUtil(str, size, l + (r-l)/2+1, r, currentGoodCharacter+1);
    tempFirsthalf += (r-l+1)/2 - count(str.begin() + l, str.begin() + l + (r-l)/2 + 1, currentGoodCharacter);


    // tempSecondHalf = minMovesTogoodUtil(str, size, l, l + (r-l)/2, currentGoodCharacter+1);
    tempSecondHalf += (r-l+1)/2 - count(str.begin() + l + (r-l)/2 + 1, str.begin() + r+1, currentGoodCharacter);


    return min(tempFirsthalf +  minMovesTogoodUtil(str, size, l + (r-l)/2+1, r, currentGoodCharacter+1)  , tempSecondHalf +  minMovesTogoodUtil(str, size, l, l + (r-l)/2, currentGoodCharacter+1) );

    // return min(tempFirsthalf, tempSecondHalf);


}

int minMovesToMakeAString(const string &str, int size){

    int result = 0;

    return minMovesTogoodUtil(str, size, 0, size-1, 'a');

}



// int calc(const string &s, char c) {
// 	if (s.size() == 1) {
// 		return s[0] != c;
// 	}
// 	int mid = s.size() / 2;
// 	int cntl = calc(string(s.begin(), s.begin() + mid), c + 1);
// 	cntl += s.size() / 2 - count(s.begin() + mid, s.end(), c);
// 	int cntr = calc(string(s.begin() + mid, s.end()), c + 1);
// 	cntr += s.size() / 2 - count(s.begin(), s.begin() + mid, c);
// 	return min(cntl, cntr);
// }

int main(){
    int t;
    cin >> t;

    while(t--){
        int size;
        cin >> size;   // must be some poewr of 2

        string str;
        cin >> str;
        // cout << str << endl;

        cout << minMovesToMakeAString(str, size) << endl;

        // cout << calc(str, 'a') << endl;

    }


    return 0;
}