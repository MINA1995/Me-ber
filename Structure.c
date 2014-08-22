#include <stdio.h>
#include <stdlib.h>

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

  printf("you are profil(ex: name[15 Within] Age[0~120])>");
  scanf("%s %x", name,&num);
  
  myPrint(name,num);

  return(0);
  
}
