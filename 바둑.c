#include <stdio.h>

#define BOARD_SIZE 9

int board[BOARD_SIZE][BOARD_SIZE];

void print_board() {
    for (int r = 0; r < BOARD_SIZE; r++) {
        for (int c = 0; c < BOARD_SIZE; c++) {
            if (board[r][c] == 0) printf(". ");
            else if (board[r][c] == 1) printf("O ");
            else if (board[r][c] == 2) printf("X ");
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int current_player = 2; // 2: 흑돌, 1: 흰돌
    int x, y;

    while (1) {
        print_board();
        if (scanf_s("%d %d", &x, &y) != 2) break;

        board[x][y] = current_player;
        current_player = (current_player == 2) ? 1 : 2;
    }

    return 0;
}