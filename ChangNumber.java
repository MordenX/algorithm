/**
 * 
 */
package 进制转换与字符串;

import java.util.Scanner;

/**
 * @ClassName: ChangNumber
 * @Function:
 * @author:Java青铜战士
 * @Time:2018年4月17日下午11:41:36
 */
public class ChangNumber {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int i=in.nextInt();
		Stack1 s=new Stack1();
		do{
			int m=i%2;
			i/=2;
			s.input(m);
		}while(i!=0);
		if(s.size()%4!=0){
			for (int j = 0; j < 4-s.size()%4; j++) {
				System.out.print("0");
			}
		}
		int t=s.size();
		for (int j = 0; j < t; j++) {
			System.out.print(s.getTop());
			s.out();
		}
	}
	static class 	Stack1{
		int[] sta;
		 int theTop;
		int m;
		 public Stack1(){
			sta=new int[20];
			this.theTop=0;
		}
		
	public int size(){
		return theTop;
	}
		
	public int getTop(){
		return sta[theTop-1];
	}
	public boolean isEmpty(){
		return theTop==0;
	}
		public void input(int c){
			sta[theTop]=c;
			theTop++;
		}
		
		public int out(){
			return sta[theTop--];
			
		}
		
	
	}

}
