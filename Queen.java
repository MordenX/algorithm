/**
 * 
 */
package 进制转换与字符串;

/**
 * @ClassName: Queen
 * @Function:
 * @author:Java青铜战士
 * @Time:2018年4月11日上午12:04:50
 */
public class Queen {  
    public static int num = 0;   
    public static final int MAXQUEEN = 8;
    public static int[] cols = new int[MAXQUEEN];
    public Queen() {  
      getArrangement(0);  
      System.out.print("/n");  
      System.out.println(MAXQUEEN+"皇后问题有"+num+"种摆放方法。");  
    }  
      
    public void  getArrangement(int n){  
    	boolean[] rows = new boolean[MAXQUEEN];  
    	for(int i=0;i<n;i++){  
        rows[cols[i]]=true;  
        int d = n-i;  
        if(cols[i]-d >= 0)rows[cols[i]-d]=true;  
        if(cols[i]+d <= MAXQUEEN-1)rows[cols[i]+d]=true;   
        
     }  
     for(int i=0;i<MAXQUEEN;i++){  
       //判断该行是否合法    
       if(rows[i])continue;  
       //设置当前列合法棋子所在行数  
       cols[n] = i;  
       //当前列不为最后一列时  
       if(n<MAXQUEEN-1){  
         getArrangement(n+1);  
       }else{  
         num++;  
         printChessBoard();  
       }   
     }  
    }  

    public void printChessBoard(){  
       System.out.print("第"+num+"种走法 /n");  
       for(int i=0;i<MAXQUEEN;i++){  
         for(int j=0;j<MAXQUEEN;j++){  
           if(i==cols[j]){  
             System.out.print("0 ");  
           }else  
             System.out.print("+ ");  
         }  
         System.out.print("/n");  
       }  
         
    }  
    public static void main(String args[]){  
      Queen queen = new Queen();  
    }  
     
} 
