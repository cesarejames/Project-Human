#include "Emotions.h"




void Emotion::setJoy(unsigned int joy){
	m_joy = joy;
}
void Emotion::setTrust(unsigned int trust){
	m_trust = trust;
}
void Emotion::setFear(unsigned int fear){
	m_fear = fear;
}	
void Emotion::setAnticipation(unsigned int anticipation){
	m_anticipation = anticipation;
}




unsigned int Emotion::getJoy() const{
	return m_joy;
}
unsigned int Emotion::getTrust() const{
	return m_trust;
}
unsigned int Emotion::getFear() const{
	return m_fear;
}
unsigned int Emotion::getAnticipation() const{
	return m_anticipation;
}

















bool Emotion::hasJoy() const{
	if(m_joy >= 51 && m_joy <= 100)
		return true;
	return false;
}

bool Emotion::hasTrust() const{
	if(m_trust >= 51 && m_trust <= 100)
		return true;
	return false;
}


bool Emotion::hasFear() const{
	if(m_fear >= 51 && m_fear <= 100)
		return true;
	return false;
}

bool Emotion::hasAnticipation() const{
	if(m_anticipation >= 51 && m_anticipation <= 100)
		return true;
	return false;
}