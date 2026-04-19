//reverse the singly linear linked list(Using Array & Linked list both)
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

//Time complexity : 3N
//Space complexity : N
void Reverse(PPNODE first)
{
    int *Arr = NULL;
    int iCount =0;
    int i=0;
    PNODE temp = *first;


    //To count no of elements
    while(temp != NULL)                     //o(N)
    {
        temp = temp->next;
        iCount++;
    }

    //space complexity : N
    Arr = (int *)malloc(sizeof(int) * iCount);                  //array memoy alloction
    temp = *first;

    //data is copied from linked list to array
    while(temp != NULL)                     //o(N)
    {
        Arr[i] = temp->data;
        i++;
        temp = temp->next;
    }

    temp = *first;

    iCount--;

    //reverse
    while(temp != NULL)                     //o(N)
    {
        temp->data = Arr[iCount];
        iCount--;
        temp = temp->next;
    }

    free(Arr);
}



int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    Display(head);

    Reverse(&head);

    printf("Linked list after reverse is : \n");
    Display(head);

    return 0;
}
