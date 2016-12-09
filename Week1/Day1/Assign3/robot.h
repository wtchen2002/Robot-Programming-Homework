#ifndef ROBOT_H_
#define ROBOT_H_

class robot {
public:
	int Drive(int distance);
	int MoveArmTo(int position);
	int ScorePiece();
	int PickUpPiece();

	bool GetHasPiece();
	int GetPosition();
	int GetArmPosition();
	int GetScore();

private:
	int robotPosition = 0;
	int armPosition = 0;
	int score = 0;
	bool hasPiece = false;
};

#endif