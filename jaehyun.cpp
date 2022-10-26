#include <iostream>
using namespace std;
int main(){
	int i, n, nilai[10];
	float rata, lulus, jumlah;
	
	cin>>n;
	if(n==0)
	jumlah=0;
	 
    for(i=0; i<n; ++i){
        cin>>nilai[i];
        jumlah+=nilai[i];
	}
	rata=jumlah/n;
	lulus=0;
	
	for( i=0; i<n; ++i){
		if(nilai[i]>=rata)
		lulus++;
	}
    cout<<rata<<endl;
	cout<<lulus<<endl;
		 
	return 0;
	
}
