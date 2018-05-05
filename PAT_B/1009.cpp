#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<string> sta;
	string s;
	while(cin>>s){
		sta.push(s);
	}    
	cout << sta.top();
	sta.pop();
	while(!sta.empty()){
		cout<<" "<<sta.top();
		sta.pop();
	}
	return 0;
}
