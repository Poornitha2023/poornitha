#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};   

struct node *head=NULL;

//struct node create+a_new( int val){
//struct node*newnode=(struct node*)malloc(sizeof(struct node));     //insteda of doing evry time maling new node write a function
//		newnode->data=val;
//	newnode->next=NULL;
//	return newnode;
void delete_node(){ 
if(head== NULL){
	printf("No node are deleted\n");
}
else{
	struct node*deletenode=head;
	head=head->next;
	free(deletenode);}
} 
void count_nodes(){
int cnt=0;
struct node *temp=head;
	while(temp !=NULL){
		cnt++;
		temp=temp->next;
		
	} 
	
	printf("%d",cnt);
}
void search_element(int val){
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            printf("Found\n");
            return;
        }
        temp = temp->next;
    }
    printf("Not found\n");
}
void 	deletefrom_back(){ 
	if(head==NULL){
		printf("no nodes ar deleted");}
	else if(head->next ==NULL){
		head=NULL;
	}
	else { 	struct node *temp= head;
	
		while(temp->next->next != NULL){
			temp=temp->next;
			
		} 
		temp->next = NULL;
	}
}
void insertion_node(int val,int position){

	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	
	if(head==NULL || position==0){
		newnode->next=head;
		head=newnode;
	}
	
	else{
	
	
		struct node *temp=head;
		while(position>1 && temp->next !=NULL){
	temp=temp->next;
		position--;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
	printf("%d \n",newnode);
}

void insert_at_tail(int val){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));     
		newnode->data=val;
	newnode->next=NULL;
		
	if(head==NULL){
		head=newnode;
	}else{
		struct node*temp=head;
		while(temp->next !=NULL){
			
			temp=temp->next;
		}
		temp->next = newnode;
	}
	
} 

void insert_at_head(int val){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	
	if(head==NULL){
		head=newnode;
	}else{
		newnode->next=head;
		head=newnode;
	}
}
void display(){
	struct node*temp=head;
	if(temp==NULL){
		printf("no nodes\n");
		
	}else{
		while(temp !=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}printf("\n");
	}
}

int main(){
	int ch;
	while(1){
		printf("enter\n1.insert at head\n2.insert at tail\n3.display\n4delete node\n5.dele from back:\n6.search element\n7.countnodes\n 8.insert a node\n");
		scanf("%d",&ch);
		if(ch==1){
			int val;
			printf("enter:\n");
			scanf("%d",&val);
			insert_at_head(val);
		}	else if(ch==2){
			int val;
			printf("enter:\n");
			scanf("%d",&val);
			insert_at_tail(val);
			}	else if(ch==3){
			display();
		}else if(ch == 4){
			
			delete_node();
		} else if(ch==5){
			deletefrom_back();
		} else if(ch==6){
			int val;
			printf("Enter: \n");
			scanf("%d",&val);
			
			 search_element(val);
			
		} else if(ch==7){
			
			count_nodes();
			
		}else if(ch==8){
		int val,position;
		printf("enter value: \n enter position\n");
		scanf("%d %d",&val,& position);
		insertion_node(val,position);
	
	
		
		
		}
		
		else{
			printf("thankyou\n");
			break;
		}
		
		
			}
}
