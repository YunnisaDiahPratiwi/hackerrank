#include <iostream>
using namespace std;
int main(){
	int t, n, a, i, j, jumlah;
	cin>>t;
	for(i=0; i<t; i++){
		jumlah=0;
		cin>>n;
		for(j=0; j<n; j++){
			cin>>a;
			jumlah=jumlah+a;
		}
	cout<<"Case #"<<i+1<<": "<<jumlah<<endl;
	}
	return 0;
}
