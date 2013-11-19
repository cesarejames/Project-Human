
// Conversion output is limited to 512 chars while you are signed out
// Please, sign in or register to get more...

public class Human
{

	//STATIC FUNCTIONS
	private static uint counter = 0; //Will be used as an unique ID

	public Human(){
		Interlocked.Increment(ref counter);
	}




	public enum Gender{ MALE, FEMALE, nbGenders };
	public enum SexualOrientation{ HETEROSEXUAL, HOMOSEXUAL, BISEXUAL, ASEXUAL, nbSexualOrientations };
	public enum RelationshipState{ SINGLE, IN_RELATIONSHIP };
	public enum LivingState{ ALIVE, DEAD };


	//BASIC INFOS
	private int 			  m_id;
	private string 			  m_firstName;
	private string 			  m_lastName;
	private uint   			  m_age;
	private Gender 			  m_gender;
	private SexualOrientation m_sexualOrientation;
	private RelationshipState m_relationshipState;
	private LivingState		  m_livingState;



	//PSYCHE ASPECT
	Emotion				m_emotions;  //The emotions of the human
	Personality			m_personality; // The personality of the human


	//RELATIONSHIPS
	Human					m_father;
	Human					m_mother;
	Human					m_spouse;

	/*
	Dictionnary<std::string, Human>	m_children;

	Dicationnary<int, Human>	m_knownPeople;
	Dicationnary<int, Human>	m_friends;
	Dicationnary<int, Human>	m_ennemies;
	*/













}