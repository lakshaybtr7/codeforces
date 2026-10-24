#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>a(n);
        int cnt=1;
        int maxcnt=1;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                cnt++;
                maxcnt=max(maxcnt,cnt);
            }
            else{
                cnt=1;
            }
        }
        if(n==1){
            cout << "0" << endl;
        }
        else{
        cout << n-maxcnt << endl;
        }
    }
}