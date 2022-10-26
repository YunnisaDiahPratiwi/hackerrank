#include <iostream>
using namespace std;
int main(){
	int nyawa, b;
	string tebakan, jawaban;
	
	cin>>nyawa;
	if(nyawa>10){
		cout<<"INPUTAN SALAH";
	}
	if(nyawa<1){
		cout<<"INPUTAN SALAH";
	}
	else if(nyawa<=10){
		cin>>jawaban;
	
		for(int b=nyawa; b>0; b--){
		cin>>tebakan;
	
		if(tebakan==jawaban){
			cout<<"MENANG "<<b;
			break;
		}
		else if(b==1){
			cout<<"KALAH 0";
			break;
		}
		}
	}
	return 0;
}
