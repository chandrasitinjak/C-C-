#include <bits/stdc++.h>
#include <vector>
 
using namespace std;

void primeFactors(int n) {
    vector<int> arr;

    while(n % 2 == 0) {        
        arr.push_back(2);
        n = n/2;
    }

    for(int i = 3; i <= sqrt(n); i = i+2) {
        while(n % i == 0) {            
             arr.push_back(i);
            n = n/i;
        }
    }

    if(n > 2) {        
         arr.push_back(n);
    }

    int check = 1;
    int size_arr = arr.size();

    for(int i=0; i<size_arr; i++) {        
        if(arr[i] == arr[i+1]) {            
            ++check;            
        }  else  {
            if(check > 1) {              
                if(i < size_arr-1)                  
                    cout<<arr[i-1]<<"^"<<check<<" x ";                
                else if(i == size_arr-1)
                    cout<<arr[i-1]<<"^"<<check;                
                check = 1;
            } else if(check == 1) {                
                if(i != size_arr-1)
                    cout<<arr[i]<<" x ";                
                else 
                    cout<<arr[i];
            }               
        }
        
    }

}

int main() {

    int n;

    cin>>n;
    primeFactors(n);

    return 0;
}