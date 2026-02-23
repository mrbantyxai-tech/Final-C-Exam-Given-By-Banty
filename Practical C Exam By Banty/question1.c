#include <stdio.h>

int main(){
	
	int i;
    int marks[5];
    int sum = 0;
    float avg;
    char grade;
    
		for(i = 1; i < 6; i++) {
    		printf("Enter marks of subject No %d :-",i);
			scanf("%d", &marks[i]);
        	sum += marks[i];
		}
        
    avg = sum / 5.0;

    if(avg >= 90)
        grade = 'A';
    else if(avg >= 75)
        grade = 'B';
    else if(avg >= 60)
        grade = 'C';
    else if(avg >= 50)
        grade = 'D';
    else
        grade = 'F';

    printf("\nAverage = %.2f\n", avg);
    printf("Grade = %c\n", grade);
    
    return 0;
}



