#include <iostream>
using namespace std; 
void mdemensionales_array()
{
	string name[2][2]; 
	name[0][0] = "Markus";
	name[0][1] = "Angie";
	name[1][0] = "Kevin";
	name[1][1] = "Michi";


	cout << "Teilnehmende Schueler "<<endl<<name[0][0]<<endl << name[0][1]<<endl << name[1][0]<< endl << name[1][1]<<endl;
}