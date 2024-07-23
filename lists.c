#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};
void main()
{
	void append(struct node**, int);
	void display(struct node*);
	void insertatbeg(struct node**q, int num);
	struct node* p;
	p = NULL;
	append(&p, 10);
	append(&p, 20);
	append(&p, 30);	
	insertatbeg(&p, 999);
	display(p);
}
void append(struct node**q, int num)
{
	struct node* temp,*r;
	temp = *q;
	if(*q == NULL)
	{
		
		temp = (struct node*)malloc(sizeof(struct node));
		temp -> data = num;
		temp -> link = NULL;
		*q = temp;
	}
	else
	{
	
		while(temp->link != NULL)
		{
			temp = temp->link;
		}
		r = (struct node*)malloc(sizeof(struct node));
		r-> data = num;
		r-> link = NULL;
		temp->link = r;
		
	}
}
void display(struct node* q)
{
	printf("\n");
	
	while(q != NULL)
	{
		printf("| %d | %u|-->", q->data, q->link);
		q = q->link;
	}
	
}
void insertatbeg(struct node**q, int num)
{
	struct node* temp, *r;
	temp = *q;
	r = (struct node*)malloc((sizeof(struct node)));
	r->data = num;
	r->link = temp;
	*q = r;
}


void main() {
  
  int *p;
  int n;
  int num;
  
  std::cout<<"enter the number of elements";
  std::cin>>n;
  p=(int*)malloc(n * sizeof(int));
  for (int i=0; i<n; i++)
  {
     std::cout<<" enter the value at p[<<i<<]";
     std::cin>>p[i];
  }
  
  
    
    
  
    
  
  
  
  
  







