#include <bits/stdc++.h>

using namespace std;

void FungsiKomposisi(int A, int B, int K,int x) {
    int fx = A*x + B, l = 0;

    if(K == 1)
        cout<<abs(fx);
    else 
        for(int i=2; i <= K; i++) {
            l =  A * fx + B;
            fx = abs(l);
        }
    // int result = 0;
    // int temp = 0;

    // for(int i=0; i < K; i++) {
        
    //     if(i == 0) {
    //         int temp_ = abs((A * x) + B);
    //         temp += temp_;
    //     }
    //     else {
    //         int temp2_ = abs((A * temp) + B);
    //         result += temp2_;
    //         temp += result;
    //     }
        
    // }  
    // if(K == 1)
    //     cout<<temp<<"\n";  
    // else 
    //     cout<<result<<"\n";  
}


int main() {

    int A,B,K,x;

    cin>>A>>B>>K>>x;
    FungsiKomposisi(A,B,K,x);

    return 0;
}