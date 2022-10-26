#include <iostream>
using namespace std;
int main(){
	float a, tambah, kurang, kali, bagi;
	cin>>a;
	tambah= a+a;
	kurang= tambah-1;
	kali= kurang*3;
	bagi= kali/2;
	
	cout<<a<<" plus "<<a<<" is "<<tambah<<endl;
	cout<<"minus one is "<<kurang<<endl;
	cout<<"multiple three is "<<kali<<endl;
	cout<<"divide two is "<<bagi<<endl;
	return 0;
}
