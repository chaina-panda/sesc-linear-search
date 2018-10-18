#include <stdio.h>

int main(void) {
  int N, K;
  scanf("%d%d", &N, &K);
  int arr[N+2];
  int a = N-1;
  N = N-1;
  arr[a+1] = -1;
  arr[a+2] = -1;
  for (N = 0 ; N<a; N++ ){
  scanf("%d ", &arr[N]);
  if ((arr[N] == K) && (arr[a+1] != -1)) {arr[a+2] = N;}
   else if (arr[N] == K) {arr[a+1] = N; arr[a+2] = N;}
  }
  printf("%d %d", arr[a+1], arr[a+2]);
  return 0;
}