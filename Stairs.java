/**
 * 
 */
package ����ת�����ַ���;

import java.util.HashMap;
import java.util.Map;

/**
 * @ClassName: Stairs
 * @Function:��¥������
 * @author:Java��ͭսʿ
 * @Time:2018��4��17������12:35:56
 */
public class Stairs {

	/**
	 * @param args
	 */
	static Map<Integer, Integer> map=
			new HashMap<Integer, Integer>();
	public static void main(String[] args) {
			System.out.println("10��¥�ݹ���"+sum(10)+"���Ϸ�");
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
