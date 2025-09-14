#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

int evaluate(string a){
	stack<int> s;
	
	for(int i=0;i<a.length();i++) {
		char ch=a[i];
		
		if (ch>='0'&& ch<='9'){
			s.push(ch-'0');
		}
		else{
			int val1= s.top();
			s.pop();
			int val2=s.top();
			s.pop();
		
			switch(ch){
				case '+': s.push(val2 + val1); break;
                case '-': s.push(val2 - val1); break;
                case '*': s.push(val2 * val1); break;
                case '/': s.push(val2 / val1); break;
                case '^': s.push(pow(val2, val1)); break;
			}
	
		}
		
	}
	return s.top();
}

int main(){
	string expr;
	cout<<"Enter the expression you want to evaluate :";
	cin>>expr;
	cout<<"answer :"<<evaluate(expr);
	
	return 0;
}


