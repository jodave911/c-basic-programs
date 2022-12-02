#include<stdio.h>

#define max 5
int f = -1;
int r = -1;
int cq[max];
void insertion(int item) {
  if ((f == 0) && (r == max - 1) || f == r + 1) {
    printf("overflow");
    return;
  }
  if (f == -1) {
    f = 0;
    r = 0;
  } else {
    if (r == max - 1)
      r = 0;
    else
      r = r + 1;
  }
  cq[r] = item;
}
void deletion() {
  if (f == -1) {
    printf("underflow");
    return;
  }
  printf("deleted element is %d\n", cq[f]);
  if (f == r) {
    f = -1;
    r = -1;
  } else {
    if (f == max - 1)
      f = 0;
    else
      f = f + 1;
  }
}
void display() {
  int fpos = f, rpos = r;
  if (f == -1) {
    printf("empty");
    return;
  }
  printf("queue elements are : ");
  if (fpos <= r)
    while (fpos <= rpos) {
      printf("%d\t", cq[fpos]);
      fpos++;
    }
  else {
    while (fpos <= max - 1) {
      printf("%d\t", cq[fpos]);
      fpos++;
    }
    fpos = 0;
    while (fpos <= rpos) {
      printf("%d\t", cq[fpos]);
      fpos++;
    }
  }
  printf("\n");
}
int main() {
  int choice, item;
  do {
    printf("\n1.insertion\n2.deletion\n3.display\n4.exit");
    printf("\nenter ur choice : ");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      printf("enter item to insert : ");
      scanf("%d", & item);
      insertion(item);
      break;
    case 2:
      deletion();
      break;
    case 3:
      display();
      break;
    case 4:
      break;
    default:
      printf("invalid choice");
    }
  } while (choice != 4);
  return 0;
}
