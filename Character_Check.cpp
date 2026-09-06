#include<stdio.h>
int main() {
  char str[10000];
  int upp=0;
  int low=0;
  scanf("%s",str);
  for (int i=0;str[i]!='\0';i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      upp += 1;
    }
    if (str[i] >= 'a' && str[i] <= 'z') {
      low += 1;
    }
  }
  if (upp > 0 && low == 0){
    printf("All Capital Letter");
  }
  else if (low > 0 && upp == 0){
    printf("All Small Letter");
  }
  else {
    printf("Mix");
  }
}