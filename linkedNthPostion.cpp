//LINKED LIST:Inserting a node at a nth POSITION
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
struct Node{
    int data;
   struct Node* next;
};
struct Node* head;//global varable can be accessed anywhere
void Insert(int data,int n)
{
	Node* temp1=new Node();
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	Node* temp2=head;
	for(int i=0;i<n-2;i++)
	{
		temp2=temp2->next;
	}
		temp1->next=temp2->next;
		temp2->next=temp1;
	
}
void Print()
{
	struct Node* temp=head;
	printf("List is:");
	while(temp!=NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}



int main(){
head=NULL;//empty list
Insert(3,1);
Print();
Insert(4,2);
Print();
Insert(1,1);
Print();
Insert(2,2);
Print();
getch();
return 0;
}

