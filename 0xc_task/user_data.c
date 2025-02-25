#include<stdio.h>
int main(){
char name[10];
int age;
int i,temp,array[5];
printf("Please enter your name\n");
scanf("%s", name);
printf("Please enter your age\n");
scanf("%d", &age);
printf("Hello, %s! You are %d years old.\n",name,age);
printf("Please enter first  number\n");
scanf("%d", &array[0]);
printf("Please enter second number\n");
scanf("%d", &array[1]);
printf("Please enter third number\n");
scanf("%d",&array[2]);
printf("Please enter fourth number\n");
scanf("%d", &array[3]);
printf("Please enter fifth number\n");
scanf("%d", &array[4]);
for(i=0;i<5;i++){
for(int j=0;j<5;j++){
if(array[j]>array[j+1]){
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;}
}
}
printf("The numbers in ascending order are;\n");
for(i=0;i<5;i++){
printf("%d, ",array[i]);
}
float avg;
int sum=array[0]+array[1]+array[2]+array[3]+array[4];
avg=sum/5;
printf("The average of these numbers is %.2f\n",avg);
return 0; }

