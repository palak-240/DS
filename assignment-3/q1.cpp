#include <iostream>

using namespace std;

class stack{
	int top=-1;
	const static int Size=20;
	int arr[Size];
	
	public:
	void push (int n){
		if(isFull()){
			
			cout<<"Stack is overflow";
		}
		else{
			top++;
			arr[top]=n;
		}
	}
	
	void pop(){
		if(isEmpty()){
			
			cout<<"Stack is underflow";
		}
		else{
			top--;
		}
	}
	
	bool isEmpty(){
		return(top==-1);
	}		
	
	bool isFull(){
		return (top==Size-1);		
	}
	
 	 void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
	
	void peek() {
	        if (isEmpty()) {
	            cout << "Stack is empty. Nothing to peek." << endl;
	        } else {
	            cout << "Top element: " << arr[top] << endl;
	        }
	    }
	};


int main(){
	
	int choice, value;
	stack s;
	
	do{
		cout<<"\t\t\t---Stack Operations Menu---\n";
		cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
		
	
	
	switch(choice){
		case 1:
			cout<<"Enter value to push :";
			cin>>value;
			s.push(value);
			break;
			
		case 2:
            s.pop();
            break;
            
        case 3:
            if (s.isEmpty())
                cout << "Stack is EMPTY.\n";
            else
                cout << "Stack is NOT empty.\n";
            break;
            
        case 4:
            if (s.isFull())
                cout << "Stack is FULL.\n";
            else
                cout << "Stack is NOT full.\n";
            break;
            
        case 5:
            s.display();
            break;
            
        case 6:
            s.peek();
            break;
            
        case 7:
            cout << "Exiting program..." << endl;
            break;
            
        default:
            cout << "Invalid choice! Try again." << endl;
        }
        
    } while (choice != 7);
	}

//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.pop();
//	s.pop();
//	s.pop();
//	s.pop();
//	s.push(40);
//	s.push(50);
//	s.pop();
//	s.push(60);
//	s.push(80);
//	s.display();
//	cout << "Top element: " << s.peek() << endl;	
	

