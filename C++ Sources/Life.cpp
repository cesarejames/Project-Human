#include "Life.h"

//Singleton Pattern

Life Life::m_instance=Life();

Life::Life(){
	std::cout << "Creating Life..." << std::endl;
}
Life::~Life(){
	std::cout << "Destructing Life..." << std::endl;
}

Life& Life::getInstance(){
	return m_instance;
}

//Singleton pattern END



void Life::createHuman(std::string firstName, std::string lastName, int age){
	
	/* initialize random seed: */
	 srand (time(NULL));


	//Determine Gender
	int x = rand() % 2 +1;
	Human::Gender gender;
	if(x == 1) gender = Human::FEMALE;
	else gender = Human::MALE;

	Human human(firstName,lastName,age,gender);

	//Determine Sexual Orientation ============================================
		/*
		- 79% Heterosexual
		- 5%  Homosexual
		- 15%  Bisexual (9% "Officialy Bisexual" + 6% "it's hard to say" = 15%)
		- 1%  Asexual
		*/
	Human::SexualOrientation sexualOrientation;
	x = rand() % 100 +1;
	if(x == 1)				    sexualOrientation = Human::ASEXUAL;
	else if(x >= 2 && x <= 16)  sexualOrientation = Human::BISEXUAL;
	else if(x >=17 && x <= 21)  sexualOrientation = Human::HOMOSEXUAL;
	else if(x >=22 && x <= 100) sexualOrientation = Human::HETEROSEXUAL;

	human.setSexualOrientation(sexualOrientation);
	//=========================================================================

	//Determine Personality
	Personality::Type personalityType = static_cast<Personality::Type>(rand() % Personality::Type::nbElements);
	Personality personality;
	personality.setType(personalityType);
	human.setPersonality(personality);

	//Set Emotions

	createHuman(human);
}

void Life::createHuman(Human &human){
	m_humans.push_back(human);
}

void Life::killHuman(Human* human){
	human->setLivingState(Human::DEAD);
}

void Life::meet(Human &PersonA, Human &PersonB){

	// Check if there is not already a relationship between A and B

	Relationship relation; 


	bool firstMeeting = true;
	std::list<Relationship>::iterator iter;
	
	for(iter = m_relationships.begin(); iter != m_relationships.end() && firstMeeting == true; iter++){
		if(iter->getPersonA()->isEqual(PersonA) && iter->getPersonB()->isEqual(PersonB)){
			firstMeeting = false;
			relation = *iter;
		}
	}

	//Since it's their first time meeting we need to create a new relationship
	if(firstMeeting){
		relation = Relationship(&PersonA, &PersonB);
		m_relationships.push_back(relation);
	}


	//Make The Relationship evolve. According to the personality
	


}









