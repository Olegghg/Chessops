#include "chess.h"
#include <gtest/gtest.h>

// Тест для проверки угрозы королю со стороны ладьи
TEST(ChessTest, RookThreat) {
  Chess game;
  game.setKingPosition(4, 4); // король находится в центре доски
  game.setRookPosition(4, 8); // ладья расположена на той же строке, что и король
  game.checkThreatToKing();
  EXPECT_EQ("Threat to king from rook", testing::internal::GetCapturedStdout());
}

// Тест для проверки угрозы королю со стороны слона
TEST(ChessTest, BishopThreat) {
  Chess game;
  game.setKingPosition(4, 4); // король находится в центре доски
  game.setBishopPosition(2, 6); // слон расположен на одной из диагоналей, проходящих через короля
  game.checkThreatToKing();
  EXPECT_EQ("Threat to king from bishop", testing::internal::GetCapturedStdout());
}

// Тест для проверки отсутствия угрозы королю со стороны фигур
TEST(ChessTest, NoThreat) {
  Chess game;
  game.setKingPosition(4, 4); // король находится в центре доски
  game.setRookPosition(1, 1); // ладья расположена в углу доски
  game.setBishopPosition(8, 8); // слон расположен в противоположном углу доски
  game.checkThreatToKing();
  EXPECT_EQ("No threat to king", testing::internal::GetCapturedStdout());
}

