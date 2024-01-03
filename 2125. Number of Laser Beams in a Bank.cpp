class Solution {
 public:
  int numberOfBeams(vector<string>& bank) {
    int ans = 0;
    int prevOnes = 0;

    for (const string& row : bank) {
      const int ones = countOnes(row);

      if (ones > 0) {
        ans += prevOnes * ones;
        prevOnes = ones;
      }
    }

    return ans;
  }

 private:
  int countOnes(const string& row) {
    int count = 0;

    for (char ch : row) {
      if (ch == '1') {
        count++;
      }
    }

    return count;
  }
};
