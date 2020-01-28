import java.util.Arrays;
import java.util.Scanner;

public class StringAnagram {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter First String: ");
		String str1 = input.nextLine();
		
		System.out.println("Enter Second String: ");
		String str2 = input.nextLine();
		
		//Remove Space
		str1=str1.replace(" ", "");
		str2=str2.replace(" ", "");
		
		//change case to a common case
		str1=str1.toLowerCase();
		str2=str2.toLowerCase();
		
		//Convert to Array
		char str1arr[]=str1.toCharArray();
		char str2arr[]=str2.toCharArray();
		
		//Sort char arrays
		Arrays.sort(str1arr);
		Arrays.sort(str2arr);
		
		
		//Compare two sorted arrays
		
		if(Arrays.equals(str1arr,str2arr)) {
			System.out.println("Strings are Anagram");
		}
		else {
			System.out.println("Strings are not Anagram");
		}

	}

}
