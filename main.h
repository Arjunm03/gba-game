#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include "images/start.h"
#include "images/win.h"
#include "images/sprite.h"
#include "images/end.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

struct pos {
    int row;
    int col;
};

#endif
