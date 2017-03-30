#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include "Elo.h"


using namespace std;

int main()
{
	Elo elo;
	int max_adj, initial_a, initial_b;
	float score;
	// infile
	ifstream inFile("infile", ios::in);
	
	if( !inFile ) {
		cerr << "Failed opening infile" << endl;
		exit(1);
	}
	// outfile
	ofstream outFile("outfile", ios::out);
	
	if( !outFile ) {
		cerr << "Failed opening outfile" << endl;
		exit(1);
	}
	// read infile's first line
	inFile >> max_adj >> initial_a >> initial_b;
	outFile << initial_a << "\t" << initial_b << endl;
	elo.set_k( max_adj );
	elo.set_a( initial_a );
	elo.set_b( initial_b );
	
	while( inFile >> score ) 
	{
		elo.set_s_a( score );
		elo.set_s_b( score );
		
		outFile << elo.calc_a() << "\t" << elo.calc_b() << endl;

		elo.reset_a();
		elo.reset_b();
	}
	cout << endl;
	return 0;
}
