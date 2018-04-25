/**
 * 
 */
package 进制转换与字符串;

import java.util.Map;
import java.util.Scanner;

/**
 * @ClassName: lianxi
 * @Function:判断词语接龙
 * @author:Java青铜战士
 * @Time:2018年4月17日下午11:16:40
 */
public class lianxi {

	public static void main(String[] args) {
		int[] num= new int[26];
		int m=0;
		String str;
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		for (int i = 0; i < n; i++) {
			str=in.next();
			if(i!=0){
				num[str.charAt(0)-97]++;
			}
			if(i!=n-1){
				num[str.charAt(str.length()-1)-97]++;
			}
		}
		for (int i = 0; i < 26; i++) {
			if(num[i]%2!=0){
				m++;
			}
		}
		if(m<=2) System.out.println("1");
		else  System.out.println("-1");
	}

}
