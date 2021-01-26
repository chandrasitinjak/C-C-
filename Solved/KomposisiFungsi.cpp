//Belum selesai

#include <bits/stdc++.h>
using namespace std;

void FungsiKomposisi(int A, int B, int K,int x) {
    int fx = A*x + B, temp;

    if(K == 1)
        cout<<abs(fx)<<"\n";
    else {
        for(int i=2; i <= K; i++) {            
            temp = A*fx + B;
            fx = abs(temp);                                       
        }
        cout<<fx<<"\n";
    }       
}


int main() {

    int A,B,K,x;

    cin>>A>>B>>K>>x;
    FungsiKomposisi(A,B,K,x);

    return 0;
}