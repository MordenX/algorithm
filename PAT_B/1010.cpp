#include<iostream>
using namespace std;
int main() {
	int n;
	int j;
	int flag=0;
	while(cin>>n>>j){
		if(flag==0&&j==0) {
			cout<<"0 0";
			flag=1;
		}
		if(j!=0){
			if(flag==1)cout<<" ";
			cout<<n*j<<" "<<j-1;
			flag=1;
		}
	}
    return 0;
}
