#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
void linkedListTraversal(node *ptr)
{
    printf("\nElement:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
node *insertAtNode(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    if (index == 0)
    {
        ptr->next = head;
        ptr->data = data;
        return ptr;
    }
    int i = 0;
    while (i != index - 1 && p!=NULL)
    {
        p = p->next;
        i++;
    }
    if(p==NULL){
     printf("invalid index !\n");
     free(ptr);
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
    printf("Enter the index position you want to insert:\n");
    scanf("%d", &index);
    printf("enter the node you want to insert:\n");
    scanf("%d", &data);
    linkedListTraversal(head);
    insertAtNode(head, data, index);

    linkedListTraversal(head);
    return 0;
}