#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<pair<long long, long long>> v(n);
        vector<int> a(n);

        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            v[i]={b[i],a[i]};
        }
            sort(v.begin(),v.end());
            long long mini=p;
            long long shared=1;
            
        
        for(auto it:v){
            long long cost=it.first;
            long long left=it.second;
            if(cost>=p){
                break;
            }
            if(left+shared>n){
                mini+=(n-shared)*cost;
                shared=n;
                break;
            }
            else{
                mini+=left*cost;
                shared+=left;
            }
        }
        mini+=(n-shared)*p;
        cout << mini << endl;


    
}
}