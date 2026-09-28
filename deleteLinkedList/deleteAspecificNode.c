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
    printf("\n");
}
struct Node *deleteAtindex(struct Node *head, int data)
{
    node *q;
    node *p = head;
    int index = 0;
    while (p != NULL)
    {
        if (p->data == data)
        {
            printf("%d found at index %d\n", data, index);
            if (p == head)
            {
                q = p;
                p = p->next;
                head=p;
                free(q);
            }
            else{
                q=head;
                while(q->next!=p){
                    q=q->next;
                }
                    q->next=p->next;
                    q=p;
                    p=p->next;
                    free(q);
            }
        }
        else
        {
            p = p->next;
        }
        index++;
    }
    return head;
}

int main()
{
    node *head = NULL;
    node *q = head, *last = NULL;
    int i, val, index, data,count;
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
    // printf("Enter the index position you want to delete:\n");
    // scanf("%d", &index);
    printf("enter the value you want to delete:\n");
    scanf("%d", &data);
    linkedListTraversal(head);
    deleteAtindex(head, data);
    linkedListTraversal(head);

    return 0;
}