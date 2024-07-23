#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* link;
};
void main()
{
    struct node* top;
    top = NULL;
    void push(struct node**, int);
    void pop(struct node**);
    void display(struct node*);
    void count(struct node*q);
    int n = 0;
    printf("How many elements to enter in the stack: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element #%d: ", i);
        scanf("%d", &arr[i]);
        push(&top, arr[i]);
    }
    display(top);
    pop(&top);
    pop(&top);
    display(top);
    count(top);
}
void push(struct node **q, int num)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = *q;
    *q = temp;
}
void pop(struct node**q)
{
    struct node* temp;
    int data;
    if (q == NULL)
    {
	printf("\n Stack is empty !!");
    }
    else
    {
    	temp = *q;
    	data = temp->data;
    	*q = temp->link;
    	printf("\n %d is the item popped !!", data);
    	free(temp);
    }
}
void display(struct node* q)
{
    printf("\n");
    while(q != NULL)
    {
      printf("|%d |%u |\n", q->data, q-> link);
      q = q->link;
    }
}
void count(struct node*q)
{
    int count = 0;
    while(q != NULL)
    {
        count += 1;
        q = q-> link;
    }
    printf("\nNo. of elements present is: %d", count);
}


