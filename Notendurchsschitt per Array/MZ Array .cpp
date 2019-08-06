#include <iostream>
using namespace std; 
void mdemensionales_array()
{
	string Teilnehmer[2][2]; 
	
	Teilnehmer[0][1] = "Markus Mustermann";
	Teilnehmer[1][0] = "Kevin C#";
	Teilnehmer[0][0] = "Michi Mueller";
	Teilnehmer[1][1] = "Angie Mueller";
	cout << "Teilnehmerliste: " << endl;
	cout << Teilnehmer[0][0]<<endl; 
	cout << Teilnehmer[0][1] << endl;
	cout << Teilnehmer[1][0] << endl;
	cout << Teilnehmer[1][1] << endl<<endl;

}