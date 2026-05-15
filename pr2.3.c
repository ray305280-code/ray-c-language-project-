#include<stdio.h>

int main()
{
	int score;
	char grade;
	
	printf("Enter your score:");
	scanf ("%d", &score);
	
	grade = (score >= 95) ? 'A':
			(score >= 90) ? 'B':
			(score >= 85) ? 'C':
			(score >= 80) ? 'D': 'F';
			
	printf("your grade is = %c", grade);
	switch(grade)
	
	{
		case 'A':
			printf("Excellent Work\n");
			break;
			
		case 'B':
			printf("Well done\n");
			break;	
		
		case 'C':
			printf("Good job\n");
			break;
			
		case 'D':
			printf("you passed but do better\n");
			break;
		
		case 'E':
			printf("Failed\n");
			break;
			
		default:
			printf("Invalid\n");	
			
	}
	
	{
		if(grade ='A' || grade = 'B' || grade = 'C' || grade = 'D');
;	}
	
	{
		printf("you are eligible for the next level");
	}
	
	
	{
		printf("please try again next time");
	}			
}