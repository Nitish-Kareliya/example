#include<stdio.h>
#include<stdlib.h>

struct link
	{
		int data;
		struct link *next;
	};

struct link *head = NULL, *ptr, *tmp;

int main()
{
int value, node,i;

printf("\nEnter number of node to create : ");
scanf("%d",&node);

printf("\n");

	for(i = 1;i <= node;i++)
	{
			ptr = (struct link*)malloc(sizeof(struct link));
			
			printf("Enter value : ");
			scanf("%d",&value);
			
			ptr->data = value;
			ptr->next = NULL;
			
			if(head == NULL)
			{
				tmp = ptr;
				head = ptr;
			}

			else
			{
				tmp->next = ptr;
				tmp = ptr;
			}

	}


	printf("\n\nLink List : ");
	
		while(head->next != NULL)
		{
			printf("%d-->",head->data);
			head = head->next;
		}
		printf("%d\n\n", head->data);

return 0;
}




