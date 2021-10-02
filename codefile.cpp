#include<iostream>
using namespace std;
int main(){
	int i,fact=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<fact;

}