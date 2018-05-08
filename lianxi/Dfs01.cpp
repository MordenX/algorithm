#include<cstdio>  
#include<queue>  
#include<cstring>  
using namespace std;  
struct point{  
    int x;  
    int y;  
};  
  
queue<point> q;  
int maze[5][5];    
int step[5][5]; 
bool visit[5][5];    
  
int bfs(){  
    memset(visit,false,sizeof(visit));  
    step[0][0]=0;  
    point init;   
    init.x=0;init.y=0;  
    visit[0][0]=true;  
    q.push(init);    
    while(!q.empty()){  
        point head=q.front();  
        q.pop();  
        for(int i=0;i<4;i++){  
            point next=head;  
            if(i==0) next.x=head.x+1; //right  
            else if(i==1) next.x=head.x-1; //left  
            else if(i==2) next.y=head.y+1; //down  
            else if(i==3) next.y=head.y-1; //up  
            if(next.x<0||next.x>4||next.y<0||next.y>4||(maze[next.y][next.x]==1)) continue; //越界处理   
            if(!visit[next.y][next.x]){  
                q.push(next);  
                step[next.y][next.x]=step[head.y][head.x]+1;  
                visit[next.y][next.x]=true;  
            }  
            if(next.x==4&&next.y==4){  
                return step[head.y][head.x];  
            }  
        }  
    }  
}  
int main(){  
    memset(maze,0,sizeof(maze));  
    memset(step,0,sizeof(step));  
    for(int i=0;i<5;i++){  
        for(int j=0;j<5;j++){  
            scanf("%d",&maze[i][j]);  
        }  
    }  
    bfs();  
    int c=0;  
    for(int i=0;i<5;i++){  
        for(int j=0;j<5;j++){  
            if(step[i][j]==c){  
                printf("(%d, %d)\n",i,j);  
                c++;  
            }  
        }  
    }  
    return 0;  
}  