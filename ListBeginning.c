//LINKED LIST:Inserting a node at a beginning
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
struct Node{
    int data;
   struct Node* next;
};
struct Node* head;//global varable can be accessed anywhere
void Insert(int x)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
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
}2

int main(){
head=NULL;//empty list
printf("How many Numbers?\n");
int n,i,x;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter the number\n");
    scanf("%d",&x);
    Insert(x);
    Print();2
}
getch();
return 0;
}


