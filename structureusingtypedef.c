#include<stdio.h>

typedef struct
{
	int roll;
	char name[10];
	float avg;
}student;

int main()
{
	student s;
	
	printf("\n\tEnter roll : ");
	scanf("%d",&s.roll);
	fflush(stdin);
	
	printf("\n\tEnter name : ");
	scanf("%s",&s.name);
	fflush(stdin);
	
	printf("\n\tEnter avg : ");
	scanf("%f",&s.avg);
	fflush(stdin);
	
	printf("\n\tRoll : %d",s.roll);
	printf("\n\tName :%s",s.name);
	printf("\n\tAvg: %f",s.avg);
	
	return 0;	
}
