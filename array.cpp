#include <iostream>


using namespace std;


int main(){
	int c, r, a[100][100], b[100][100], sum[100][100], i ,j;
	
	cout<<"Enter the number of rows matrix ";
	cin>>r;
	
	cout<<"Enter the number of columns of matrix: ";
	cin >> c;
	
	cout<<"Enter the elements of first matrix: "<<endl;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout <<endl<<"Enter the element of a"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	
		cout <<endl<<"Enter the elements of second matrix: "<<endl;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout <<endl <<"Enter the element of b"<<i+1<<j+1<<" : ";
			cin>>b[i][j];
		}
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	cout <<"The sum of 2 matrix is: "<<endl;
	
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout <<sum[i][j]<<" ";
			if(j == c-1){
				cout<<endl;
			}
			
		}
	}
	
	
	
	
	
}