#include <stdlib.h>
#include "person.h"

Person* createPerson(int dest, int src){
  Person *p;
  p->dest=dest;
  p->src=src;
  return p
}

PersonList* insert(Person *p, PersonList *list){
  list->next=list;
  list->person=p;
  return list
}
   
