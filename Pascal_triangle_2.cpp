// https://leetcode.com/problems/pascals-triangle-ii/
#include<bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<vector<int>> pascalTriangle;
    pascalTriangle.push_back({1});
    pascalTriangle.push_back({1, 1});
    vector<int> last;
    vector<int> current;
    for(int i = 0; i < rowIndex -1; i++){
        last = pascalTriangle[pascalTriangle.size()-1];
        current = {1};
        for(int j = 1; j < last.size(); j++){
            current.push_back(last[j-1] + last[j]);
        }
        current.push_back(1);
        pascalTriangle.push_back(current);
    }
    return pascalTriangle[rowIndex]; // row
}

int main(int argc, char const *argv[])
{
    vector<int> pascalTriangleRow = getRow(10);
    for(int i =0 ; i < pascalTriangleRow.size(); i++){
        cout << pascalTriangleRow[i] << " ";
    }
    return 0;
}

// 1 10 45 120 210 252 210 120 45 10 1