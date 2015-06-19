#include <iostream>

using namespace std;

class Czas
{
	public:
    	void podajCzas();
    	void wyswietl();
    	void zwiekszMinuty(int a);
    	friend Czas porownajZegary(Czas zeg1, Czas zeg2);
    	Czas();
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

Czas porownajZegary(Czas zeg1, Czas zeg2){
	int temp1=0;
	int temp2=0;

	temp1 += zeg1.godziny*60 + zeg1.minuty;
	temp2 += zeg2.godziny*60 + zeg2.minuty;

	if (temp1 > temp2){
		cout<<"Zegar na którym jest późniejsza godzina to pierwszy podany argument."<<endl;
		return zeg1;
	}
	else {
		cout<<"Zegar na którym jest późniejsza godzina to drugi podany argument."<<endl;
		return zeg2;
	}
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
	Czas zegar2 = Czas(4, 10);
	zegar2.wyswietl();
	
	zegar2.zwiekszMinuty(130);
	zegar2.wyswietl();

	porownajZegary(zegar1, zegar2).wyswietl();

	return 0;
}