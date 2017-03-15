/*
 * Problem. 2 
 * 
 * Find Fibonacci Sequence & print even number's sum
 */

import java.util.Scanner;

public class problem2 {

	public static int Fibonacci(int num)          // Find Fibonacci algorithm
	{ 
		if(num == 1)
			return 1;
		else if(num == 2)
			return 2;
		else
			return Fibonacci(num-1)+Fibonacci(num-2);
	}
	
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		long result = 0;                     // result == sum of even number (in Fibonacci Sequence)
		
		System.out.print("Input max number: "); 
		int input = scanner.nextInt();
		
		for(int i=1; Fibonacci(i)<= input; i++)    // If Max number of Fibonacci(i) > input, break;
		{
			if(Fibonacci(i) % 2 == 0)
				result += Fibonacci(i);
		}
		System.out.println(result);
	}
}