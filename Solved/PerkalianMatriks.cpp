#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N, M, P;			
	
	cin>>N>>M>>P;
	
	int matrixA[N+1][M+1];
	int matrixB[M+1][P+1];
	int matrixC[N+1][P+1];
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			cin>>matrixA[i][j];
		}
	}
	
	for(int i=1; i<=M; i++) {
		for(int j=1; j<=P; j++) {
			cin>>matrixB[i][j];
		}
	}							
	
	for(int i=1; i<=N; i++) {
		for(int j=0; j<=P; j++) {
			 matrixC[i][j] = 0;
			for(int k=1; k<= M; k++) {
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}
	
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=P; j++) {
			if(j == P)
				cout<<matrixC[i][j];
			else 
				cout<<matrixC[i][j]<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}