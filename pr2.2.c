#include<stdio.h>

int main()
{
	int score;
	char grade;
	
	printf("Enter your score:");
	scanf("%d", & score);
	
	grade = (score >= 100) ? 'A':
			(score >= 90) ? 'B':
			(score >= 80) ? 'C':
			(score >= 70) ? 'D': 'F';
			
	printf("your score is = %c", grade);
		switch(grade)
		
	{
		case 'A':
			printf("Excellent work");
			break;
			
		case 'B':
			printf("Well done");
			break;	
			
		case 'C':
			printf("Good job");
			break;
	 
     	case 'D':
			printf("You passed, but you do better");
			break;
			
		case 'E':
			printf("Failed");
			break;
			
		default:
			printf("Invalid");
	}
}

/*
Enter your score:92
your score is = B Well done

*/
