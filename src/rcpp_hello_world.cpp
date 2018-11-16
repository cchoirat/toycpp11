
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::plugins(cpp11)]]

// [[Rcpp::export]]
int useCpp11() {
  auto x = 10;
  return x;
}

// [[Rcpp::export]]                                                                       
double myhypot(double x, double y) {
  // https://en.cppreference.com/w/cpp/numeric/math/hypot
  return std::hypot(x,y);
}

// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}
