#include<iostream>

using namespace std;

struct node
{
	int a;
	struct node *next;
};


struct list
{
	struct node *head;
};


struct Graph
{
	int v;
	struct list * array;
};


struct node * newnode(int data)
{
	struct node* newmode=new struct node;
    newmode->a=data;
    newmode->next=NULL;
	return newmode;
}

struct Graph *creategraph(int v)
{
	struct Graph * graph=new Graph;
	
	graph->v=v;
	
	graph->array=new list;
	
    int i;
    
    for(i=0;i<v;i++)
    graph->array[i].head=NULL;
    
    return graph;
}

void addedge(struct Graph* graph,int src,int dest)
{
	struct node* newmode=newnode(dest);
	newmode->next =graph->array[src].head;
	
	graph->array[src].head=newmode;
	
	
	newmode=newnode(src);
	
	newmode->next=graph->array[dest].head;
	
	graph->array[dest].head=newmode;
	
	
}





int main()
{
	
	
return 0;	
}
