/*
 ************************************************
 *Name : graph_storage.c                        *
 *Date : 2015-05-27                             *
 *Author : sniper                               *
 *Aim : It will storage the graph using the adj-*
 *      acency list,and travel the pragh.       *
 ************************************************
 */
#include <stdio.h>
#include <stdlib.h>
#include "Adj_list.h"

int create(ALGraph *G)
{
	int i,j;
	int node_pair1,node_pair2;
	ArcNode *arc;
	
	node_pair1=0;
	node_pair2=0;
	i=0;
	j=0;
	printf("please input the number of node and edge: ");
	scanf("%d %d",&G->vexnum,&G->arcnum);

	for(i=0;i<G->vexnum;i++)
	{
		G->vertices[i].data = 'A'+i;
		G->vertices[i].firstarc = NULL;
	}	
	printf("finish the Node!\n");

	for(j=0;j<G->arcnum;j++)
	{
		printf("please input the node pair: ");

		scanf("%d %d",&node_pair1,&node_pair2);
		node_pair1-=1;
		node_pair2-=1;
		/*
  		 *Node pair get match with each other 
		 *and storage into the adjacency list.
  	 	 */
		arc = (ArcNode *)malloc(sizeof(ArcNode));
		arc->adjvex = node_pair2+'A';
		arc->nextarc=G->vertices[node_pair1].firstarc;
		G->vertices[node_pair1].firstarc=arc;

		arc = (ArcNode *)malloc(sizeof(ArcNode));
		arc->adjvex = node_pair1+'A';
		arc->nextarc=G->vertices[node_pair2].firstarc;
		G->vertices[node_pair2].firstarc=arc;
	}
	printf("finish the Adjacency List\n");
	return 0;
}

int main()
{
	ALGraph *G;
	int i;	
	
	i=0;
	G = (ALGraph *)malloc(sizeof(ALGraph));
	create(G);

	/* 
	 *print the adjacency list
	 */
	for(i=0;i<G->vexnum;i++)
	{
		printf("%c -> ",'A'+i);
		while(G->vertices[i].firstarc!=NULL)
		{
			printf("%c -> ",G->vertices[i].firstarc->adjvex);
			G->vertices[i].firstarc=G->vertices[i].firstarc->nextarc;			
		}
		printf("\n");
	}
	return 0;
}





