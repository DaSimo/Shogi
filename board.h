#pragma once
class board
{
public:
	board();
	board(int position2[9][9], int peacesCaptured2[2][7], int move2);
	~board();
	int position[9][9] = {0}; //Brett
	int peacesCaptured[2][7] = { 0 }; //Geschlagene Figuren
	int move; // Zugmarker
	//int n, m; 
	int printBoard(); // Brett ausgeben
	bool makeMove(int org[2], int dest[2]); // Zug ausf�hren
	bool playerMove(void); // Zug eingeben
	bool validateMove(int peace, int org[2], int dest[2]); //�berpr�fe ob Zug regelkonform;
	bool checkCheck(int position[9][9], vector<vector<int>> *moveVector); // �berpr�fe ob Schach
	bool checkMate(int position[9][9]);
	bool checkMateReturnRandomMove(int position[9][9]);
	bool moveResultsInCheck(const vector<int>& moveVector);
	bool checkPeaceMove(int peace, int org[2], int dest[2]); // Zug entspricht den Figuren Regeln
	void promotePeace(int peace,int org[2], int dest[2]); // Figur bef�rdern
	bool checkIfPeaceInbetween(int peace, int org[2], int dest[2]); // �berpr�ft ob beim Ziehen eine Figur �bersprungen wurde
	void returnPossibleMoves(int position[9][9], vector<vector<int>> *moveVector,int flag);
	void returnPossibleMovesPeace(int field[2], int position[9][9], vector<vector<int>> *moveVector, int flag); // Gibt f�r eine Figur alle m�glichen Z�ge zur�ck
	void returnMoves(vector<vector<int>> *moveVector);
	void returnRandomMove();
	bool out_of_bounds_error(int field0, int field1); //�berpr�ft ob ein Zug �ber das Spielfeld hinaus f�hrt
	bool check_pawn(int row); // �berpr�ft ob bereits ein Bauer in der Reihe Steht
	void moveRight(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveLeft(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveVorward(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveBackward(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveVorwardRight(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveVorwardLeft(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveBackwardLeft(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	void moveBackwardRight(int m,int field0, int field1, vector<vector<int>>* moveVector, int flag);
	bool return_position_king(vector<int> *king);
	void setPosition(int position2[9][9], int peacesCaptured2[2][7]);
};

