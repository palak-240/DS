#include <iostream>
using namespace std;
int main(){
	int r1=2;
	int c1=2;
	int r2=2;
	int c2=2;
	int product[2][2];
	int arr1[r1][c1];
	int arr2[r2][c2];
	
	cout<<"Enter elements of 1st array:"<<endl;
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>arr1[i][j];
		}
	}
	
	cout<<"Enter elements of 2nd array:"<<endl;
	
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>arr2[i][j];
		}
	}
	
	if(c1!=r2){
		cout<<"\n Matrix multiplication is not possible";
		return 0;
	} 
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			product[i][j]=0;
		}
	}
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			for( int k=0;k<c1;k++){
				product[i][j]+=arr1[i][k]*arr2[k][j];	
			}	
		}
	}
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			cout<<product[i][j]<<"  ";
		}
		cout<<endl;
	}
	
}
