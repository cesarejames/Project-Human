#include "Personality.h"

Personality::Personality(){


}

Personality::~Personality(){

}



void Personality::setType(Type personalityType){

	if(personalityType == ISFJ )
	{
		setI();setS();setF();setJ();
		return;
	}

	if(personalityType == INFP){
		setI();setN();setF();setP();
		return;
	}

	if(personalityType == ENFP){
		setE();setN();setF();setP();
		return;
	}

	if(personalityType == ISTJ){
		setI();setS();setT();setJ();
		return;
	}

	if(personalityType == ESFJ){
		setE();setS();setF();setJ();
		return;
	}

	if(personalityType == ESTJ){
		setE();setS();setT();setJ();
		return;
	}

	if(personalityType == ISFP){
		setI();setS();setF();setP();
		return;
	} 

	if(personalityType == INFJ){
		setI();setN();setF();setJ();
		return;
	} 

	if(personalityType == ESFP){
		setE();setS();setF();setP();
		return;
	} 

	if(personalityType == ENFJ){
		setE();setN();setF();setJ();
		return;
	}

	if(personalityType == INTP){
		setI();setN();setT();setP();
		return;
	}

	if(personalityType == ENTP){
		setE();setN();setT();setP();
		return;
	}

	if(personalityType == ISTP){
		setI();setS();setT();setP();
		return;
	} 

	if(personalityType == INTJ){
		setI();setN();setT();setJ();
		return;
	}

	if(personalityType == ESTP){
		setE();setS();setT();setP();
		return;
	}

	if(personalityType == ENTJ){
		setE();setN();setT();setJ();
		return;
	}
	
}



Personality::Type Personality::getType() const{

	if(m_I && m_S && m_F && m_J)
		return ISFJ;

	if(m_I && m_N && m_F && m_P)
		return INFP;

	if(m_E && m_N && m_F && m_P)
		return ENFP; 

	if(m_I && m_S && m_T && m_J)
		return ISTJ; 

	if(m_E && m_S && m_F && m_J)
		return ESFJ;

	if(m_E && m_S && m_T && m_J)
		return ESTJ; 

	if(m_I && m_S && m_F && m_P)
		return ISFP; 

	if(m_I && m_N && m_F && m_J)
		return INFJ; 

	if(m_E && m_S && m_F && m_P)
		return ESFP; 

	if(m_E && m_N && m_F && m_J)
		return ENFJ; 

	if(m_I && m_N && m_T && m_P)
		return INTP; 

	if(m_E && m_N && m_T && m_P)
		return ENTP;

	if(m_I && m_S && m_T && m_P)
		return ISTP; 

	if(m_I && m_N && m_T && m_J)
		return INTJ; 

	if(m_E && m_S && m_T && m_P)
		return ESTP; 

	if(m_E && m_N && m_T && m_J)
		return ENTJ; 
}









void Personality::setE(bool value){
	m_E = value;
	if(m_E == true)
		setI(false);

}
 void Personality::setI(bool value){
 	m_I = value;
 	if(m_I == true)
		setE(false);
}

 void Personality::setS(bool value){
 	m_S = value;
 	if(m_S == true)
		setN(false);
 }

 void Personality::setN(bool value){
 	m_N = value;
 	if(m_N == true)
		setS(false);
 }


 void Personality::setT(bool value){
 	m_T = value;
 	if(m_T == true)
		setF(false);
 }

 void Personality::setF(bool value){
 	m_F = value;
 	if(m_F == true)
		setT(false);
 }


 void Personality::setJ(bool value){
 	m_J = value;
 	if(m_J == true)
		setP(false);


 }
 void Personality::setP(bool value){
 	m_P = value;
 	if(m_P == true)
		setJ(false);
 }





bool Personality::getE() const{
    return m_E;
}
bool Personality::getI() const{
    return m_I;
}
bool Personality::getS() const{
    return m_S;
}
bool Personality::getN() const{
    return m_N;
}
bool Personality::getT() const{
    return m_T;
}
bool Personality::getF() const{
    return m_F;
}
bool Personality::getJ() const{
    return m_J;
}
bool Personality::getP() const{
    return m_P;
}
	











