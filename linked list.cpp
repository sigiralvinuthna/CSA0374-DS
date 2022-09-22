#include<stdio.h>
#include<stdlib.h>
struct node
{
	int date;
	struct node*next;
};
struct node*start;
void insert_begin();
void insert_last();
void insert_locc();
void delete_begin();
void delete_last();
void delete_locc();
void print();
int main()
{
	int ch=0;
	while(ch!=8)
	{
		printf("\n enter the operation to be performed\n");
		print("\n1.insert in the begining\n2.insert at last\n3.insert at any specified position\n4.delete from beginning\n5.delete from last\n6.delete notde after specifed location\n.7.shows\n8.exit\n");
		scanf("\n%d",&ch);
		switch(ch)
		{
			case 1:
			insert_begin();
			break;
			case 2:
			insert_last();
			break;
			case 3:
			insert_iocc();
			break;
			case 4:
			delete_begin();
			break;
			case 5:
			delete_last();
			break;
			case 6:
			delete_iocc();
			break;
			case 7:
			print();
			break;
			case 8:
			exit(0);
			break;
			default:
			printf("enter valid option");
		}
		
	}
}
void insert_begin()
{
	struct node*p;
	int value;
	p=(struct node*)malloc(size of(struct node*));
	if(p==NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\n enter value\n");
		scanf("%d",&value);
		p->data=value;
		p->next=start;
		start=p;
	}
}
void insert_last()
{
	struct node*p,*temp;
	int value;
	p=(struct node*)malloc(size of(struct node));
	if(p==NULL)
	{
		p->next=NULL;
		start=p;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
		p->next=NULL;
	}
}
}
void insert_iocc()
{
	int i,ioc,value;
	struct node*p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\n enter element value");
		scanf("%d",&value);
		p->data=value;
		printf("\nenter the location after which you want to insert");
		scanf("\n%d",&loc);
		temp=start;
		for(i=0;i<ioc;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("\ncan't insert\n");
				return;
			}
		}
		p->next=temp->next;
		temp->next=p;
	}
}
void delete_begin()
{
	struct node*p;
	if(start==NULL)
	{
		printf("\nlist is empty\n");
	}
	else
	{
		p=start;
		start=p->next;
		free(p);
	}
}
void delete_last()
{
	struct node*p,*p1;
	if(start==NULL)
	{
		printf("\nlist is empty");
	}
	else if(start->next==NULL)
	{
		start=NULL;
		free(start);
		printf("\nonly node of the list deleted...\n");
	}
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			p1=p;
			p=p->next;
		}
		p1->next=NULLL;
		free(p);
	}
}
void delete_iocc()
{
	struct node*p,*p1;
	int ioc,i;
	printf("\n enter the locaton of the node after which you want to perfrm deletion\n");
	scanf("%d",&loc);
	p=start;
	for(i=0;i<ioc;i++)
	{
		p1=p;
		p=p->next;
		if(p==NULL)
		{
			printf("\ncan't delete");
			return;
		}
	}
	p1->next=p->next;
	free(p);
	printf("\n deleted node %d",ioc+1);
}
void print()
{
	struct node*p;
	p=start;
	if(p==NULL)
	{
		printf("nothing to  print");
	}
	else
	{
		printf("nothing to print");
	}
	else
	{
		printf("\nprinting values\n");
		while(p!=NULL)
		{
			print("\n%d",p->data);
			p=p->next;
		}
	}
}
