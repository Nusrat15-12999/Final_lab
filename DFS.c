#include<stdio.h>
#include<conio.h>

void DFS(int);
int adj[10][10],visited[10],n;

void main()
{

    int i,j;
    printf("Enter number of Vertices :");
    scanf("%d",&n);

    printf("\nEnter Adjecency Matrix:\n");
    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
          scanf("%d",&adj[i][j]);
       }
    }
       for(i=0; i<n; i++)
       {
        visited[i]=0;
       }
    DFS(0);

    getch();
}

void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;

    for(j=0; j<n; j++)
    {
        if(!visited[j]&&adj[i][j]==1)
    {
        DFS(j);
    }
    }
}
