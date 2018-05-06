#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,m;
	int t=0;
	cin>>n>>m;
	bool judge=false;
	int flag=1;
	int k=0;
	if(n==1){
		cout<<"2";
		flag=0;
		t++;
	}
	k++;
	for(int i=3;k<m;i++){
		for(int j=2;j<=sqrt(i)+1;j++){
			if(i%j==0) break;
			else if(j>=sqrt(i)){
				k++;
				if(k==n||judge||(n==1&&k==2)){
					++t;
					judge=true;;
					if(flag==1) {
						cout<<i;
						flag=0;
					}else{
						if(t%10==0){
						cout<<" "<<i;
						flag=1;
						cout<<"\n";
						}else{
						if(flag==1){
						  cout<<i;
						  flag=0;
						}
						else{
							cout<<" "<<i;
						}
					}
					}
				}
			}	
		} 
	}
	
	
	
	return 0;
} 
