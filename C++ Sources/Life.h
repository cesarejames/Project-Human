#ifndef LIFE_H
#define LIFE_H

#include <iostream>
#include <string>
#include <stdlib.h> /* rand */
#include <time.h> 

#include <vector>
#include <list>

#include "Human.h"
#include "Relationship.h"

class Life //Singleton
{
public:
	static Life& getInstance();
	void createHuman(std::string firstName, std::string lastName, int age=0); 
	void createHuman(Human &human); 
	void killHuman(Human* human);

	void meet(Human &PersonA, Human &PersonB);




	//These should be seen as tables in a Database
	std::vector<Human>		m_humans;
	std::list<Relationship> m_relationships;





private:
	Life& operator= (const Life&){}
	Life	(const Life&){}
	Life();
	~Life();

	static Life m_instance;



	







};

#endif // LIFE_H