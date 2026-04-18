//check if loop is present in the linked list or not
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

bool CheckLoop(PNODE first)
{
    PNODE FAST = first;
    PNODE SLOW = first;

    bool bFlag = false;
    while((FAST != NULL) && (FAST->next != NULL))
    {
        FAST = FAST->next->next;
        
        if(FAST == SLOW)
        {
            bFlag = true ;
            break;
        }

        SLOW =SLOW->next;

        if(FAST == SLOW)
        {
            bFlag = true ;
            break;
        }
    }
    return bFlag;
}



int main()
{
    PNODE head = NULL;

    PNODE temp1=NULL;
    PNODE temp2 = NULL;
    int iRet = 0;
    bool bRet = false;

    int pos =4;
    int i=0;

    
    


    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);



    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Loop exist \n");
    }
    else
    {
        printf("Loop does not exist \n");

    }

    return 0;
}
