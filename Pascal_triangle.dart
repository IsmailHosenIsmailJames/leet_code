void main() {
  print(generate(10));
}

List<List<int>> generate(int numRows) {
  List<List<int>> pascalTriangle = [
    [1],
    [1, 1],
  ];
  if (numRows == 1) return [pascalTriangle[0]];
  List<int> last = [];
  List<int> current = [];
  for (int i = 0; i < numRows - 2; i++) {
    last = pascalTriangle.last;
    current = [1];
    for (int j = 1; j < last.length; j++) {
      current.add(last[j - 1] + last[j]);
    }
    current.add(1);
    pascalTriangle.add(current);
  }

  return pascalTriangle;
}

class Solution {
  List<List<int>> generate(int numRows) {
    List<List<int>> pascalTriangle = [
      [1],
      [1, 1],
    ];
    if (numRows == 1) return [pascalTriangle[0]];
    List<int> last = [];
    List<int> current = [];
    for (int i = 0; i < numRows - 2; i++) {
      last = pascalTriangle.last;
      current = [1];
      for (int j = 1; j < last.length; j++) {
        current.add(last[j - 1] + last[j]);
      }
      current.add(1);
      pascalTriangle.add(current);
    }

    return pascalTriangle;
  }
}
