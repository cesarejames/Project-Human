#pragma once
#ifndef PERSONALITY_H
#define PERSONALITY_H



class Personality
{
public:
	enum Type{
		ISFJ, // Defender    - Protectors	
		ESFJ, // Supporter   - Protecters
		ESTJ, // Overseer    - Protectors
		ISTJ, // Examiner    - Protectors

		INFP, // Dreamer     - Visionaries
		ENFP, // Advocate    - Visionaries
		INFJ, // Confident   - Visionaries
		ENFJ, // Mentor      - Visionaries
	
		ISFP, // Artist      - Creators
		ESFP, // Entertainer - Creators
		ISTP, // Craftsman   - Creators
		ESTP, // Persuader   - Creators

		INTP, // Engineer    - Intellectuals
		ENTP, // Originator  - Intellectuals
		INTJ, // Strategist  - Intellectuals
		ENTJ, // Chief       - Intellectuals

		nbElements
	};


private:
	//Energy Orientation
	bool m_E;    //Extroversion
	bool m_I;    //Introversion


	//The preferred way to gather information
	bool m_S;      //Sensing
	bool m_N;      //Intuition


	//Preferred treatment for decision making
	bool m_T;     //Thinking
	bool m_F;     //Feeling


	//Mode of action
	bool m_J;		 //Judging
	bool m_P;		 //Perception

public:
	 Personality();
	 ~Personality();

	 Type getType() const;
	 void setType(Type personalityType);
	
	//Getters and Setters
	 void setE(bool value=true);
	 void setI(bool value=true);
	 void setS(bool value=true);
	 void setN(bool value=true);
	 void setT(bool value=true);
	 void setF(bool value=true);
	 void setJ(bool value=true);
	 void setP(bool value=true);

	 bool getE() const;
	 bool getI() const;
	 bool getS() const;
	 bool getN() const;
	 bool getT() const;
	 bool getF() const;
	 bool getJ() const;
	 bool getP() const;



};

#endif //PERSONALITY_H