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

#define MAX_VERTEX_NUM 20

typedef struct ArcNode
{
	int adjvex;
	struct *nextarc;
	int *info;
}ArcNode;

typedef struct VNode
{
	int data;
	ArcNode *firstarc;
}VNode,AdjList[MAX_VERTEX_NUM];

typedef struct 
{
	AdjList vertices;
	int vexnum,arcnum;
	int kind;
}ALGraph;

int main()
{
	
	return 0;
}





