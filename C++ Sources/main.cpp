#include <iostream>
#include <stdio.h>

#include <conio.h>

#include "Human.h"
#include "Life.h"


using namespace std;







int main(){


	Life::getInstance().createHuman("John","Rambo",25);
	Life::getInstance().createHuman("Jane","Ramba",25);

	Life::getInstance().meet(Life::getInstance().m_humans[0],Life::getInstance().m_humans[1]);

	Life::getInstance().meet(Life::getInstance().m_humans[0],Life::getInstance().m_humans[1]);
	_getch();
	return 0;
}