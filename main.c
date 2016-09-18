#include <stdio.h>
struct node
{
    int value;
    struct node *next;
};
int main(void)
{
   struct node a;
    a.value=3;
  struct  node b;
    b.value=4;
    a.next=&b;
    printf("a.netx value is : %d",(*(a.next)).value);
    getchar();
}
