#include "Queue.h"


void DFS(int G[][7],int start,int n)
{
    int j;
    static int visited[7]={0};

    if(visited[start]==0)
    {
        visited[start]=1;
        printf("%d ",start);
        for(j=1;j<n;j++)
        {
            if(visited[j]==0 && G[start][j]==1)
            {
                DFS(G,j,n);
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

    DFS(G,1,7);

    return 0;
}