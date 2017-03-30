#include "Elo.h"
#include <math.h>

using namespace std;

void Elo::set_a ( int x ){
	a = x;
}
void Elo::set_b ( int y ){
	b = y;
}
void Elo::set_k ( int z ){
	k = z;
}
void Elo::set_s_a ( float w ){
	s_a = w;
}
void Elo::set_s_b ( float p ){
	if ( p == 0 ){
		s_b = 1;
	}
	if ( p == 1 ){
		s_b = 0;
	}
	if ( p == 0.5 ){
		s_b = 0.5;
	}
}
int Elo::get_a (){
	return a;
}
int Elo::get_b (){
	return b;
}
int Elo::get_k (){
	return k;
}
float Elo::get_s_a (){
	return s_a;
}
float Elo::get_s_b (){
	return s_b;
}
int Elo::calc_a (){
	index_a = (b - a)/400.0;
	Ea = 1/(1 + pow ( 10, index_a ));   
	f_Ea = rounding ( Ea, 3 );
	f_a = round (a + k*(s_a - f_Ea));
	return f_a;
}
int Elo::calc_b (){
	index_b = (a - b)/400.0;
	Eb = 1/(1 + pow ( 10, index_b ));   
	f_Eb = rounding ( Eb, 3 );
	f_b = round (b + k*(s_b - f_Eb));
	return f_b;
}
int Elo::reset_a (){
	a = f_a;
}
int Elo::reset_b (){
	b = f_b;
}
double Elo::rounding ( double q, double r ){
	t = pow ( 10, r );
	q = (int)(q*t + 0.5)/( t*1.0 );
	return q;
}

	
