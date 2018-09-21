# Tic-Tac-Toe 3D

**DISCLAIMER:** I don't know if anyone else have thought of this before, but admittedly, I haven't looked. This was something which was brought about by a discussion with a couple of friends of mine, and draws inspiration for that as well as from the game [Ultimate Tic-Tac-Toe](https://mathwithbaddrawings.com/2013/06/16/ultimate-tic-tac-toe/).

## Setup

This game is played on the faces of a 3x3 cube. You will need:
- A disposable cube, or alternately, a cube you can stick stickers on or cover with a disposable and markable material
- A marker, or otherwise a way of marking points on the face of the cube (say, stickers) in at least two different ways
- The rules

## The rules

Player one starts the game by choosing a face to play on, and selects one of the 9 squares on the grid to put their mark on. The turn then passes to player two, who is to place their own mark on a free square, and so on and so forth. When a player selects a corner or edge piece, they simultaneously capture the adjacent squares on adjacent faces.

At the same time, the square selected by one player determines the face the next player plays on. If the square is an edge or corner piece, the opponent needs to place their next mark on an adjacent face. If the center square is selected, the opponent plays on the same face.

**TODO:** Pictures of the possible kinds of play

### Playing on a completed face

If you send your opponent to play on a face which has no legal moves (in other words, a full face), they are free to play on whichever face they wish.

### End condition

**WINNING:** If a player wins on one face, they win the game.

**DRAWS:** If all squares on all faces have been filled, the game is a draw.

## The vision

This would be REALLY COOL to have (and not too difficult to make) as a 3x3 cube where each square acts as a push button, captured squares light up in the player's color, and which has a microcontroller in the middle that keeps track of the game state. If no one else is gonna run with this concept, I will! Once I find the time, anyway.

I hope the code in this repo will be easy to adapt as the logic in the microcontroller, once that time comes.

## Usage

To run a CLI version of the game:

```
$ git clone https://github.com/winterweird/tictactoe-3d && cd tictactoe-3d
$ make
$ bin/main
```

**NOTE:** CLI version of the game not yet implemented.
