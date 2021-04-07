#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void modifyWord(string &str){
    if(str.length() <= 10){
        return ;
    }

    str = str[0] + to_string((str.length() - 2)) + str[str.length()-1];

    return;
}

int main(){

    int n;
    cin >> n;

    while(n--){
        string str;
        cin >> str;

        modifyWord(str);
        
        cout << str << endl;

    }

    
    return 0;
}