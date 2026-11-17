#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    if (k == 0) {
        if (a[0] > 1) {
            cout << 1; 
        } else {
            cout << "-1";
        }
    }
    
    else if (k == n) {
        cout << a[n - 1];
    }
    
    else {
       
        if (a[k - 1] != a[k]) {
            cout << a[k - 1];
        } else {
            cout << "-1";
        }
    }

}