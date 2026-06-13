#include<stdio.h>
void welcomefunc();
void printname();
int main(){
  
welcomefunc();
char name[50];
printf("\nEnter Name: ");
scanf("%s", name);
printname(name);
  
return 0;
}
void welcomefunc(){
printf("Welcome HW-2 Cloud");
}

void printname(char name[]){
printf("\nName: %s",name);  
}
