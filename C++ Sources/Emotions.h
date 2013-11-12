#ifndef EMOTIONS_H
#define EMOTIONS_H



class Emotion{
private:
		/* Out of 100 */
		unsigned int m_joy;
		unsigned int m_trust;
		unsigned int m_fear;
		unsigned int m_anticipation;

public:
		


		void setJoy(unsigned int joy);
		void setTrust(unsigned int trust);
		void setFear(unsigned int fear);
		void setAnticipation(unsigned int anticipation);

		unsigned int getJoy() const;
		unsigned int getTrust() const;
		unsigned int getFear() const;
		unsigned int getAnticipation() const;
		



		bool hasJoy() const;
		bool hasTrust() const;
		bool hasFear() const;
		bool hasAnticipation() const;
		
};

enum emotionDyad {  

	//Primary DYADS
	LOVE,
	SUBMISSION,
	ALARM,
	DISAPPOINTMENT,
	REMORSE,
	CONTEMPT,
	AGGRESSION,
	OPTIMISM,

	//Secondary DYADS
	GUILT,
	CURIOSITY,
	DESPAIR,
	GREAT_DISGUST,
	ENVY,
	CYNISM,
	PRIDE,
	FATALISM,


	//Tertiary DYADS
	DELIGHT,
	SENTIMENTALITY,
	SHAME,
	OUTRAGE,
	PESSIMISM,
	MORBIDNESS,
	DOMINANCE,
	ANXIETY
};

#endif //EMOTIONS_H
