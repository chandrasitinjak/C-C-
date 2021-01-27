#include <bits/stdc++.h>

using namespace std;

void display(int arr1[],int arr2[],int jlh) {
	for(int i=0;i<jlh;i++) {		
		cout<<arr1[i];
		if(i!=jlh - 1) {
			cout<<" ";
		}
	}
	cout<<endl;
	for(int j=0;j<jlh;j++) {
		cout<<arr2[j];
		if(j!=jlh - 1) {
			cout<<" ";
		}
	}
	cout<<endl;
}

void changePosition(int aarr1[],int aarr2[],int Aa,int Bb,char penanda1,char penanda2) {		
		if(penanda1 == 'A' && penanda2 == 'B') {		
			int temp;
			temp = aarr1[Aa-1];
			aarr1[Aa-1] = aarr2[Bb-1];
			aarr2[Bb-1] = temp;	
		} else if(penanda1 == 'B' && penanda2 == 'A') {
			int temp1;
			temp1 = aarr2[Aa-1];
			aarr2[Aa-1] = aarr1[Bb-1];
			aarr1[Bb-1] = temp1;
		} else if(penanda1 == 'A' && penanda2 == 'A') {
			int temp2;
			temp2 = aarr1[Aa-1];
			aarr1[Aa-1] = aarr1[Bb-1];
			aarr1[Bb-1] = temp2;
		} else if(penanda1 == 'B' && penanda2 == 'B') {
			int temp3;
			temp3 = aarr2[Aa-1];
			aarr2[Aa-1] = aarr2[Bb-1];
			aarr2[Bb-1] = temp3;
		}
}

int main() {
	
	int n;
	int arr1[1001];
	int arr2[1001];
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>arr1[i];
	}
	for(int j=0;j<n;j++) {
		cin>>arr2[j];
	}
	
	int jlhPertukaran;
	
	cin>>jlhPertukaran;
		
	char first,second;
	int firsts,seconds;		
		
	for(int i=0;i<jlhPertukaran;i++) {	
		cin>>first>>firsts>>second>>seconds;				
		changePosition(arr1,arr2,firsts,seconds,first,second);
	}						
	
	display(arr1,arr2,n);
	return 0;
}