#include <iostream>
#include "robot.h"

int main() {
	robot bob;
	bob.PickUpPiece();
	std::cout << bob.GetHasPiece() << std::endl;
	bob.Drive(6);
	std::cout << bob.GetPosition() << std::endl;
	bob.MoveArmTo(10);
	std::cout << bob.GetArmPosition() << std::endl;
	bob.ScorePiece();
	std::cout << bob.GetScore() << std::endl;
}