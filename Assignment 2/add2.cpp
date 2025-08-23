// question additional 2 (string split challenge)

#include <iostream>
using namespace std;

int sub(char a[],int n,char b[],int m){
    if (n>m){
        return 0;
    }
    for (int i=0;i<=m-n;i++) {
        int k=0;
        while (k<n && b[i+k]==a[k]) {
            k++;
        }
        if (k==n) {
            return 1;
        }
    }
    return 0;
}

int main(){

    char s[]="abccdd";

    int n=0;
    while (s[n]!='\0') {
        n++;
    }

    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){

            char x[100], y[100], z[100];

            int l1=0,l2=0,l3=0;

            for (int k=0;k<=i;k++){
                x[l1++]=s[k];
            }
            for (int k=i+1;k<=j;k++){
                y[l2++]=s[k];
            }
            for (int k=j+1;k<n;k++){
                z[l3++]=s[k];
            }
            if ((sub(x,l1,y,l2) && sub(x,l1,z,l3)) || (sub(y,l2,x,l1) && sub(y,l2,z,l3)) ||(sub(z,l3,x,l1) && sub(z,l3,y,l2))){

                cout<<"YES";

                return 0;
            }
        }
    }
    cout<<"NO";

    return 0;
}