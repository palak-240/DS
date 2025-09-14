#include <iostream>
using namespace std;

int main(){
	int n=7,j=0;
	int arr[7]={4,7,5,1,4,1,5};
	bool visited[100]={false};
	int uniquearr[]={};
	
	for (int i=0;i<n;i++){
		if(!visited[arr[i]]){
			visited[arr[i]]=true;
			uniquearr[j++]=arr[i];
		}
	}
    
    cout<<"no. of unique elements are : "<< j;
    cout<<"\n";
    
    for (int i=0;i<j;i++){
    	cout<< uniquearr[i]<<" " ;
    }
}
	
