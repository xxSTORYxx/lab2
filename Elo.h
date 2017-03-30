using namespace std;
class Elo
{
	public:
		void set_k ( int z );
		void set_a ( int x );
		void set_b ( int y );
		void set_s_a ( float w );
		void set_s_b ( float p );

		int get_a ();
		int get_b ();
		int get_k ();
		float get_s_a ();
		float get_s_b ();

		int calc_a ();
		int calc_b ();

		int reset_a ();
		int reset_b ();

		double rounding ( double q, double r );
	private:
		int a, b, k, f_a, f_b;
		float s_a, s_b;
		double Ea, Eb, index_a, index_b, f_Ea, f_Eb;

		int t;
		double q, r;
};
