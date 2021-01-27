#include <bits/stdc++.h>

using namespace std;


int main() {

    string word;
    string sub_string;

    cin>>word>>sub_string;    

    int len = sub_string.length();
    int i=0;    
    
    while(word[i] != '\0') { 
        int isSubstring = 0;
        
        if(word[i] == sub_string[0]) {
            int cek = 1, checkpoint = i;
            for(int j=0; j<len; j++) {
                if(word[checkpoint] != sub_string[j]) { 
                    cek = 0;
                    break;
                }           
                checkpoint++;    
            }
            if(cek == 1)
                isSubstring = 1;            
        }

        if(isSubstring == 1) {
            word.erase(i, len);            

            int temp = (i+1) - len;
            if(temp <= 0) 
                i = -1;
            else
                i = i-len-1;            
        }

        i++;        
    }

    cout<<word<<"\n";
    
    return 0;
}