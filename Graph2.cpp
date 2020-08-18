#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII ;

vector <string> vertexnames ;
map<string ,int > vertexnumbers;

int main()
{
    freopen("Graph2.txt", "r", stdin);

        int vertex;
        int edge;
        cin >> vertex >> edge ;

        vector<PII> v[vertex];

        for(int i=0; i<vertex ; i++)
        {
            string str ;
            cin >> str ;

            vertexnames.push_back(str);
            vertexnumbers[str]=i;
        }

         for(int i=0; i<edge; i++)
        {
            string str1,str2;
            int source1,source2;
            cin >> str1 >>str2;

            PII p;
            source1=vertexnumbers[str1];
            p.first=vertexnumbers[str2];
            cin >> p.second;
            v[source1].push_back(p);

            source2=p.first;
            p.first= source1;
            v[source2].push_back(p);
        }
         for(int i=0; i<vertex; i++)
        {
            cout << vertexnames[i ] << " -- ";

            for(int j=0; j<v[i].size(); j++)
            {
                cout << vertexnames[ v[i][j].first]  << "-" <<v[i][j].second <<  " " ;
            }
            cout << endl ;

        }



}
