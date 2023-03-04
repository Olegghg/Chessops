#ifndef CHESS_H
#define CHESS_H

struct Position {
  int row;
  int col;
};

class Chess {
 public:
  void checkThreatToKing();
  void setKingPosition(int row, int col);
  void setRookPosition(int row, int col);
  void setBishopPosition(int row, int col);

 private:
  Position king_pos;
  Position rook_pos;
  Position bishop_pos;
};

#endif  // CHESS_H
