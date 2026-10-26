#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt=0;
    int rem;
    vector<int> result;
    int maxi=0;
   if(n>=0){
    cout << n;

   }
   else{
        
        int opt1 = n / 10;
        
        
        int opt2 = (n / 100) * 10 + (n % 10);
        
        
        cout << max(opt1, opt2);
   }
}