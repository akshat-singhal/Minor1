#include<stdio.h>
#include<stdlib.h>

struct edge
{
	char i[10];
	char j[10];
	char distance[10];
};

int main()
{
int i;
int index=1;

struct edge EdgesN[10];


FILE *input = fopen("dat.csv", "r");
/*fscanf(input, "%d", &index);
printf("%d\n", index);
fclose(input);*/
for(i=0; i<=19; ++i)
{
fscanf(input,"%[^,],%[^,],%s", EdgesN[i].i, EdgesN[i].j, EdgesN[i].distance);
printf("%s %s %s", EdgesN[i].i, EdgesN[i].j, EdgesN[i].distance);

//EdgesN++;

}
return 0;
}

/*
void main(){

	int cost[100][100],distance[10],path[100][100],n,v,p,row,column,min,index=1,i,j;
	
	
	
	//user enters cost of matrix
	printf("Enter cost matrix : \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	scanf("%d", &n);
	
	//user enters node to be visited
	printf("Enter node to visit : \n");
	scanf("%d",&v);
	
	//user enters no of paths for particular node
	printf("Enter paths for the selected node : ");
	scanf("%d",&p);
	
	//path matrix
	printf("Enter path matrix \n");
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&path[i][j]);
		}
	}
	for(i=1;i<=p;i++)
	{
		distance[i]=0;
		row=1;
		for(j=1;j<n;j++)
		{
			if(row!=v)
			{//till i visit the last node
				column=path[i][j+1];
				distance[i] =  distance[i]+cost[row][column];
			}
			row=column;
		}
	}
	
	//which distance to be considered
	min=distance[1];
	for(i=1;i<=p;i++)
	{
		if(distance[i]<=min)
		{
			min=distance[i];
			index=i;
		}
	}
	printf("min distance is %d\n",min);
	printf("min distance path is\n");
	for(i=1;i<=n;i++)
	{
		if(path[index][i]!=0)
			printf("--->%d", path[index][i]);
	}
}
*/
