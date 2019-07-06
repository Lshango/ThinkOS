#include <stdio.h>
#include <stdlib.h>

int global;

int main (){
  int local = 5;
  void *p = malloc(128);
  char *s = "Hello, World";
  printf ("Address of main is %p\n", main);
  printf ("Address of global is %p\n", &global);
  printf ("Address of local is %p\n", &local);
  printf ("p points to %p\n", p);
  printf ("s points to %p\n", s);
}
