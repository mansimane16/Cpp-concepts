#include<iostream>
using namespace std;

int main(){
	int n ;
	cout<<"Enter n : ";
	cin>>n;
	for(int i =1 ; i<=n; i++){
		for(int j =1 ; j<=n-i; j++){
//			if(j<=n-i ){
//				cout<<" ";
//				
//			}
//			else{
//				
//				cout<<"* ";
//			}

			cout<<" ";
		}
		for(int j = 1 ; j<=i ; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
