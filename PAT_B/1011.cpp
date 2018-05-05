#include<iostream>
using namespace std;
int main(){
	long a,b,c;
	int i;
	cin>>i;
	int j=0;
	while(j<i){
		cin>>a>>b>>c;
		cout<<"Case #"<<++j<<": ";
		if(a+b>c) cout<<"true";
		else cout<<"false";
		cout<<"\n";
	}
	return 0;
} 

