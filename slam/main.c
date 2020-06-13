#include <stdio.h>

// Test case:
// - Roomba robot is in a perfect square
// - It has a radar that tells it the distance between the roomba
// and the object in front of it.
// - As it moves around, it gets distance data.
// - The distance data is noisy.
// - At the end of the test, the robot should know that it is inside
// of a square


struct Point {
  float x;
  float y;
};

struct Line {
  struct Point begin;
  struct Point end;
};

// [wall] -> [wall] -> [wall]
struct Node {
   struct Line wall;
   struct Node* next;
};

float get_distance() {
   // - Make sure there is some noise to the distance received
   return -1.0;
}

// rotate_direction:
// -1 == left
// 1 == right
// orientation:
// Line that we rotate
float turn(int rotate_direction, struct Line* orientation) {
   // Rotate the line
   // - Make sure there is some noise to the amount rotated
}

// direction:
// -1 == backward
// 1 == forward
float move(int direction, struct Point* position) {
   // Move the position
   // - Make sure there is some noise to the amount moved
   // - Make sure the robot does not go through walls
}

int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");

   struct Line real_environment[4];
   // 0.0, 1.0       1.0, 1.0
   //
   //
   // 0.0, 0.0 ----- 1.0, 0.0
   real_environment[0] = (struct Line){
     {0.0, 0.0},
     {1.0, 0.0},
   };
   real_environment[1] = (struct Line){
     {1.0, 0.0},
     {1.0, 1.0},
   };
   real_environment[2] = (struct Line){
     {1.0, 1.0},
     {0.0, 1.0},
   };
   // Left wall
   real_environment[3] = (struct Line){
     {0.0, 1.0},
     {0.0, 0.0},
   };

   // In the middle of the room
   struct Point real_pos = (struct Point){0.5, 0.5};
   struct Line real_orientation = (struct Line){
      // Looking at top right corner
      {0.5, 0.5},
      {1.0, 1.0}
   }

   struct Point approx_pos = (struct Point){0.0, 0.0};
   struct Line approx_orientation = (struct Line){
      {0.0, 0.0},
      {1.0, 0.0},
   };
   struct Node* approx_walls = NULL;

   return 0;
}
