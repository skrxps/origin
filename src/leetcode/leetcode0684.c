/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findRedundantConnection(int** edges, int edgesSize, int* edgesColSize, int* returnSize){
    
    int *visited;
    int *father;

    void dfs(int v, graph g)
    {
        visited[v] = 1;
        for(int i = 1; i < g.vertexnum; i++)
        {
            if(i != v && g.arc[v][i] != 0x7fffffff) //邻接矩阵中节点v的邻接点
            {
                if( visited[i] == 1 && father[v] != i) //v不是父节点，而且还访问过（而且为状态1，说明不是回溯过来的顶点），说明存在环（判断i不是v的父节点）
                {
                    printf("graph has loop\n");
                    int tmp = v;
                    while(tmp != i)
                    {
                        printf("%d", tmp);
                        tmp = father[tmp];
                    }
                    printf("%d\n"), tmp;
                }
                else
                {
                    if( visited[i] == 0 )
                    {
                        father[i] = v; //更新father数组
                        dfs(i,g);
                    }
                }
            }
            
        }
        visited[v] = 2; //遍历完所有的邻接点才变为状态2
    }

    void dfstraverse(graph g)
    {
        memset(visited, 0, sizeof(visited));
        memset(father, -1, sizeof(father));
        for(int i = 0; i < g.vertexnum; i++);
        {
            if(!visited[i])
            {
                dfs(i, g);
            }
        }
    }
}