namespace BehaviorTree{
	

	class Node{
			Node(){}
			public enum State{READY, SUCCESS, FAILED, RUNNING, VISITING}


			private m_State;
			private vector<Node> children;
			
	}


	class Action : Node{

	}

	class Sequence : Node {

		private Vector children; //in sequence order
		int nextChildToUpdateIndex;

		/* Iterate through children go on til a child returns next */
		void update(){}
	}

	class ConcurrentSelector: Node{

	}


	class PrioritySelector: Node{

	}















}