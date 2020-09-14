#include <stdio.h>
#include "person.h"
#include "elevator.h"

Elevator* createElevator(int capacity, int currentFloor, int targetFloor, PersonList persons){
  Elevator *e;
  e->capacity=capacity;
  e->currentFloor=currentFloor;
  e->targetFloor = targetFloor;
  e->persons = persons;
  return e;
}

Building* createBuilding(int nbFloor, Elevator *elevator, PersonList **waitingLists){
  Building *b;
  b->nbFloor = nbFloor;
  b->elevator = elevator;
  b->waitingLists = waitingLists;
  return b
}
