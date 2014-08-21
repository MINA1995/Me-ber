#include <stdio.h>

struct{
  char *name;
  int num;
}profil;

int main(){

  char name[15];
  int num;
  
  printf("you are profil(ex: name[15 Within] Age[0~120])>");
  scanf("%s %x", name,&num);
  

  profil.name=name;
  profil.num=num;
  
  printf("NAME:%s AGE:%x\n",profil.name,profil.num);
  return(0);
  

}
