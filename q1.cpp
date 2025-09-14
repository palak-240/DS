#include <iostream>
using namespace std;

int main() {
    int num;
    int arr[100];   
    int n = 0;     

    while (true) {
        
        cout << "\nChoose an option:\n";
        cout << "1. Create\n";
        cout << "2. Display\n";
        cout << "3. Insert\n";
        cout << "4. Delete\n";
        cout << "5. Linear Search\n";
        cout << "6. Exit\n";
        cin >> num;

        switch(num) {
            case 1: {
                cout << "Enter number of elements: ";
                cin >> n;
                for(int i=0; i<n; i++) {
                    cout << "Enter element " << i << ": ";
                    cin >> arr[i];
                }
                break;
            }

            case 2: {
                cout << "Array elements: ";
                for(int i=0; i<n; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
                break;
            }

            case 3: {
                int pos, element;
                cout << "Enter position (0 to " << n << ") and element: ";
                cin >> pos >> element;

                if(n == 100) {
                    cout << "Array full!\n";
                    break;
                }
                if(pos < 0 || pos > n) {
                    cout << "Invalid position!\n";
                    break;
                }

                // shift right
                for(int i=n; i>pos; i--) {
                    arr[i] = arr[i-1];
                }
                arr[pos] = element;
                n++;
                cout << "Element inserted.\n";
                break;
            }

            case 4: {
                int pos;
                cout << "Enter position (0 to " << n-1 << ") to delete: ";
                cin >> pos;

                if(pos < 0 || pos >= n) {
                    cout << "Invalid position!\n";
                    break;
                }

                // shift left
                for(int i=pos; i<n-1; i++) {
                    arr[i] = arr[i+1];
                }
                n--;
                cout << "Element deleted.\n";
                break;
            }

            case 5: {
                int element;
                cout << "Enter element to search: ";
                cin >> element;
                bool found = false;
                for(int i=0; i<n; i++) {
                    if(arr[i] == element) {
                        cout << "Found at index " << i << "\n";
                        found = true;
                        break;
                    }
                }
                if(!found) cout << "Not found\n";
                break;
            }

            case 6:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Wrong choice!\n";
        }
    }
}

