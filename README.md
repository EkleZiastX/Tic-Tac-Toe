
# Tic-Tac-Toe Game 🎮

Welcome to the Tic-Tac-Toe game implemented in C++! This is a simple console-based game where two players take turns to mark the cells in a 3×3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.

## Features ✨
- 👥 Two-player mode
- 🖥️ Simple and intuitive user interface
- ✅ Input validation for moves
- 🕹️ Displays the game board after each move
- 🏆 Detects and announces the winner or a draw

## How to Play 🚀
1. Clone this repository:
    ```sh
    git clone https://github.com/EkleZiastX/Tic-Tac-Toe.git
    cd Tic-Tac-Toe
    ```
2. Compile the code:
    ```sh
    g++ -o tic_tac_toe main.cpp
    ```
3. Run the game:
    ```sh
    ./tic_tac_toe
    ```

## Example Game 🎲
Here's an example of how a game might look when you play:

```
WELCOME TO TIC-TAC-TOE GAME
The player who succeeds in placing three of their marks in a horizontal,
vertical, or diagonal row is the winner.
Enter the name of player 1: Asya
Enter the name of player 2: EkleZiast

  0   1   2
0   |   |  
 ---|---|---
1   |   |  
 ---|---|---
2   |   |  

Alice, enter row and column (separated by space) for your move: 0 0

  0   1   2
0  X |   |  
 ---|---|---
1   |   |  
 ---|---|---
2   |   |  

Bob, enter row and column (separated by space) for your move: 1 1

  0   1   2
0  X |   |  
 ---|---|---
1   | O |  
 ---|---|---
2   |   |  

Alice, enter row and column (separated by space) for your move: 0 1

  0   1   2
0  X | X |  
 ---|---|---
1   | O |  
 ---|---|---
2   |   |  

Bob, enter row and column (separated by space) for your move: 2 2

  0   1   2
0  X | X |  
 ---|---|---
1   | O |  
 ---|---|---
2   |   | O

Alice, enter row and column (separated by space) for your move: 0 2

  0   1   2
0  X | X | X
 ---|---|---
1   | O |  
 ---|---|---
2   |   | O

CONGRATULATIONS Asya, YOU WIN!
Press 1 to play again, 0 to exit: 0
THANK YOU FOR PLAYING TIC-TAC-TOE

Credits by EkleZiast
```

## Credits 🌟
Developed by EkleZiast.

Enjoy playing Tic-Tac-Toe! 🎉

[GitHub Repository](https://github.com/EkleZiastX/Tic-Tac-Toe)
