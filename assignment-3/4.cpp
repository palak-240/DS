#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op){
	if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
	
}

string postfix(string a){
	stack<char> s;
	string postfix;
	
	for(int i=0;i<a.length();i++){
		char ch=a[i];
		
		if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z' ||ch>='0'&& ch<='9'){
			postfix+=ch;
		}
		else if(ch=='('){
			s.push(ch);
		}
		else if(ch==')'){
			while(!s.empty() && s.top()!='('){
			postfix+=s.top();
			s.pop();
			}
			if (!s.empty() && s.top() == '(') s.pop();
		}
		else{
			while (!s.empty() && precedence(a[i]) <= precedence(s.top())){
				postfix+=s.top();
				s.pop();
			}
			s.push(ch);
		}	
	}
	
	while (!s.empty()) {
    	postfix += s.top();
    	s.pop();
    }

		
	
	return postfix;
	
}



int main(){
	string expr;
	cout<<"Enter an infix expression :";
	cin>>expr;
	cout<<postfix(expr);
	return 0;
}
