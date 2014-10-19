#ifndef CARL_H
#define CARL_H

#include <cstdlib>

using namespace std;

class Carl {
 private:
  string favoriteFood;

 public:
  Carl();
  string getFavoriteFood();
  setFavoriteFood(string newFavoriteFood);

};

#endif
