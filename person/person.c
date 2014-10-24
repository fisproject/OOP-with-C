#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "person.h"

struct person {
  int age;
  bool isMan;
  char* name;
};

Object CreatePerson(int a, bool g, const char* n) {
  Object p = malloc(sizeof(struct person));
  if (!p) return NULL;

  p->age = a;
  p->isMan = g;
  char* new_n = strdup(n);
  p->name = new_n;

  return p;
}

void DeletePerson(Object obj) { free(obj); }

// getter
int GetAge(Object obj) { return obj->age; }
bool GetIsMan(Object obj) { return obj->isMan; }
char* GetName(Object obj) { return obj->name; }

// setter
void SetAge(Object obj, int new_a) { obj->age = new_a; }
void SetIsMan(Object obj, bool new_m) { obj->isMan = new_m; }
void SetName(Object obj, char* new_n) { obj->name = new_n; }