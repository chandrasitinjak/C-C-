#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int arr[100001];
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];		
	}
	
	sort(arr, arr+n);
	
	int counter = 1;
	int max = 0;
	int mode = arr[0];
	
	for(int pass=0;pass<n;pass++) {
		if(arr[pass] == arr[pass+1]) {
			counter++;
			if(counter >= max) {								
				max = counter;
				mode = arr[pass];
			}
		} else {
			counter = 1;
		}
	}
	
	cout<<mode<<endl;
	return 0;
} 	