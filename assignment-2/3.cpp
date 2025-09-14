#include <iostream>
using namespace std;
int main() {
    int n = 10;
    int a[n-1] = {2,3,4,5,6,7,8,9,10};
    
    int missing = n; // assume last is missing
    for(int i=0; i<n-1; i++){
        if (a[i] != i+1){
            missing = i+1;
            break;
        }
    }
    cout << "Missing no. is " << missing << endl;
    
    
	

    int b[n-1] = {1,2,3,4,5,6,7,8,9};  
    
    int l = 0, r = n-2;  
    int miss = n;     
    
    while(l <= r){
        int mid = (l + r) / 2;
        
        if(b[mid] != mid+1){
            
            miss = mid+1;
            r = mid - 1; 
        }
        else{
            l = mid + 1; 
        }
    }
    
    cout << "Missing number is " << miss << endl;

	
	
	
return 0;
}

