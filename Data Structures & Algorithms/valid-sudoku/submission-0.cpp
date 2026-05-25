class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){
            vector<bool> visited(10,false);
            for(int j=0;j<9;++j){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0';
                    if(visited[num]) return false;
                    visited[num] = true;
                }
                
            }
        }

        for(int j=0;j<9;++j){
            vector<bool> visited(10,false);
            for(int i=0;i<9;++i){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0';
                    if(visited[num]) return false;
                    visited[num] = true;
                }
                
            }
        }

        queue<pair<int,int>> q;
        q.push({0,0});
        q.push({3,0});
        q.push({6,0});
        q.push({0,3});
        q.push({3,3});
        q.push({6,3});
        q.push({0,6});
        q.push({3,6});
        q.push({6,6});

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            vector<bool> visited(10,false);
            for(int i=0;i<3;++i){
                for(int j=0;j<3;++j){
                    if(board[r+i][c+j] != '.'){
                        int num = board[r+i][c+j] - '0';
                        if(visited[num]) return false;
                        visited[num] = true;
                    }
                }
            }
        }

        return true;
    }
};
