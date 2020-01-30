import java.util.Scanner;

public class StringPangram {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int char_counter[]=new int[26];
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter String: ");
		String str1 = input.nextLine();
		str1=str1.replace(" ", "");
		str1=str1.toLowerCase();
		char str_to_char[]=str1.toCharArray();
		
		int i=0;
		while(i!=str_to_char.length) {
			
			char_counter[str_to_char[i]-'a']=1;
			++i;
		}
		
		
		i=0;
		while(i!=26) {
			if(char_counter[i]==1)
				i++;
			else {
				System.out.println("Not-Pangram");
				System.exit(0);
			}
		}
		System.out.println("Pangram");
		
		
		input.close();
	}

}
