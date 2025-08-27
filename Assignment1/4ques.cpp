// a. Reverse the elements of an array

/*
#include<iostream>
using namespace std;

#define MAX 100
int arr[MAX];
int n=0;

void reverseArray(){
    cout << "enter number of elements: ";
    cin >> n;
    if(n>MAX){
        cout << "Exceeds maximum size. Try again.\n";
        n = 0;
        return;
    }
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    reverseArray();
    cin.ignore();
    cin.get();
    return 0;
}

*/


// b. Find the matrix multiplication

/*
#include<iostream>
using namespace std;


#define MAX 10

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, p, n;

    cout << "Enter rows and columns of first matrix (m p): ";
    cin >> m >> p;

    cout << "Enter rows and columns of second matrix (p n): ";
    int p2;
    cin >> p2 >> n;

    if (p != p2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    // Multiply
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           C[i][j] = 0;
           for(int k=0; k<p; k++){
            C[i][j] += A[i][k] * B[k][j];
           } 
        }
    }
    cout << "Result matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}

*/


// c. Find the Transpose of a Matrix

#include<iostream>
using namespace std;

#define MAX 10
void transpose(){
    int A[MAX][MAX], B[MAX][MAX];
    int n;
    // Transpose only posiible for square matrix
    cout << "Enter number of rows or column: ";
    cin >> n;

    cout << "Enter Elements: \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> A[i][j];
    
    cout << "input Matrix: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            B[i][j] = A[j][i];

    cout << "Result Matrix: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    transpose();
    cin.ignore();
    cin.get();
    return 0;
}