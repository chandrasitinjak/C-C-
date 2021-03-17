#include <bits/stdc++.h>

using namespace std;

int main() {

    string S1, S2, S3, S4;

    cin>>S1>>S2>>S3>>S4;

    int len_S2 = S2.length(), idx = 0;
    int len_S3 = S3.length();
    int findS3 = 0,findS2 = 0;
    while(S1[idx] != '\0') {        
        
        // //if equal to S2
        if(S1[idx] == S2[0] && findS2 == 0) {
            int checkpoint =  idx, isS2 = 1;
            for(int i=1; i<len_S2; i++) {
                if(S1[checkpoint+1] != S2[i]) {
                    isS2 = 0;
                    break;
                }
                checkpoint++;
            }            

            if(isS2 == 1) {
                S1.erase(idx, len_S2); 
                findS2 = 1;
            }

        }        

        //if equal to S3
        if(S1[idx] == S3[0] && findS3 == 0) {

            // cout<<idx<<"\n";
            int checkpoint =  idx;
            int isS3 = 1;
            for(int j=0; j<len_S3; j++) {
                if(S1[checkpoint] != S3[j]) {
                    // cout<<"damn "<<S1[checkpoint]<<" : "<< S3[j] ;
                    isS3 = 0;
                    break;        
                }

                checkpoint++;
            }

            if(isS3 == 1) {
                S1.insert(idx+len_S3, S4);
                findS3 = 1;
            }
        }

        idx++;
    }

    cout<<S1<<"\n";

    return 0;
}