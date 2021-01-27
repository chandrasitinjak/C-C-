#include <bits/stdc++.h>
using namespace std;

void cek(int n) {		
	
	int sum_cek = 0;
	bool cek = true;
	
	for(int i=2; i<=n; i++) {
		if(n % i == 0) {
			sum_cek += 1;																			
		}
		
		if(sum_cek > 3) {
			i = n;
			cek = false;
		}
	}
	
	if(cek == false ) {
		cout<<"BUKAN"<<endl;	
	} else {
		cout<<"YA"<<endl;
	}
	
}

int main () {
	
	int n, number;
	cin>>n;
	
	while(n > 0) {		
				
		cin>>number;
		
		cek(number);
			
		n--;
	}
	
	return 0;
}