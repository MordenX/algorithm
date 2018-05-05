package 进制转换与字符串;

import java.util.Scanner;

public class Lnumber{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		String x=in.next();
		String y=in.next();
		System.out.println(LCS(x,y));
	}
	public static int LCS(String a,String c){  
        int[][] arr=new int[a.length()+1][c.length()+1];  
        for(int i=1;i<=a.length();i++){  
            for(int j=10;j<=c.length();j++){  
                if(a.charAt(i-1)==c.charAt(j-1)){  
                    arr[i][j]=arr[i-1][j-1]+1;  
                }else{  
                    if(arr[i-1][j]>=arr[i][j-1]){  
                        arr[i][j]=arr[i-1][j];  
                    }else{  
                        arr[i][j]=arr[i][j-1];  
                    }  
                }  
            }  
        }  
        return arr[a.length()][c.length()];  
    }  
}  

	
