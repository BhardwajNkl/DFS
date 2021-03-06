#define MAXSIZE 10
#define INF 1000
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;//for looping
    int n;//number of nodes.
    int visitedNodes[MAXSIZE];//for marking which nodes are already part of the MST
    int adj[MAXSIZE][MAXSIZE];
    int MST[MAXSIZE-1][2];
    int MSTedgeCount=0;
    int MSTweight=0;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    //initialize visitedNodes
    i=0;
    while(i<n){
        visitedNodes[i++]=0;
    }

    //initialize cost matrix adj
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            adj[i][j]=INF;
        }
    }


    //taking input for edges
    printf("Enter node1, node2 and edge-weight(-1 -1 -1 to stop): \n");
    int inLoop=1;
    while(inLoop==1){

        int v1,v2,w;
        scanf("%d %d %d",&v1,&v2,&w);
        if(w>=0)
        {
            //register this edge in cost matrix
            adj[v1][v2]=w;
            adj[v2][v1]=w;

        }
        else{
            inLoop=0;
        }

    }


    //Kruskal's algorithm starts here.

    while(MSTedgeCount<n-1)
    {
        int smallestWeight=INF;
        int node1,node2;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
            {
                if(visitedNodes[i]==1 && visitedNodes[j]==1) continue;
                if(adj[i][j]<smallestWeight){
                        smallestWeight=adj[i][j];
                        node1=i;
                        node2=j;
                }
            }
        }
        //we have the next smallest edge. Add it to MST
        MST[MSTedgeCount][0]=node1;
        MST[MSTedgeCount][1]=node2;
        MSTedgeCount++;
         MSTweight+=smallestWeight;
        //updated visitedNodes
        visitedNodes[node1]=1;
        visitedNodes[node2]=1;
    }

    printf("Edges in the MST are as follows.\n");
    for(i=0;i<MSTedgeCount;i++){
            printf("%d----%d\n",MST[i][0],MST[i][1]);

    }
    printf("The weight of MST is: %d\n",MSTweight);

}
