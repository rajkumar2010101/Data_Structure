#include<stdio.h>
#include<stdlib.h>
#define SIZE 40
struct queue
{
	int items[SIZE];
	int front;
	int rear;
};
struct queue*createQueue();
void enqueue(struct queue*q,int);
int dequeue(struct queue*q);
void display(struct queue*q);
int isEmpty(struct queue*q);
void printQueue(struct queue*q);
struct node
{
	int vertex;
	struct node*next;
};
struct node*createNode(int);
struct Graph
{
	int numVertices;
	struct node**adjLists;
	int*visited;
};
//BFS algorithm
void bfs(struct Graph*graph,int startVertax)
{
	struct queue*q=createQueue();
	graph->visited[start Vertax]=1;
	enqueue(q,startVertax);
	while(!isEmpty(q))
	{
		printQueue(q);
		int currentVertax=dequeue(q);
		printf("Visited%d\n",currentVertax);
		struct node*temp=graph->adjlists[currentvertax];
		while(temp)
		{
			int adjVertax=temp->vertax;
			if(graph->vicsited[adjVertax]==0)
			{
				graph->visited[adjVertax]=1;
				enqueue(q,adjVertax);
		
			}
			temp=temp->next;
		}
	}
	}
	//Creating a Node
	struct node*createNode(int v)
	{
		struct node*newNode=malloc(sizeof(sturct node));
		new Node->vertax=v;
		newNode->next=NULL;
		return newNode;
	}
	//Creating a Graph
	struct Graph*createGraph(int vertices)
	{
		structGraph*graph=malloc(sizeof(struct Graph));
		graph->numVertices=vertices;
		graph->adjLists=malloc(vertices*sizeof(struct node*));
		graph->visited=malloc(vertices*sizeof(int));
		int i;
		for(i=0;i<vertices;i++)
		{
			graph->adjLists[i]=NULL;
			graph->visited[i]=0;
		}
		return graph;
	}
	//Add Edge
	void addEdge(structGraph*graph,int src,int dest);
	{
		//Add edge from  src to dest
		struct node*newNode=createNode(dest);
		newNode->next=graph->adjLists[src];
		graph->adjLists[dest]=newNode;
		//Add edge from dest to src
		newNode=createNode(src);
		newNode->next=graph->adjLists[dest];
		graph->adjLists[src]=newNode; 
	}
	//create a queue
	struct queue*createQueue()
	{
		struct queue*q=ma0lloc(sizeof(struct queue));
        q->front=-1;
        q->rear=-1;
        return q;
	}
	//check if the queue is empty?
	int isEmpty(struct queue*q)
	{
		if(q->rear==-1)
		return 1;
		else
		return 0;
	}
	//Adding elements in the queue
	int enqueue(struct queue*q,int value)
	{
		if(q->rear==SIZE -1)
		printf("\nQueue is Full!!");
		else
		{
			if(q->front==-1)
			q->front=0;
			q->rear++;
			q->items[q->rear]=value;
		}
	}
	//Removing elements from queue
	int dequeue(struct queue*q)
	{
		int item;
		if(isEmpty(q))
		{
			printf("Queue is Empty");
			item=-1;
		
		}
		else
		{
		 item=q->items[q->front];
		 q->front++;
		 if(q->front>q->rear)
		 {
		 	printf("Resetting queue");
		 	q->front=q->rear=-1;
		 }
		}
		return item;
    }
    //Print Queue
    void printQueue(struct queue*q)
    {
    	int i=q->front;
    	if(isEmpty(q))
    	{
    		printf("Queueu is Empty");
    		
		}
		else
		{
			printf("\nQueue contains\n");
			for(i=q->front;i<q->rear+1;i++)
			{
				printf("%d",q->items[i]);
			}
		}
	}
	
}
int main()
	{
		struct Graph*graph = createGraph(6);
		add Edge(graph,0,1);
		add Edge(graph,0,2);
		add Edge(graph,1,2);
		add Edge(graph,1,4);
		add Edge(graph,1,3);
		add Edge(graph,2,4);
		add Edge(graph,3,4);
		bfs(graph,0);
		return 0;
		
		
	}