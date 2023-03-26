#include "Queue.h"

void BFS(int G[][7],int start,int n)
{
    int i=start,j;
    int visited[7]={0};

    printf("%d ",i);
    insert(i);
    visited[i]=1;

    while (!isEmpty())
    {
        i=delete();
        for(j=1;j<n;j++)
        {
            if(visited[j]==0 && G[i][j]==1)
            {
                printf("%d ",j);
                visited[j]=1;
                insert(j);
            }
        }
    }
    
}

int main()
{
    int G[7][7]={
                 {0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}
                };

    BFS(G,4,7);

    return 0;
}