#include <iostream>
using namespace std;

int main(){
	int a[7]={64,34,25,12,22,11,90};
	int n=7;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
	
	for (int i=0;i<7;i++){
		cout<<a[i]<<"  "<<endl;	
	}
	
return 0;
}
