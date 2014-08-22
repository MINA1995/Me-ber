#include <stdio.h>
#include <stdlib.h>
#define WRONG 1
#define GOOD 0

struct Profil{
  char *name;
  int num;
} p;


void myPrint(char *name,int num){
  
  p.name=name;
  p.num=num;
  printf("NAME:%s AGE:%x\n",p.name,p.num);
}

int main(void){

  struct Profil p;
  char name[20];
  int num;

  printf("you are profil!\n");
  printf("name[20 Within]>");
  scanf("%s",name);
  printf("Age[120 Within])>"); 
  scanf("%x",&num);
  
  myPrint(name,num);

  return(GOOD);
  
}
