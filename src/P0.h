
#ifndef BRAZOROBOTICO_H_INCLUDED
#define BRAZOROBOTICO_H_INCLUDED

using namespace std;

class BrazoRobotico{
	private:
		double x;
		double y;
		double z;
		bool sujetar;
	public:
		BrazoRobotico(double x, double y, double z, bool sujetar);
		int getX();
		int getY();
		int getZ();
		bool getSujetar();
		void coger();
		void soltar();
	  void mover(double x, double y, double z);
};

#endif
