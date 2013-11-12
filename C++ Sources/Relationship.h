#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H

#include "Human.h"


class Relationship
{

	enum Type{ FRIENDSHIP, LOVE_TENDENCY};

public:
	Relationship();
	Relationship(Human *personA, Human *personB);
	~Relationship(void);

	Human* getPersonA();
	void  setPersonA(Human *personA);



	Human* getPersonB();
	void  setPersonB(Human *personB);


	float getLevel();
	void setLevel(float level);


	
	float getEvolutionFactor();
	void setEvolutionFactor(float factor);


	Type getType();
	void setType(Type type);



	









private:
	Human*   m_personA;
	Human*   m_personB;
	float    m_evolutionFactor; //The factor at witch it evolves over time at every encounter.
	float    m_level;			//e.g. Friends Level 10 == Best Friends 
	Type     m_type;

	Emotion emotionPersonA;  //Towards person B
	Emotion emotionPersonB; // Towards person A





};

#endif // REALTIONSHIP_H