#include<iostream>
using namespace std;
int main(){
	int n,m;
	
	cin>>n>>m;
	int arry[n];
	if(m>n) m=m%n;
	for(int i=0;i<n;i++){
		cin>>arry[(i+m)%n];
	}
	int flag=1;
	for(int i=0;i<n;i++){
		if(flag==1){ 
			cout<<arry[i];
			flag=0; 
		}else{
			cout<<" "<<arry[i];
		}
	}
	return 0;
} 
