#include "restaurant.h"

int Restaurant::nextId = 101;

Restaurant::Restaurant() : name("no name"), rating(-1), id(nextId) {
  nextId++;
}

Restaurant::Restaurant(string name, int rating) : id(nextId) {
  this->name = name;
  this->rating = rating;
  nextId++;
}

string Restaurant::GetName() const {
  return name;
}

void Restaurant::SetName(string name) {
  this->name = name;
}
void Restaurant::SetRating(int rating) {
  this->rating = rating;
}

int Restaurant::GetNextId() {
  return nextId;
}

void Restaurant::Print() {
  cout << id << ": " << name << "--" << rating << endl;
}
