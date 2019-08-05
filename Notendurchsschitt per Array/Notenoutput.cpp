#include <iostream>
using namespace std;
void notendurchschnitt_von_Markus()
{
	float Markus[4];

	cout << "Gebe Note von Markus Mustermann ein: ";
	cin >> Markus[0];
	cout << "Gebe Note von Markus Mustermann ein: ";
	cin >> Markus[1];
	cout << "Gebe Note von Markus Mustermann ein: ";
	cin >> Markus[2];
	cout << "Gebe Note von Markus Mustermann ein: ";
	cin >> Markus[3];

	float summe = Markus[0] + Markus[1] + Markus[2] + Markus[3];
	summe = summe / 4; 
	cout <<"Notendurchschnitt: "<< summe<<endl; 
}
void notendurchschnitt_von_Kevin()
{
	float Kevin[4]; 
	cout << "Gebe Note von Kevin C# ein: ";
	cin >> Kevin[0];
	cout << "Gebe Note von Kevin C# ein: ";
	cin >> Kevin[1];
	cout << "Gebe Note von Kevin C# ein: ";
	cin >> Kevin[2];
	cout << "Gebe Note von Kevin C# ein: ";
	cin >> Kevin[3];
	float summe = Kevin[0] + Kevin[1] + Kevin[2] + Kevin[3];
	summe = summe / 4;
	cout << "Notendurchschnitt: "<<summe<<endl;


}
void notendurchschnitt_von_Angie()
{
	float Angie[3]; 
	cout << "Gebe Note von Angie Mueller ein: ";
	cin >> Angie[0];
	cout << "Gebe Note von Angie Mueller ein: ";
	cin >> Angie[1];
	cout << "Gebe Note von Angie Mueller ein: ";
	cin >> Angie[2];

	float summe = Angie[1] + Angie[0] ;
	summe = summe / 2; 
	cout << "Notendurchschnitt: " << summe<<endl;
}
void notendurchschnitt_von_Michi()
{
	float Michi[4];
	cout << "Gebe Note von Michi Mueller ein: ";
	cin >> Michi[0];
	cout << "Gebe Note von Michi Mueller ein: ";
	cin >> Michi[1];
	cout << "Gebe Note von Michi Mueller ein: ";
	cin >> Michi[2];
	cout << "Gebe Note von Michi Mueller ein: ";
	cin >> Michi[3];
	float summe = Michi[0] + Michi[1] + Michi[2] + Michi[3];
	summe = summe / 4;
	cout << "Notendurchschnitt: " << summe<<endl;
}
void notendurchschnitt_von_Jimmy()
{
	float Jim[3];
	cout << "Gebe Note von Jimmy Carter ein: ";
	cin >> Jim[0];
	cout << "Gebe Note von Jimmy Carter ein: ";
	cin >> Jim[1];
	cout << "Gebe Note von Jimmy Carter ein: ";
	cin >> Jim[2];
	int summe = Jim[0] + Jim[1] + Jim[2]; 
	summe = summe / 3; 
	cout << "Notendurchschnitt: " << summe<<endl;
}