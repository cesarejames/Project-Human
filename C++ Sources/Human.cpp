#include "Human.h"


// CONSTRUCTORS AND DESTRUCTORS

Human::Human(std::string firstName, std::string lastName, unsigned int age, Gender gender){
	m_firstName         = firstName;
	m_lastName          = lastName;
	m_age               = age;
	m_gender            = gender;
	
	m_father            = NULL;
	m_mother            = NULL;
	m_spouse            = NULL;


	m_livingState       = Human::ALIVE;
	m_relationshipState = Human::SINGLE;



}


Human::~Human(){


}







// METHODS
void Human::addFriend(Human person) {
    /*m_friends[person.getDNA()] = person;*/
}





bool Human::isEqual(Human const& personB) const{

    if(m_firstName == personB.getFirstName())
        if(m_lastName == personB.getLastName())
            if(m_age == personB.getAge())
                if(m_sexualOrientation == personB.getSexualOrientation())
                    if(m_sexualOrientation == personB.getLivingState())
                        return true;

    return false;
}







// GETTERS SETTERS ==============================================

void Human::setEmotionLevels(emotionDyad dyad){



}

Personality Human::getPersonality() const{
        return m_personality;
}
void Human::setPersonality(Personality personality){
    m_personality = personality;
}





std::string Human::getDNA() const{
  
    return "lol";
}


std::string Human::getFirstName() const{
    return m_firstName;
}
void Human::setFirstName(std::string FirstName){
    m_firstName = FirstName;
}

std::string Human::getLastName() const{
    return m_lastName;
}
void Human::setLastName(std::string LastName){
    m_lastName = LastName;
}

unsigned int Human::getAge() const{
    return m_age;
}
void Human::setAge(unsigned int Age){
    m_age = Age;
}	


Human::Gender Human::getGender() const{
    return m_gender;
}
void Human::setGender(Gender Gender){
    m_gender = Gender;
}

Human::SexualOrientation Human::getSexualOrientation() const{
    return m_sexualOrientation;
}
void Human::setSexualOrientation(SexualOrientation sexualOrientation){
    m_sexualOrientation = sexualOrientation;
}

Human::RelationshipState Human::getRelationshipState() const{
    return m_relationshipState;
}
void Human::setRelationshipState(RelationshipState relationshipState){
    m_relationshipState = relationshipState;
}

Human::LivingState Human::getLivingState() const{
    return m_livingState;
}
void Human::setLivingState(LivingState livingState){
    m_livingState = livingState;
}



Human* Human::getFather() const{
    return m_father;
}
void Human::setFather(Human* father){
    m_father = father;
}

Human* Human::getMother() const{
    return m_mother;
}
void Human::setMother(Human* mother){
    m_mother = mother;
}


Human* Human::getSpouse() const{
    return m_spouse;
}
void Human::setSpouse(Human* spouse){
    m_spouse = spouse;
}