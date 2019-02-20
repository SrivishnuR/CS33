#include <stdio.h>

int saturating_add(int x, int y) {
  int shift = ((sizeof(int)<<3) - 1);
  int xbit = x >> shift;
  int ybit = y >> shift;
  
  int ans = x + y;
  int abit = ans >> shift;

  (xbit && ybit && !abit && (ans = INT_MAX));
  (!xbit && !ybit && abit && (ans = INT_MIN));

  return ans;
}

int main() {
  printf("%d", saturating_add(

}
