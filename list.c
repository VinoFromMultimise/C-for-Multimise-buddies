// Online C++ compiler to run C++ program online
#include <stdio.h>
#include<stdlib.h>


struct node 
{
    int data;
    struct node* link;
};

void create(struct node**);
void append(struct node** q, int num);
void display(struct node* q);
void optchoser(struct node**);
void insertatbeg(struct node**q);
void insertatloc(struct node**q);

int main() {
    
    struct node* p;
    p = 0;
    optchoser(&p);
    return 0;
    
}
void optchoser(struct node**q)
{
    printf("\n");
    int opt = 0;
    while(opt >= 0)
    {       
            printf("Enter the operation to be done: \n");
            printf("1. Append  elements\n");
            printf("2. Display elements\n");
	    printf("3. Insert before head\n");
            printf("4. Insert at specific location \n");
            printf("5. Exit\n");
            scanf("%d", &opt);
    
            if (opt == 1)
                create(q);
            else if (opt == 2)
            {
                display(*q);
		printf("\n");
                    if (q == NULL)
                        continue;
            }
            else if (opt == 3)
	    {
                insertatbeg(q);
		continue;
            }
	    else if (opt == 4)
	    {
		insertatloc(q);
                continue;
	    }
	    else if(opt == 5)
		break;
            else
            {
                printf("\n Enter valid option, exiting now !!\n");
                continue;
            }

    }
}
void create(struct node**q)
{
    int n = 0;
    printf("\n Enter the number of data elements to be inserted in a linked list:");
    scanf("%d", &n);
    int* a;
    a = (int*)malloc(n* sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("\n Enter the element #%d: ",i);
        scanf("%d", &i[a]);
    }
    for(int j = 0; j < n; j++)
    {
        append(q,*(a+j));
    }
    optchoser(q);

}
void append(struct node** q, int num)
{
    struct node* temp, *r;
    temp = *q;
    
    if(temp == 0)
    {
        *q = (struct node*)malloc (sizeof(struct node));
        temp= *q;
        temp->data = num;
        temp->link = NULL;
        *q = temp;
        //printf("if part\n");
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
void insertatbeg(struct node**q)
{
	int num;
	printf("\n Enter the data element to add at beg: ");
	scanf("%d", &num);
	struct node* temp;
	temp = *q;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->link = *q;
	*q = temp;	

}
void insertatloc(struct node**q)
{
	struct node*temp, *r;
	r = *q;
	int loc, num;
	printf("Enter the number of node that the element has to be added[starts from 0]:");
	scanf("%d", &loc);
	printf("\n Enter the data element to be added:");
	scanf("%d", &num);
	for(int i = 1; i < loc; i++)
	{
		r = r->link;
	}
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->link = r->link;
	r->link = temp;

}
void display(struct node* q)
{
    printf("\n");
    while(q != NULL)
    {
        printf("|%d | %u|----> ",q->data, q->link);
        q = q->link;
    }
    
}



