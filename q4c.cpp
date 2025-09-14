#include <iostream>
using namespace std;
int main(){
	int r=2;
	int c=3;
	int a[r][c];
	
	cout<<"enter elments of an array : \n";
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	

	cout<<"transpose :\n";
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
