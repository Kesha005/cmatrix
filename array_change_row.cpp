#include <iostream>

using namespace std;


int main(){
	int a[100][100], r, c, row1, row2,i,j, changing[2];
	
	cout<<"Enter the number of rows matrix: ";
	cin>>r;
	
	
	cout<<"Enter the number of columns of matrix";
	cin>>c;
	
	cout<<endl<<"Enter the elements of matrix: "<<endl;
	
	
	for (i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<endl<<"Enter the element of A"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	
	
	cout<<"This is our matrix:"<<endl;
	
	
	for (i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<a[i][j]<<" ";
			if(j == c-1){
				cout<<endl;
			}
		}
	}
	
	cout<<"Enter the number of rows which you want change: ";
	cin>>row1;
	cout<<endl;
	cin>>row2;
	swap(a[row1],a[row2]);	
	for (i=0; i<r; i++){
		for(j=0; j<c; j++){
			cout<<a[i][j]<<" ";
			if(j == c-1){
				cout<<endl;
			}
		}
	}
	
		
 }