#ifndef CLASS_VECTOR
#define CLASS_VECTOR

#include <cmath>
#include <iostream>


class vector{


//  private:
  public:
    double x=0;
    double y=0;

  public:

    vector(){}
    
    vector( double x, double y){

      this->x = x;
      this->y = y;
    }
    
    vector operator+( vector v );
    vector operator-( vector v );
    double operator^( vector v );

  
    double getComponentx();
    double getComponenty();


    void setComponents(double x, double y);
    void setComponentx(double x);
    void setComponenty(double y);

    

    double magnitude(){

      return sqrt( pow(x,2) + pow(y,2) );

    }
    
    friend std::ostream& operator<<(std::ostream& out, const vector& v);


};


    vector operator*( double s, vector v );

    vector operator*( vector v, double s );


#endif
