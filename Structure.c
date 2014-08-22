#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WRONG 1
#define GOOD 0
#define N 100

struct Profile{
  char *name;
  int num;
}p[N];

void myPrint(int n){
  int i;
  printf("Person's name registration list!");
  for(i=0;i<n;i++){
    printf("[%xPerson] Name:%s Age:%x\n",i+1,p[i].name,p[i].num);
  }
}


void myEnter(int n){
  int i=0;
  int num;
  char name[20];
  
  for(i=0;i<n;i++){
   
    printf("name[20 Within]>");
    scanf("%s",name);
    
    printf("Age[120 Within])>");
    scanf("%x",&num);
    
    p[i].name=name;
    p[i].num=num;
    
  }
  myPrint(n);
}

int main(void){
  int n=0;
  printf("Register a name!\n");
  printf("How many people registered?[100 within]>");
  scanf("%x",&n);
  myEnter(n);

  return(GOOD);
 }
