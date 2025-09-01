#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node{

    int vertex;
    struct node *next;

}node;

void DFS(node *arr[], int visited[], int size, int v);
void freefn(node *arr[], int size);
int fomation(node *arr[], int size ,int edges);

int main()
{
    int size = 0, check , edges;
    
    //int dfsstack[size];
    do {
        printf("Enter the number of vertices and Edges: ");
        check = scanf("%d %d", &size, &edges);

        if (check != 2 || size <= 0 || edges <= 0) {
            printf("Invalid input! Number should be greater than zero.\n");
            while (getchar() != '\n');
        }

    } while (check != 2 || size <= 0);
    printf("you entered %d as number of vertices and %d as number of edges\n",size ,edges);
    int visited[size];
    node *arr[size];
    for (int i = 0; i < size; i++) {
    arr[i] = NULL;
    }

    fomation(arr, size, edges);
    
    for (int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }
    DFS(arr, visited, size, 1);

    freefn(arr, size);
}
int fomation(node *arr[], int size, int edges)
{
    int u,v;
    for (int i = 0; i < edges; i++)
    {
        printf("\nenter the edge (u,v):");
        scanf("%d %d",&u ,&v);
        node *newnode = malloc(sizeof(node));

        if (newnode == NULL){
            printf("\nmalloc allocted NULL.");
            return 1;
        }

        newnode->vertex = v;
        newnode->next = arr[u-1];
        arr[u - 1] = newnode;

        newnode = malloc(sizeof(node));

        if (newnode == NULL){
            printf("malloc allocted NULL.");
            return 1;
        }

        newnode->vertex = u;
        newnode->next = arr[v-1];
        arr[v - 1] = newnode;

    }
    
}

void freefn(node *arr[], int size){

     node *freenode;
    for (int i = 0; i < size; i++)
    {
        freenode = arr[i];   
        while (freenode != NULL) 
        {
            node *temp = freenode;
            freenode = freenode->next;
            free(temp);            
        }
        arr[i] = NULL;
        
    }
}
void DFS(node *arr[], int visited[], int size, int v)
{
    visited[v-1] = 1;
    printf("%d ",v);
    node *temp = arr[v-1];
    
    while( temp != NULL)
    {
        if (visited[(temp->vertex) - 1] != 1)
        {
            DFS(arr, visited, size, temp->vertex);
        }
        temp = temp->next;
        
    }
}