/*****************************************
 * Автор:   Лыско Александр              *
 * Задание: Циклы с пред- и постусловием *
 * Вариант: 5                            *
 ****************************************/

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {

  const double pi = acos(-1.0);
  double period;
  double resistance;
  double capacity;
  double inductance;

  resistance = 1530.0;
  capacity = 0.81 * pow(10.0, -7.0);
  inductance = 0.05;

  cout << "L\tT" << endl;

  while (inductance <= 0.05) {

    period = (2000.0 * pi) / ( sqrt( ((1 / (inductance * capacity)) - pow( (resistance / (2 * inductance) ), 2) ) ) );
    cout << fixed << setprecision(4) << inductance << "\t";
    cout << fixed << setprecision(3) << period << endl;
    inductance += 0.01;
    

  }

  cout << endl;

  while (inductance <= 0.5) {
    
    period = (2000.0 * pi) / (sqrt(((1 / (inductance * capacity)) - pow((resistance / (2 * inductance)), 2))));
    cout << fixed << setprecision(4) << inductance << "\t";
    cout << fixed << setprecision(3) << period << endl;
    inductance += 0.1;

  }
        
}
