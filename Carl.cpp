#include "Carl.h"
#include <iostream>


Carl::Carl() {
  favoriteFood = "pizza";
};

string Carl::getFavoriteFood() {
  return favoriteFood;
}

Carl::setFavoriteFood(string newFavoriteFood) {
  cout <<"Error: Can't change favorite food. Pizza's still the best." << endl;
}
