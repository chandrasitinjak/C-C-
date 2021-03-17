#include <bits/stdc++.h>

using namespace std;

string matrix[1001][1001];
int x,y;
int numMin, numMax,startMin,startMax;

void recursive(int start, int i, int j,int *min, int *max,int current,int numCount) {
    //last line
    if(i>=x-1){
        if(matrix[i][j].compare(".")!=0){
            numCount++;
            int val = current + stoi(matrix[i][j]);
            if (val>*max){
                *max = val;
                numMax=numCount;
                startMax=start;
            }
            if (val<*min || *min==-1){
                *min = val;
                numMin=numCount;
                startMin=start;
            }
        }
    }else if(j<0 || j>=y){
        // nothing to do
    }else if(matrix[i][j].compare(".")==0){
        //ke bawah
        recursive(start, i+1,j,min,max,current,numCount);
    }else{
        int num = stoi(matrix[i][j]);
        numCount++;
        //ke kiri
        recursive(start, i+1,j-1,min,max,current+num,numCount);
        //ke kanan
        recursive(start, i+1,j+1,min,max,current+num,numCount);
    }
}

int main(){
	
	//Input Matriks
    scanf("%d %d",&x,&y);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>matrix[i][j];
        }
    }
    
    int min=-1, max=-1;
    for(int j=0;j<y;j++){
        recursive(j,0,j,&min,&max,0,0);
    }
    
    printf("%d %d %d\n%d %d %d\n",startMax+1, max,numMax, startMin+1, min,numMin);
    
    return 0;
}
