
#include <iostream>

using namespace std;



class Node

{

private:

  char c;



public:

  Node();

  Node(char c);

  void setC(char c);

  char getC() const;

  Node &operator=(char c);

  friend ostream &operator<<(ostream &out, Node &b);

  operator char() const { return c; }

};



inline ostream &operator<<(ostream &out, Node &b)

{

  out << b.getC();

  return out;

}

class Coordinate {

    private:

    int x;

    int y;

    public:

    Coordinate(int xVal,int yVal);

    int getX()const {return x;};

    int getY()const {return y;};

    void setXY(int xVal, int yVal);





};