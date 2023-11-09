#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class ImcClass {
	public:
		float peso;
		float altura;
		float imc;
	void calculo_imc()
		{
		imc = (peso / (altura*altura));
		cout << "O seu nivel de IMC: " << imc << "\n";
		return;
		}
	};

int main() {
	
	ImcClass object;
	
	cout << "Insira o seu peso" << "\n";
	cin >> object.peso;
	
	cout << "Insira sua altura: " << "\n";
	cin >> object.altura;

	object.calculo_imc();
	return 0;
	
}
