#include "vector.h"
#include <iomanip>

    vector vector::operator+( vector v ){
      double x1,y1;

      x1 = x + v.x;
      y1 = y + v.y;

      return vector( x1, y1 );
    
    }


    vector vector::operator-( vector v ){
    
      double x1,y1;

      x1 = x - v.x;
      y1 = y - v.y;

      return vector( x1, y1 );
    
    }


    double vector::operator^( vector v ){
    
      double x1,y1;

      x1 = x * v.x;
      y1 = y * v.y;

      return ( x1 + y1 );
    
    }


    void vector::setComponents(double x, double y){
      this->x = x;
      this->y = y;
    }


    void vector::setComponentx(double x){
      this->x = x;
    }


    void vector::setComponenty(double y){
      this->y = y;
    }



    double vector::getComponentx(){
        return x;
    }


    double vector::getComponenty(){
        return y;
    }


    std::ostream& operator<<(std::ostream& out, const vector& v){

//    out << "\n" <<  v.x << "\n" << v.y << std::endl;

//      out << std::setw(11) << v.x << std::setw(11) << v.y << std::endl;
      out << std::setw(20) << v.x << std::setw(20) << v.y << std::endl;


    return out;

  }




    vector operator*(  double s, vector v ){
      double x1,y1;

      x1 = s*v.getComponentx();
      y1 = s*v.getComponenty();

      return vector( x1, y1 );
    }


    vector operator*( vector v, double s ){
      double x1,y1;

      x1 = s*v.getComponentx();
      y1 = s*v.getComponenty();

      return vector( x1, y1 );
    }
