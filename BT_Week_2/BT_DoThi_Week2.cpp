#include <iostream>
#include <vector>
using namespace std;

void enter_adjacency_matrix(int N, int M, int adj[][100]);
void enter_edge_list(int N, int M, vector<pair<int, int>> &edge_list);
void show_edge_list(int N, int M, vector <pair<int, int>> edge_list);
void enter_adjacency_list(int N, int M,  vector <int> adj_list[]);
void show_adjacency_list(int N, int M,  vector <int> adj_list[]);

int main()
{
    // Nhap ma tran ke 
    int N, M;
    int adj[100][100];
    cout << "Nhap so dinh va canh ";
    cin >> N >>M;
    // enter_adjacency_matrix(N,M, adj);
    // Danh sach canh Edge std::list
    // vector <pair<int, int>> edge_list;
    // enter_edge_list( N, M, edge_list);
    // show_edge_list(N,M, edge_list);
    vector <int> adj_list [1000];
    enter_adjacency_list(N, M, adj_list);
    // show_adjacency_list(N, M, adj_list);
    return 0;
}

void enter_adjacency_list(int N, int M, vector <int> adj_list[])
{
    int s, d;
    for(int i=0; i<M; i++){
        cout << "Nhap canh ";
        cin >> s >> d;
        adj_list[s].push_back(d);
         // 1 4 => adj_list[1].add(4)
         // 1 3 => adj_list[1].add(3)
         // 3 2 => adj_list[2].add(2)
    }
    
}

void show_adjacency_list(int N, int M,  vector <int> adj_list[]){
    // homework CODEHERE 
   for (int i = 0; i < vertex; i++)
  {
    cout << "Dinh " << i << " Co canh: ";
    for (int j = 0; j < adj_list[i].size(); j++)
    {
      cout << adj_list[i].at(j) << " ";
    }
    cout << "\n";
  }
}


void enter_edge_list(int N, int M, vector <pair<int, int>> &edge_list){
    // duyet danh sach ke va nhap vao
    int s, d;
    for(int i=0; i<M; i++){
        cout << "Nhap canh ";
        cin >> s >> d;
        edge_list.push_back({s,d});
    } // nhap canh
    
}

void show_edge_list(int N, int M, vector <pair<int, int>> edge_list){
    // +1 5m || co google 3m 
    // CODEHERE 
    int s, d;
    for (auto i: edge_list)
        cout << i.first << ' ' << i.second << endl;
}


void enter_adjacency_matrix(int N, int M, int adj[][100]){
    
    // #1 khoi tao ma tran = 0
    // adj[100][100] = 0; // Binh = +0.5 // Dat ? +0.25 // Chuong +0.5 
    adj[N][N] = 0;
    int a,b;
    for (int i=0;i<M;i++)
    {
        cout<<"Nhap 2 dinh tao n�n canh thu "<<i+1<<":\n";
        cout<<"�inh thu 1:";
        cin>>a;
        cout<<"�inh thu 2:";
        cin>>b;
        adj[a][b]=1;
    }
    
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }  
}
