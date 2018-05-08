import java.util.Scanner;


public class Main {

	static char map[][]=new char[10][10];  
	static  int vis[]=new int[10]; 
	static  int cnt; 
	static  int sum;
	static  int n,k;  
 	static void dfs(int s)  
	{  
	    int i;  
	    if(cnt==k){ 
	        sum++;  
	        return ;  
	    }  
	    else{  
	        if(s>=n)  
	            return ;  
	        else{  
	            for(i=0;i<n;i++){  
	                if(map[s][i]=='#'&&vis[i]==0){  
	                    vis[i]=1;  
	                    cnt++;
	                    dfs(s+1);  
	                    cnt--; 
	                    vis[i]=0;  
	                }  
	            }  
	            dfs(s+1); 
	        }  
	    }  
	}  
	public static void main(String[] args)  
	{  
		Scanner in=new Scanner(System.in);
	    while(true){  
	    	n=in.nextInt();
	    	k=in.nextInt();
	    	if(k==-1&&n==-1) break;
	    	for(int i=0;i<n;i++){
	    		String s=in.next();	
	    		for (int j = 0; j < n; j++) {
						map[i][j]=s.charAt(j);
					}
	            }
	    cnt=sum=0;  
	        dfs(0);  
	        System.out.println(sum);	
	    }  
	}  
}