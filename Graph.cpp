#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII ;

//vector<string>

int main()
{
    freopen("123.txt", "r", stdin);

        int vertex;
        int edge;
        cin >> vertex >> edge ;

        vector<PII> v[vertex];

        for(int i=0; i<edge; i++)
        {
            int source1;
            PII p;

            cin >> source1 >> p.first >> p.second;
            v[source1].push_back(p);

            int source2=p.first;
            p.first= source2;
            v[source2].push_back(p);
        }

        for(int i=0; i<vertex; i++)
        {
            cout << i << " -- ";

            for(int j=0; j<v[i].size(); j++)
            {
                cout << v[i][j].first << "-" <<v[i][j].second <<  " " ;
            }
            cout << endl ;

        }
        cout << endl ;
}

