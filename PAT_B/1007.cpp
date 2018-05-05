#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int sum=0;
	cin>>n;
	for(int i=5;i<=n;i+=2){
		for(int j=2;j<=sqrt(i);) {
			if(i%j==0 || (i-2)%j==0) break;
			else if(++j>sqrt(i)){
				sum++;
			}
		}
		
	}
	cout<<sum;
	return 0;
}
