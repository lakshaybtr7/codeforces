#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    int b=360;
    while(t--){
        int a;
        cin >> a;
        if(b%(180-a)==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}