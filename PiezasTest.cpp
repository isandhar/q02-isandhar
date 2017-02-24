/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 #include<iostream>
using namespace std;
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
TEST(PiezasTest, dropAtSmallerX){
	Piezas board;
	Piece actual;
	actual = board.dropPiece(-1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, dropAtLargerX){
	Piezas board;
	Piece actual;
	actual = board.dropPiece(4);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, dropAtSmallerO){
	Piezas board;
	Piece actual = board.dropPiece(0);
	actual = board.dropPiece(-1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, dropAtLargerO){
	Piezas board;
	Piece actual = board.dropPiece(0);
	actual = board.dropPiece(4);
	ASSERT_EQ(Invalid, actual);

}
TEST(PiezasTest, pieceAtOutLeft){
	Piezas board;
	Piece actual = board.pieceAt(0, -1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutUp){
	Piezas board;
	Piece actual = board.pieceAt(-1, 0);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutDiagonal){
	Piezas board;
	Piece actual = board.pieceAt(-1, -1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutRight){
	Piezas board;
	Piece actual = board.pieceAt(0, 4);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutRTop){
	Piezas board;
	Piece actual = board.pieceAt(-1, 3);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutRDiagonal){
	Piezas board;
	Piece actual = board.pieceAt(-1, 4);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutLTDiagonal){
	Piezas board;
	Piece actual = board.pieceAt(3, -1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutLTTop){
	Piezas board;
	Piece actual = board.pieceAt(3, 0);
	ASSERT_EQ(Invalid, actual);
} 
TEST(PiezasTest, pieceAtOutRTTop){
	Piezas board;
	Piece actual = board.pieceAt(3, 2);
	ASSERT_EQ(Invalid, actual);
} 
TEST(PiezasTest, pieceAtOutRTDiagonal){
	Piezas board;
	Piece actual = board.pieceAt(3, 4);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutLeftO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(0, -1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutUpO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(-1, 0);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutDiagonalO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(-1, -1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutRightO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(0, 4);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutRTopO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(-1, 3);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutRDiagonalO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(-1, 4);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutLTDiagonalO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(3, -1);
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, pieceAtOutLTTopO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(3, 0);
	ASSERT_EQ(Invalid, actual);
} 
TEST(PiezasTest, pieceAtOutRTTopO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(3, 2);
	ASSERT_EQ(Invalid, actual);
} 
TEST(PiezasTest, pieceAtOutRTDiagonalO){
	Piezas board;
	board.dropPiece(0);
	Piece actual = board.pieceAt(3, 4);
	ASSERT_EQ(Invalid, actual);
}

TEST(PiezasTest, pieceAtBlank1){
	Piezas board;
	Piece actual = board.pieceAt(0, 0);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlank2){
	Piezas board;
	Piece actual = board.pieceAt(0, 1);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlank3){
	Piezas board;
	Piece actual = board.pieceAt(0, 2);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlank4){
	Piezas board;
	Piece actual = board.pieceAt(0, 3);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlankTopCorner1){
	Piezas board;
	Piece actual = board.pieceAt(2, 0);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlankTopCorner2){
	Piezas board;
	Piece actual = board.pieceAt(2, 3);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlankMid1){
	Piezas board;
	Piece actual = board.pieceAt(1, 1);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, pieceAtBlankMid2){
	Piezas board;
	Piece actual = board.pieceAt(1, 2);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, dropPieceFilledColOError){
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(1);
	Piece actual = board.dropPiece(1);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, dropPieceFilledColXError){
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(1);
	board.dropPiece(1);
	Piece actual = board.dropPiece(1);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, reset1PieceBoard){
	Piezas board;
	board.dropPiece(1);
	board.reset();
	Piece actual = board.pieceAt(0,1);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, resetFullBoardTest){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(0);	
	board.dropPiece(0);	
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(3);
	board.reset();
	Piece actual = board.pieceAt(1,1);
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, dropXPiece){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(0);
	Piece actual = board.dropPiece(1);
	ASSERT_EQ(X, actual);
}
TEST(PiezasTest, dropOPiece){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(2);
	Piece actual = board.dropPiece(1);
	ASSERT_EQ(O, actual);
}
TEST(PiezasTest, winnerForEmptyBoard){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(0);
	Piece actual = board.gameState();
	ASSERT_EQ(Invalid, actual);
}
TEST(PiezasTest, winnerIfNoOneWon){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	Piece actual = board.gameState();
	ASSERT_EQ(Blank, actual);
}
TEST(PiezasTest, WinnerForXRow){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(2);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(1);
	Piece actual = board.gameState();
	ASSERT_EQ(X, actual);
}
TEST(PiezasTest, WinnerForXCol){
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(2);	
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(0);
	board.dropPiece(0);
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(2);
	Piece actual = board.gameState();
	ASSERT_EQ(X, actual);
}
TEST(PiezasTest, WinnerForORow){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(0);
	board.dropPiece(3);
	board.dropPiece(1);
	board.dropPiece(0);
	board.dropPiece(2);
	board.dropPiece(1);
	board.dropPiece(3);
	board.dropPiece(3);
	board.dropPiece(2);
	Piece actual = board.gameState();
	ASSERT_EQ(O, actual);
}

TEST(PiezasTest, WinnerForOCol){
	Piezas board;
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(0);
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(3);
	board.dropPiece(2);
	board.dropPiece(0);
	board.dropPiece(3);
	board.dropPiece(1);
	Piece actual = board.gameState();
	ASSERT_EQ(O, actual);
}
