#include <stdio.h>
#include <stdbool.h>
#include "person/person.h"

int main(void) {
  Object person = NULL;

  // create object
  person = CreatePerson(26, true, "Bob");
  if (!person) return 1;

  // age
  printf("age: %d\n", GetAge(person));
  SetAge(person, 18);
  printf("new age: %d\n", GetAge(person));

  // isMan
  printf("isMan: %d\n", GetIsMan(person));
  SetIsMan(person, false);
  printf("after isMan: %d\n", GetIsMan(person));

  // name
  printf("name: %s\n", GetName(person));
  SetName(person, "Alice");
  printf("new name: %s\n", GetName(person));

  // delete object
  DeletePerson(person);

  return 0;
}