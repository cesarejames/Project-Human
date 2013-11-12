#ifndef HUMAN_H
#define HUMAN_H


#include <string>
#include <map>

#include "Emotions.h"
#include "Personality.h"


class Human
{
public:
	enum Gender{ MALE, FEMALE, nbGenders };
	enum SexualOrientation{ HETEROSEXUAL, HOMOSEXUAL, BISEXUAL, ASEXUAL, nbSexualOrientations };
	enum RelationshipState{ SINGLE, IN_RELATIONSHIP };
	enum LivingState{ ALIVE, DEAD };
	
private:

	//basic infos
	std::string			 m_firstName;
	std::string			 m_lastName;
	unsigned int		 m_age;
	Gender				 m_gender;
	SexualOrientation	 m_sexualOrientation;
	RelationshipState	 m_relationshipState; //Whether Single, in a relationship or whatever else
	LivingState			 m_livingState; 


    //Aspect psychique
	Emotion				m_emotions;  //The emotions of the human
	Personality			m_personality; // The personality of the human




	//Relationships
	Human*							m_father;
	Human*							m_mother;
	Human*							m_spouse;
	/*
	std::map<std::string, Human>	m_children;		//Maybe someday use smart pointers

	std::map<std::string, Human>	m_knownPeople;	
	std::map<std::string, Human>	m_friends;	
	std::map<std::string, Human>	m_ennemies;	
	*/



public:

	Human(std::string firstName, std::string lastName, unsigned int age, Gender gender);
	Human();
	~Human();


	/* METHODS */

	void addFriend(Human person);

	bool isEqual(Human const& personB) const;



	/* GETTERS and SETTERS */


	void setEmotionLevels(emotionDyad dyad);
	void setPersonality(Personality personality);
	void setFirstName(std::string FirstName);
	void setLastName(std::string LastName);
	void setAge(unsigned int Age);
	void setGender(Gender Gender);
	void setSexualOrientation(SexualOrientation sexualOrientation);
	void setRelationshipState(RelationshipState relationshipState);
	void setLivingState(LivingState livingState);
	void setFather(Human* father);
	void setMother(Human* mother);
	void setSpouse(Human* spouse);

	std::string getDNA() const; //The genetic code of every human
	Personality getPersonality() const;
	std::string getLastName() const;
	unsigned int getAge() const;
	std::string getFirstName() const;
	Gender getGender() const;
	SexualOrientation getSexualOrientation() const;
	RelationshipState getRelationshipState() const;
	LivingState getLivingState() const;
	Human* getFather() const;
	Human* getMother() const;
	Human* getSpouse() const;



	








};

#endif //HUMAN_H
