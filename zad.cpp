#include <iostream>

using namespace std;

class Czas
{
	public:
    	void podajCzas();
    	void wyswietl();
    	void zwiekszMinuty(int a);
    	friend void porownajZegary(Czas zeg1, Czas zeg2);
    	Czas();  // This is the constructor
    	Czas(int h, int m);
 
	private:
    	int godziny;
    	int minuty;
};

Czas::Czas(){
	godziny = 0;
	minuty = 0;
}

Czas::Czas(int h, int m){
	godziny = h;
	minuty = m;
}
void Czas::wyswietl(){
	cout<<"Aktualny czas to "<<godziny<<":"<<minuty<<endl;
}

void Czas::zwiekszMinuty(int a){
	int temp;
	temp = a/60;
	godziny += temp;
	minuty += a%60;
}
int main(){
	Czas zegar1 = Czas();
	zegar1.wyswietl();
	Czas zegar2 = Czas(2, 10);
	zegar2.wyswietl();
	zegar2.zwiekszMinuty(130);
	zegar2.wyswietl();

	return 0;
}