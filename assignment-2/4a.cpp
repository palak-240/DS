#include <iostream>
using namespace std;
int main(){
	
	char str1[20]="HELLO ";
	
	char str2[]="WORLD";
	
	int l1=0,l2=0,i=0;
	
	while (str1[i]!='\0'){
		l1++;
		i++;
	}
	
	i=0;
	while(str2[i]!='\0'){
		l2++;
		i++;
	}
	
	for(i=0;i<l2;i++){
		str1[i+l1]=str2[i];
	}
	
	str1[l1+l2]='\0';
	
	for(i=0;i<l1+l2;i++){
		cout<<str1[i];
	}

return 0;
}
