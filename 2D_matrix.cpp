#include<bits/stdc++.h>
using namespace std;

#define SIZE 100
int adj[SIZE][SIZE];

int main()
{
    freopen("123.txt", "r", stdin);

        int vertex;
        int edge;
        cin >> vertex >> edge ;

        int node1,node2;
        for(int i=0; i<edge; i++)
        {
            int w;
            cin >> node1 >> node2 >> w;
            adj[node1][node2] = w;
            adj[node2][node1] = w;

        }

        for(int i=0; i<vertex; i++)
        {
           for(int j=0; j<vertex; j++)
           {
               cout << adj[i][j] << " " ;
           }
            cout << endl ;
        }

}

