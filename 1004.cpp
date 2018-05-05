#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	cin>>n;
	string maxName,noMax;
	string minName,noMin;
	int maxgrade;
	int mingrade;
	for(int i=0;i<n;i++){
		string name,no;
		int grade;
		cin>>name>>no>>grade;
		if(i==0){
			maxName=name;
			noMax=no;
			maxgrade=grade;
			minName=name;
			noMin=no;
			mingrade=grade;
		}else{
			if(maxgrade<grade){
			maxName=name;
			noMax=no;
			maxgrade=grade;
			}
			if(mingrade>grade){
			minName=name;
			noMin=no;
			mingrade=grade;				
			}
		}
	}
    cout << maxName << " " << noMax << " " << maxgrade << "\n";
    cout << minName << " " << noMin << " " << mingrade;
} 
