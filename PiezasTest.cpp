/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
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
TEST(PieceTest, pieceAtBlank1){
	Piezas board;
	Piece actual = board.pieceAt(0, 0);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlank2){
	Piezas board;
	Piece actual = board.pieceAt(0, 1);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlank3){
	Piezas board;
	Piece actual = board.pieceAt(0, 2);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlank4){
	Piezas board;
	Piece actual = board.pieceAt(0, 3);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlankTopCorner1){
	Piezas board;
	Piece actual = board.pieceAt(2, 0);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlankTopCorner2){
	Piezas board;
	Piece actual = board.pieceAt(2, 3);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlankMid1){
	Piezas board;
	Piece actual = board.pieceAt(1, 1);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, pieceAtBlankMid2){
	Piezas board;
	Piece actual = board.pieceAt(1, 2);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, dropPieceFilledColOError){
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(1);
	Piece actual = board.dropPiece(1);
	ASSERT_EQ(Blank, actual);
}
TEST(PieceTest, dropPieceFilledColXError){
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(2);
	board.dropPiece(1);
	board.dropPiece(1);
	Piece actual = board.dropPiece(1);
	ASSERT_EQ(Blank, actual);
}

