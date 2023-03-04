#ifndef CHESS_H
#define CHESS_H

class ChessGame {
public:
    // Конструкторы и деструктор
    ChessGame();
    ~ChessGame();

    // Основные методы
    void move_piece(int from_row, int from_col, int to_row, int to_col);
    bool is_king_in_check();
    bool is_game_over();
};

#endif
