#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

struct list {
  int Age;		
  int N;
  char Name[20];	
  struct list *next;      
};


void myPrintf(struct list  *p){
 
  while(p !=NULL){
    printf("Name:[%s]Age:[%x]\n",p->Name,p->Age);
  p=p->next;
  }

}
int main(void){
  struct list *p;
  struct list *head = NULL;	
  char name[20];
  int age = 0;
  int f=1;
  int n=0;

  printf("Name-of-a-person registration!\n"); 

  while(f){
    printf("The input of a name(Unril 20)>");
    scanf("%s",name);
    printf("The input of age>");
    scanf("%x",&age);  
    p =(struct list *)malloc(sizeof(struct  list));
    if(age<1){
      f=0;
    }else{
      strcpy(p->Name,name);
      p->Age=age;
      ++n;
      p->N=n;
    }
   p->next=head;
   head = p;
  }   
  myPrintf(head);
  return(0);
}


