//weight on different planets

#include <iostream>
#define G 6.67e-11 //Gravitational constant
using namespace std;

class planet
{
	float mass,machine_weight, planet_weight;
	long double mass_of_planet,radius;
	public:
        void get_mass() //for inputing the mass
        {
		cout<<"What's your weight on weighing machine? ";
		cin>>machine_weight;
		mass=machine_weight/9.8;//dividing weighing machine weight by acceleration due to gravity (g) on earth
        }
        void earth()
        {
		cout<<"Your weight on Earth is "<<machine_weight<<endl;
        }
	//weight=mass*acceleration due to gravity
        void moon()
        {
		planet_weight=mass*1.6; // g(moon)=1.6
		cout<<"Your weight on Moon is "<<planet_weight<<endl;
        }
        void mercury()
        {
		planet_weight=m*3.61; // g(mercury)=3.61
		cout<<"Your weight on Mercury is "<<planet_weight<<endl;
        }
        void venus()
        {
		planet_weight=m*8.83;
		cout<<"Your weight on Venus is "<<planet_weight<<endl;
        }
        void mars()
        {
		planet_weight=m*3.75;
		cout<<"Your weight on Mars is "<<planet_weight<<endl;
        }
        void jupiter()
        {
		planet_weight=m*26;
		cout<<"Your weight on Jupiter is "<<planet_weight<<endl;
        }
        void saturn()
        {
		planet_weight=m*11.2;
		cout<<"Your weight on Saturn is "<<planet_weight<<endl;
        }
        void uranus()
        {
		planet_weight=m*10.5;
		cout<<"Your weight on Uranus is "<<planet_weight<<endl;
        }
        void neptune()
        {
		planet_weight=m*13.3;
		cout<<"Your weight on Neptune is "<<planet_weight<<endl;
        }
        void pluto()
        {
		planet_weight=m*0.61;
		cout<<"Your weight on Pluto is "<<planet_weight<<endl;
        }
        void sun()
        {
		planet_weight=m*275;
		cout<<"Your weight on Sun is "<<planet_weight<<endl;
        }
        void unknown_planet()//to calculate weight on unknown planet using planet's mass and radius
        {
		cout<<"Enter Radius of the planet";
		cin>>radius;
		cout<<"Enter Mass of the planet";
		cin>>mass_of_planet;
		planet_weight=((G*mass_of_planet*mass)/(radius*radius));
		cout<<"Your weight on this planet is "<<planet_weight<<endl;
        }
};
};
int main()
{
	
	int ch;
 	
	do
	{
		cout<<"***********************************************\n";
		cout<<"Enter your choice:\n1:Earth\n2:Moon\n3:Mercury\n4:Venus\n5:Mars\n6:Jupiter\n7:Saturn\n8:Uranus\n9:Neptune\n10:Pluto\n11:Sun\n12:Unknown planet\n13:Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:earth();
				break;
			case 2:moon();
				break;
			case 3:mercury();
				break;
			case 4:venus();
				break;
			case 5:mars();
				break;
			case 6:jupiter();
				break;
			case 7:saturn();
				break;
			case 8:uranus();
				break;
			case 9:neptune();
				break;
			case 10:pluto();
				break;
			case 11:sun();
				break;
			case 12:unknown_planet()
				break;
			case 13:break;
			default:cout<<"Invalid Choice\n";
		}
	}while(ch!=13);
	return 0;
}
