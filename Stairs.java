/**
 * 
 */
package 进制转换与字符串;

import java.util.HashMap;
import java.util.Map;

/**
 * @ClassName: Stairs
 * @Function:上楼梯问题
 * @author:Java青铜战士
 * @Time:2018年4月17日上午12:35:56
 */
public class Stairs {

	/**
	 * @param args
	 */
	static Map<Integer, Integer> map=
			new HashMap<Integer, Integer>();
	public static void main(String[] args) {
			System.out.println("10层楼梯共有"+sum(10)+"中上法");
	}
	/**
	 * @param i
	 * @return
	 */
	private static int sum(int i) {
		if(i==1) return 1;
		if(i==2) return 2;
		if(map.containsKey(i)){
			return map.get(i);
		}else{
			int val=sum(i-1)+sum(i-2);
			map.put(i, val);
			return val;
		}
	}

}
