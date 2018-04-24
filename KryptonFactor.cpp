#include<cstdio>
int s[85];
int l,k,cnt=1;
int dfs(int cur);
int main(){
	scanf("%d %d",&l,&k);
	dfs(0);
	return 0;
} 

int dfs(int cur){
	if(cur==k){
		for(int i=0;i<cur;i++){
			printf("%c",'A'+s[i]);
		}
		printf("\n");
		return 0;
	}
	
	for(int i=0;i<l;i++){
		s[cur]=i;
		int ok=1;
		for(int j=1;j*2<=cur+1;j++){
			int equal=1;
			for(int n=0;n<j;n++){
				if(s[cur-n]!=s[cur-n-j]){
					equal=0;
					break;
			
				}			
			}
			if(equal){
				ok=0;
				break;	
			}	
		}
	if(ok) if(!dfs(cur+1)) return 0;
		
	}
	return 1;
}