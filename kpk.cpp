#include <iostream>
using namespace std;

int main(){
    int j, k;
    cin>>k;
    cin>>k;
    
   	if(j<0|| k<0|| j>k){
   		cout<<"Input Salah";
	   }else{
	   	for(int b=j; b<=k; b++){
	   		if(b==0){
	   			cout<<"0 ";
			}
			else if(b%18==0){
				cout<<"Delapan Belas ";
			}else if(b%15==0){
				cout<<"Lima Belas ";
			}
			else
			cout<<b<<" ";
		
		}
}
	  
	   
    
    return 0;
}
