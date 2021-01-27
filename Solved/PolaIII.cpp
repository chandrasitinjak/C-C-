#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	int angka = 0;
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++){						
		
			cout<<angka;
			angka++;
			
			if(angka == 10)
				angka = 0;		
		}
		cout<<endl;
	}
	return 0;
}