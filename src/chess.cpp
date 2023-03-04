#include "chess.h"

#include <iostream>

// Функция проверки угрозы королю
void Chess::checkThreatToKing() {
  // Если король находится на той же строке или столбце, что и ладья или слон,
  // то королю угрожает соответствующая фигура
  if (king_pos.row == rook_pos.row || king_pos.col == rook_pos.col) {
    std::cout << "Threat to king from rook" << std::endl;
  } else if (std::abs(king_pos.row - bishop_pos.row) == 
             std::abs(king_pos.col - bishop_pos.col)) {
    // Если король и слон находятся на одной диагонали, то королю угрожает слон
    std::cout << "Threat to king from bishop" << std::endl;
  } else {
    std::cout << "No threat to king" << std::endl;
  }
}

// Функция для задания позиции короля
void Chess::setKingPosition(int row, int col) {
  king_pos.row = row;
  king_pos.col = col;
}

// Функция для задания позиции ладьи
void Chess::setRookPosition(int row, int col) {
  rook_pos.row = row;
  rook_pos.col = col;
}

// Функция для задания позиции слона
void Chess::setBishopPosition(int row, int col) {
  bishop_pos.row = row;
  bishop_pos.col = col;
}

int main() {
  Chess chess_game;

  // Задаем начальные позиции фигур
  chess_game.setKingPosition(1, 1);
  chess_game.setRookPosition(1, 8);
  chess_game.setBishopPosition(3, 3);

  // Проверяем, угрожает ли королю ладья или слон
  chess_game.checkThreatToKing();

  return 0;
}


