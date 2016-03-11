
#ifndef Cvector_hpp
#define Cvector_hpp

#include"Cvertex.hpp"
class Cvector {
public:
  double x;
  double y;
  double z;

  Cvector();
  Cvector(const double & a, const double & b,const double & c);//constructeur en passant en paramettre 
  Cvector(const Cvector & Cvec);//constructeur par copie

  ~Cvector();//la c'est mon destructeur 
};
#endif
