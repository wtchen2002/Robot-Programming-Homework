#include <iostream>
#include "Day5/Assign3/Assign2/robot-lib/robot.h"

int main() {
	bob::robot bob;
	bob.PickUpPiece();
	std::cout << bob.GetHasPiece() << std::endl;
	bob.Drive(6);
	std::cout << bob.GetPosition() << std::endl;
	bob.MoveArmTo(10);
	std::cout << bob.GetArmPosition() << std::endl;
	bob.ScorePiece();
	std::cout << bob.GetScore() << std::endl;
}
