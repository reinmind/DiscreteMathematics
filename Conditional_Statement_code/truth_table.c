#include <stdio.h>
int implication(int p, int q);
int inverse(int p, int q);
int converse(int p, int q);
int contrapositive(int p, int q);
char c(int v);
int main(){
  int p , q, i;
  printf("\t\tTruth table\n");
  printf("p\tq\timplication\tinverse\tconverse\tcontrapositive\n");
  for(i = 0;i < 4; ++i){
    p = i / 2;
    q = i % 2;
    printf("%c\t%c\t%c\t\t%c\t%c\t\t%c\n", c(p), c(q), c(implication(p, q)), c(inverse(p, q)), c(converse(p, q)), c(contrapositive(p, q)) );
  }
  return 0;
}
int implication(int p, int q){
  if(p != 0 && q == 0){
    return 0;
  }
  return 1;
}

int inverse(int p, int q){
  if(p < 0 || q < 0){
    printf("Input incorrect!\n");
    return -2;
  }
  p -= 1;
  q -= 1;
  if(p != 0 && q == 0){
    return 0;
  }
  return 1;
}

int converse(int p, int q){
  int tmp;
  tmp = p;
  p = q;
  q = tmp;

  if(p != 0 && q == 0){
    return 0;
  }
  return 1;
}

int contrapositive(int p, int q){
  if(p < 0 || q < 0){
    printf("Input incorrect!\n");
    return -2;
  }

  int tmp;
  tmp = p;
  p = q;
  q = tmp;

  p -= 1;
  q -= 1;

  if(p != 0 && q == 0){
    return 0;
  }
  return 1;
}

char c(int v){
  if(v != 0) return 'T';
  return 'F';
}
