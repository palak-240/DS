// question additional 1 

#include<iostream>

using namespace std;

void function(int a[],int n,int k){
    
    int i,j;
    int count=0;

    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(a[i]-a[j]==k){
                count++;
            }
        }
    }

    cout<<"number of times a[i]-a[j]==k is "<<count<<endl;

}

int main(){

    int a[10]={1,2,4,6,7,9,11,14,18,22};
    int n=10;
    int k=2;

    function(a,n,k);

    return 0;
}