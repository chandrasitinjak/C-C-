#include <bits/stdc++.h>
#include <vector>

using namespace std;

void TemanDekat(int n,int d) {

    int temp;
    int max = 0, min = 99999999;
    vector<vector<int>> vect;

    for(int i=0; i<n; i++) {       
        vector<int> temp_vect;
        for(int j=0; j<2; j++) {            
            cin>>temp;
            temp_vect.push_back(temp);
        }
        vect.push_back(temp_vect);
    }

    int rest_temp;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            int a = abs(vect[i][0] - vect[j][0]);
            int b = abs(vect[i][1] - vect[j][1]);

            rest_temp = pow(a,d) + pow(b,d);  
            
            if(rest_temp >= max) 
                max = rest_temp;
            
            if(rest_temp <= min)
                min = rest_temp;                            
        }        
    } 

    cout<<min<<" "<<max<<"\n";
        
}

int main() {
    
    int N, D;
    cin>>N>>D;

    TemanDekat(N,D);

    return 0;
}