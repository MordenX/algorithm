#include<cstdio>
void permutation(int m[],int n,int a[],int cur);

int main(){
	int n;
	scanf("%d",&n); 
	int m[n];
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	permutation(m,n,a,0);
	
	
	return 0;
} 

void permutation(int m[],int n,int a[],int cur){
	if(cur==n){
		for(int i=0;i<n;i++){
			printf("%d ",m[i]);
		}
		printf("\n");
	}else{
		for(int i=0;i<n;i++)	if(!i || a[i]!=a[i-1]){
			int c1=0,c2=0;
			for(int j=0;j<cur;j++){
				if(a[i]==m[j]) c1++;
			}
			for(int j=0;j<n;j++) if(a[i]==a[j]) c2++;
			if(c1<c2){
				m[cur]=a[i];
				permutation(m,n,a,cur+1);
			}
		}
	}
}
