# include <stdlib.h>
# include <string.h>
# include <stdio.h>


struct kutu{
	int data;
	struct kutu * next;
};

struct kutu * back = NULL;
struct kutu * front= NULL;
struct kutu * temp =  NULL;


void push(int veri){
	struct kutu * new = (struct kutu*)malloc(sizeof(struct kutu));
	new -> data = veri;
	new -> next = NULL;
	if(back == NULL){
		back = new;
		front = new;
	}
	else{
		back->next = new;
		back = new;
	}
	
}

void pop(){
	if(front == NULL){
		printf("Your list is empty.");
	}
	else{
		temp = front->next;
		free(front);
		front = temp;
	}
}

void yazdir(){
	temp = front;
	if(front == NULL){
		printf("Your list is empty.");
	}
	else{
		while(temp->next != NULL){
			printf("Your data is: %d \n \n", temp->data);
			temp = temp->next;
		}
		printf("Your data is: %d", temp->data);
	}
}




int main(){

	push(15);
	push(26);
	push(81);
	push(150);
	pop();
	pop();
	yazdir();

	return 0;
}
