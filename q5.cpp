#include <iostream>
using namespace std;

int main(){
	
	int r=3, c=3;
	int arr[r][c];
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<r;i++){
		int rs=0;
		for(int j=0;j<c;j++){
			rs+=arr[i][j];
		}
		cout<<"sum of row "<<i+1<<"="<<rs<<endl;
	}
	
	for(int j=0;j<c;j++){
		int cs=0;
		for(int i=0;i<r;i++){
			cs+=arr[i][j];
		}
		cout<<"sum of col "<<j+1<<"="<<cs<<endl;
	}
	
	
}
