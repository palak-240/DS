#include <iostream>
using namespace std;
int main(){
	
	char str[30]="HELLO how are you";
	char temp;
	
	int count=0,i=0,l=0;
	while (str[count]!='\0'){
		count++;	
	}
	int r=count-1;
	while(l<=r){
		temp=str[r];
		str[r]=str[l];
		str[l]=temp;
		l++;
		r--;
	}
	
	cout << "Reversed string: " << str << endl;
}
