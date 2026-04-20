//reverse the singly linear linked list(Using Array & Linked list both)
//Updated : Reduce the complexity
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;



void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)   // Type 2
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
}


void Display(PNODE first)
{
    while(first != NULL)    // Type 1
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}


int LastNthNode(PNODE first,int iPos)
{
    int i=0;

    PNODE temp1 = first;
    PNODE temp2= first;

    if(first == NULL)
    {
        printf("Linked list is empty \n");
        return -1;
    }

    for(i=1 ; i< iPos ; i++)
    {
        if(temp1 == NULL)
        {
            printf("Position is wrong\n");
            return -1;
        }

        temp1 = temp1->next ;
    }

    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return (temp2->data);


}

int main()
{
    PNODE head = NULL;
    int iRet =0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);
    InsertLast(&head,201);

    Display(head);

    iRet  = LastNthNode(head , 3);

    printf("Last N node is : %d \n",iRet);



    return 0;
}
