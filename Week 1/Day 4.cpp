class Solution {
public:
    int nthUglyNumber(int n) {
      static vector<int> ugly {1};
      static int last(1);
      static int c2(2), c3(3), c5(5);
      static int i2(0), i3(0), i5(0);
      while (ugly.size() < n) {
          while (c2 <= last) c2 = 2 * ugly[++i2];
          while (c3 <= last) c3 = 3 * ugly[++i3];
          while (c5 <= last) c5 = 5 * ugly[++i5];
          ugly.push_back(last = min(c2, min(c3, c5)));
      }
      return ugly[n-1];
    }
};
