#include <stdio.h>
#include <stdlib.h>

struct module{
	char name[20];
	int coef;
	struct module *next;
};

int main(){
	char response;
	struct module *tete = NULL;
	tete = malloc(sizeof(struct module));
	struct module *ptr=tete;
	do{
		printf("\nentrer le module : ");
		scanf("%s", &ptr->name);
		printf("saisir le coeficient : ");
		scanf("%d", &ptr->coef);
		printf("DO you want to add more module : ");
		response = getche();
		if(response == 'y'||response == 'Y'){
			ptr->next=malloc(sizeof(struct module));
			ptr=ptr->next;
		}else{
			ptr->next=NULL;
		}
	}while(response=='y'||response=='Y');
	
	  printf("\n\n ------ Liste des modules ----- \n");
	  ptr = tete;
 	while(ptr != NULL){
	    printf("\n-module    : %s\n", ptr->name);
   		printf("-Coefficient : %d\n---------", ptr->coef);	
		ptr = ptr->next;
  	}
	return 0;
}
