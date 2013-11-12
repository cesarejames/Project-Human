#include "Relationship.h"
 
Relationship::Relationship(){
	m_personA = NULL;
	m_personB = NULL;
}
Relationship::Relationship(Human *personA, Human *personB){
	m_personA = personA;
	m_personB = personB;
}


Relationship::~Relationship(void){
}


Human* Relationship::getPersonA(){
	return m_personA; 
}

void  Relationship::setPersonA(Human *personA){
	m_personA = personA;
}



Human* Relationship::getPersonB(){
	return m_personB;
}

void  Relationship::setPersonB(Human *personB){
	m_personB = personB;
}


float Relationship::getLevel(){
	return m_level;
}
void Relationship::setLevel(float level){
	m_level = level;

	if(m_level < 0)   { m_level = 0;}
	if(m_level > 100) { m_level = 100;}
}


float Relationship::getEvolutionFactor(){
	return m_evolutionFactor;

}

void Relationship::setEvolutionFactor(float factor){
	m_evolutionFactor = factor;
}


Relationship::Type Relationship::getType(){

	return m_type;
}

void  Relationship::setType(Type type){

	m_type = type;
}