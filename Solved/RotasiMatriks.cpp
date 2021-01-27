#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int baris,kolom;	
	cin>>baris>>kolom;
	
	int arr[baris][kolom];
	int arrReal[kolom][baris];
	
	for(int i=0;i<baris;i++) {
		for(int j=0;j<kolom;j++) {
			cin>>arr[i][j];
			arrReal[j][baris-i-1] = arr[i][j];
		}				
	}
	
	for(int i=0;i<kolom;i++) {
		for(int j=0;j<baris;j++) {
			cout<<arrReal[i][j];			
			if(j+1 < baris) {
				cout<<" ";
			}
		}				
		cout<<endl;
	}		
	
	return 0;
}