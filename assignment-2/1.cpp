#include <iostream>
using namespace std;

int main(){
	int n,num,arr[10];
	
	int found=0;
	
	cout<<"Enter no. of array elements ";
	cin>>n;
	
	cout<<"Enter elements :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the number you want to find : ";
	cin>>num;
	
	int l=0;
	int r=n-1;
	int mid;
	
	while(l<=r){
		
		mid=(l+r)/2;
		
		if(arr[mid]==num){
			found=1;
			cout<<num<<" found at index "<<mid;
			break;
			
		}
		
		else if(arr[mid]>num){
			r=mid-1;
			
		}
		
		else{
			l=mid+1;
			
		}
			
	}
	
	if(!found){
		cout<<num<<" not found at any index.";
	}
	return 0;
}
