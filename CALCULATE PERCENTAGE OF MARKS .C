#include<stdio.h>

int calper(int marks1,int marks2,int marks3,int marks4,int marks5);


int main(){
int marks1;
int marks2;
int marks3;
int marks4;
int marks5;

printf("ENTER THE MARKS OF FIRST SUBJECT:");
scanf("%d",&marks1);

printf("ENTER THE MARKS OF SECOND SUBJECT:");
scanf("%d",&marks2);

printf("ENTER THE MARKS OF THIRD SUBJECT:");
scanf("%d",&marks3);

printf("ENTER THE MARKS OF FOURTH SUBJECT:");
scanf("%d",&marks4);

printf("ENTER THE MARKS OF FIFTH SUBJECT:");
scanf("%d",&marks5);




printf("percentage is %d",calper(marks1, marks2, marks3,marks4, marks5));

  return 0;

}

int calper(int marks1, int marks2, int marks3 , int marks4, int marks5 ){
return ((marks1+marks2+marks3+marks4+marks5)/5);

return 0;
}
