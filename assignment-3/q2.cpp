#include <iostream>
#include <stack>
#include <string>

using namespace std;

	string reverse(string a){
		stack<char> s;
		for(int i=0;i<a.length();i++){
			s.push(a[i]);
		}
		
		string reversed = "";
		
   		while (!s.empty()) {
        reversed += s.top();
        s.pop();
   		}

    return reversed;
	}
	
int main(){
	string str;

	cout<<"Enter the string you want to reverse :";
	getline(cin,str);
	cout<<reverse(str);
	
	return 0;
}

