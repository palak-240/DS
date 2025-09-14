#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(string expr){
	stack<char> s;
	
	for(int i=0;i<expr.length();i++){
		char ch = expr[i];
		if(ch=='(' || ch=='{' || ch=='['){
			
			s.push(ch);
		}
		else{
	
			if (s.empty()){
				return false;
			}
			else{
			
				char top=s.top();
				s.pop();
				if ((ch == ')' && top != '(') ||
            	(ch == '}' && top != '{') ||
            	(ch == ']' && top != '['))
					return false;
			}
					
		}
	}
	return s.empty();	
}
	

int main() {
	string expr="()[{}(]";
	if (isBalanced(expr))
        cout << "Parentheses are balanced.\n";
    else
        cout << "Parentheses are NOT balanced.\n";

    return 0;
}

