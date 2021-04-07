#include <iostream>
using namespace std;

int main(){

    int w;
    cin >> w;

    bool flag = false;
    if(w%2 != 0){
        cout << "NO" << endl;
    }else{
        for(int i=2; i<w; i+=2){
            if((w-2)%2 == 0){
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }

        if(flag == false){
            cout << "NO" << endl;
        }


    }

    return 0;

}