#include <bits/stdc++.h>
using namespace std;

int main() {

    char word[111];
    int n;

    cin>>word>>n;

    int len = strlen(word);

    for(int i=0; i<len;i++) {
        char temp = word[i];

        temp = temp+n;

        // asci number for 'a' is 97 z is 122;
        if(temp > 122) {
            temp = temp - 122 + 97 - 1;
        }

        word[i] = temp;
    }

    
    for(int i=0; i<len;i++) {        
        cout<<word[i];            
    }
    cout<<"\n";
    
    
    return 0;
}