#include <stdio.h>
#include <stdlib.h>

int global;

int main (){
  int local = 5;
  int local1 = 8;
  void *p = malloc(128);
  void *p1 = malloc(16);
  char *s = "Hello, World";
  char *s1 = "Hello1, World";
  printf ("Address of main is %p\n", main);
  printf ("Address of global is %p\n", &global);
  printf ("Address of local is %p\n", &local);
  printf ("Address of local1 is %p\n", &local1);
  printf ("p points to %p\n", p);
  printf ("p1 points to %p\n", p1);
  printf ("s points to %p\n", s);
  printf ("s1 points to %p\n", s1);
}
