#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
void linkedListTraversal(struct Node *ptr)
{
    printf("Element:\n");

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteAtindex(struct Node *head, int index)
{
    struct Node *q=head->next;
    struct Node *p = head;
    if(index==0){
    

    }
    int i = 0;
    while (i != index - 1 && p!=NULL)
    {
        p = p->next;
        q=q->next;
        i++;
    }
    if(p==NULL){
     printf("\ninvalid index !\n");
     free(q);
    }
    p->next=q->next;
    free(q);
    return head;
}

int main()
{
    node *head = NULL;
    node *q = head, *last = NULL;
    int i, count, val, index, data;
    printf("enter the no. of nodes:");
    scanf("%d", &count);
    printf("Enter the value: \n");
    for (i = 0; i < count; i++)
    {
        scanf("%d", &val);
        q = (node *)malloc(sizeof(node));
        q->data = val;
        q->next = NULL;

        if (head == NULL)
        {
            head = q;
        }
        else
        {
            last->next = q;
        }
        last = q;
    }
    printf("Enter the index position you want to delete:\n");
    scanf("%d", &index);
    linkedListTraversal(head);
    deleteAtindex(head,index);
    linkedListTraversal(head);

    return 0;
}