#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m[3]={0};
	int i=0;
	while(n!=0){
	    m[i++]=n%10;
	    n/=10;
	}
	if(m[2]!=0){
		for(int k=0;k<m[2];k++) cout<<"B";
	}
	if(m[1]!=0)		for(int k=0;k<m[1];k++) cout<<"S";
	if(m[0]!=0)for(int k=1;k<=m[0];k++) cout<<k;
	return 0;
}
