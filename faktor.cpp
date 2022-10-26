#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n; i>0; --i){
		for(int j=i; j<n; j++){
			cout<<"  ";
		}
		for(int k=n; k>n-i; --k){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0;
}
