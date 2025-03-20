// https://leetcode.com/problems/pascals-triangle/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> pascalTriangle;
    pascalTriangle.push_back({1});
    if(numRows == 1) return pascalTriangle;
    pascalTriangle.push_back({1, 1});
    vector<int> last;
    for(int i = 0; i < numRows -2; i++){
        last = pascalTriangle[pascalTriangle.size()-1];
        vector<int> current = {1};
        for(int j = 1; j < last.size(); j++){
            current.push_back(last[j-1] + last[j]);
        }
        current.push_back(1);
        pascalTriangle.push_back(current);
    }
    return pascalTriangle;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> pascalTriangle = generate(10);
    for(int i =0 ; i < pascalTriangle.size(); i++){
        for(int j = 0; j < pascalTriangle[i].size(); j++){
            cout << pascalTriangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
1 6 15 20 15 6 1 
1 7 21 35 35 21 7 1 
1 8 28 56 70 56 28 8 1 
1 9 36 84 126 126 84 36 9 1 
*/