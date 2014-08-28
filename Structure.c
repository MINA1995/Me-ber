#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

struct list {
	int Age;		
	char Name[20];		
	struct list *next;      
};

int main(void){
  struct list *p;
  struct list *head = NULL;	
  char name[20];
  int age = 0;

  printf("Name-of-a-person registration!\n");
  
  printf("The input of a name(Unril 20)>");
  scanf("%s",name);
  printf("The input of age>");
  scanf("%x",&age);
 
 
  p =(struct list *)malloc(sizeof(struct  list));
  
  
  strcpy(p->Name,name);
  p->Age=age;
  
  p->next=head;
  head = p;
   
  printf("%s %x\n",p->Name,p->Age);
  p=p->next;
  return(0);
}


