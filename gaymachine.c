#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Node*/
typedef struct Nodes 
{
	void *value;
	struct Nodes *next;
	struct Nodes *prev;
} Node;

/*First and last*/
typedef struct FirstandLast 
{
	size_t size;
	Node *head;
	Node *tail;
} Firstlast;

/*Creation of beginning and end*/
Firstlast* createFistlast()
{
	Firstlast *tmp = (Firstlast*) malloc(sizeof(Firstlast));
	tmp->size = 0;
	tmp->head = tmp->tail = NULL;
	return tmp;
}

/*Delete a list*/
/*If necessary?*/
/*void deletelist(Firstlast **list)
{
	Node *tmp = (*list)->head;
	Node *next = NULL;
	wnile (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(*list);
	(*list) = NULL;
}*/

/*Command movr*/
void movr(Firstlast *list)
{
	if (list->head == NULL)
	{
		Node *tmp = (Node*) malloc(sizeof(Node));
		if (tmp == NULL)
		{
			printf("Memory failed to allocate!\n");
			return;
		}
		tmp->value = 0;
		tmp->next = list->head;
		tmp->prev = NULL;
		if (list->head)
		{
			list->head->prev = tmp;
		}
		list->head = tmp;
		if (list->tail == NULL)
		{
			list->tail = tmp;
		}
		list->size++;
	}
	else 
	{	
		Node *p;
		
	}
}

void movl (Firstlast *list)
{
	if (list->tail)
	{
		printf("Error! Going out of the list!");
		return;
	}
	else
	{
		Node *p;
		p = p->next;
	}
}

int main(int argc, char *argv[])
{
	Firstlast *list = createFistlast();
	FILE *data;
	if (argc < 2)
		printf("You did not enter a file name. Please enter it!\n");
	else
	{
		data = fopen(argv[1], "rb");
		if (data==NULL)
			printf("This file does not exist in this folder.\n");
	} 
	
	char word[6];
	Node p;
	while (fscanf(data, "%s", word) != EOF)
	{
		if (strncmp("movr", word, 4) == 0)
			movr(*p);
		if (strncmp("movl", word, 4) == 0)

		if (strncmp("inc", word, 3) == 0)

		if (strncmp("dec", word, 3) == 0)

		if (strncmp("print", word, 5) == 0)

		if (strncmp("get", word, 3) == 0)

		if (strncmp("printc", word, 6) == 0)

		if (strncmp("begin", word, 5) == 0)

		if (strncmp("end", word, 3) == 0)

	}

	fclose(data);

	return 0;
}