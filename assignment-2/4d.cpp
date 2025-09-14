#include <iostream>
#include<cstring>
using namespace std;

int main(){
	
	int n;
    cout << "Enter number of strings: ";
    cin >> n;
    
    char str[20][50];   // array of strings (max 20 strings, each of length 50)
    char temp[50];
    
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(str[j],str[j+1])>0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}	
	}
	
	cout << "\nStrings in alphabetical order:\n";
    	for (int i = 0; i < n; i++) {
        	cout << str[i] << endl;
    	}	
	
return 0;
}
