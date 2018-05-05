#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool cmp(int a, int b) {return a > b;}
int main(){
	int n;
	int k;
	map<int ,int >num;
	int s=0;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++){
		cin>>k;
		m[i]=k;
		while(1){
			if(k==1) break;
			else if(k%2==0){
				k/=2;
				if(num[k]==1){
					break;				
				}else{
					num[k]=1;
				}
			}else{
				k=(k*3+1)/2;
				if(num[k]==1){
					break;
				}else{
					num[k]=1;
				}
			}
		}
	}
	int flag=1;
	sort(m,m+n,cmp);
	for(int i=0;i<n;i++){
		if(num[m[i]]==1) continue;
		else {
			if(flag==0)
			cout << " "<<m[i] ;
			else{
				cout << m[i];
				flag=0;
			}
		}
	}
	return 0;
}
