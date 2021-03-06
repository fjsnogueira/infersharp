/*
 * Copyright (c) 2013-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

typedef struct Point {
  int x;
  int y;
} Point;

int return_5() { return 5; }

void init_Point() { struct Point p = {1, return_5() + 3}; }

int point_coords_set_correctly(Point* p) {
  *p = (Point){4, 5};
  return 1 / (p->x - 4);
}

struct Employee {
  int ssn;
  float salary;
  struct date {
    int date;
    int month;
    int year;
  } doj;
} emp1;

int field_set_correctly() {
  struct Employee e = {12, 3000.50, 12, 12, 2010};
  return 1 / (e.ssn - 12);
}

struct dotdot {
  int a;
  int b;
};

struct dot {
  struct dotdot x;
  int y;
};
struct rect {
  struct dot origin;
  int z;
  int size;
};

typedef struct rect rect;

int implicit_expr_set_correctly() {
  rect imageDrawRect;
  imageDrawRect = (rect){.size = 5};
  return 1 / imageDrawRect.origin.x.a;
}
