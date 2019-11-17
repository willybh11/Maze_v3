
#define x_pin A1
#define y_pin A2

bool grid[10][10][4] = { // true: connection | false: wall
  { // row 0
    {false, true, false, false}, // 0
    {false, true, false, true}, // 1
    {false, true, true, true},  // 2
    {false, true, false, true}, // 3
    {false, false, true, true}, // 4
    {false, true, false, false}, // 5
    {false, false, true, true}, // 6
    {false, true, false, false}, // 7
    {false, false, true, true}, // 8
    {false, false, true, false} // 9
  },
  { // row 1
    {false, false, true, false}, // 0
    {false, true, true, false}, // 1
    {true, true, false, true},  // 2
    {false, false, true, true}, // 3
    {true, true, true, false},  // 4
    {false, true, false, true}, // 5
    {true, true, false, true},  // 6
    {false, true, true, true},  // 7
    {true, true, false, true},  // 8
    {true, false, false, true}  // 9
  },
  { // row 2
    {true, false, true, false}, // 0
    {true, true, true, false},  // 1
    {false, false, true, true}, // 2
    {true, false, false, false}, // 3
    {true, true, true, false},  // 4
    {false, false, false, true}, // 5
    {false, false, true, false}, // 6
    {true, false, true, false}, // 7
    {false, true, true, false}, // 8
    {false, false, false, true} // 9
  },
  { // row 3
    {true, true, true, false},  // 0
    {true, false, false, true}, // 1
    {true, true, false, false}, // 2
    {false, false, true, true}, // 3
    {true, false, true, false}, // 4
    {false, true, false, false}, // 5
    {true, false, true, true},  // 6
    {true, false, true, false}, // 7
    {true, true, false, false}, // 8
    {false, false, true, true}  // 9
  },
  { // row 4
    {true, false, false, false}, // 0
    {false, true, true, false}, // 1
    {false, true, true, true},  // 2
    {true, false, false, true}, // 3
    {true, true, false, false}, // 4
    {false, false, true, true}, // 5
    {true, true, true, false},  // 6
    {true, true, false, true},  // 7
    {false, false, true, true}, // 8
    {true, false, true, false}  // 9
  },
  { // row 5
    {false, true, true, false}, // 0
    {true, false, true, true},  // 1
    {true, true, false, false}, // 2
    {false, true, true, true},  // 3
    {false, true, false, true}, // 4
    {true, false, true, true},  // 5
    {true, true, true, false},  // 6
    {false, false, true, true}, // 7
    {true, true, false, false}, // 8
    {true, false, true, true}   // 9
  },
  { // row 6
    {true, false, true, false}, // 0
    {true, false, false, false}, // 1
    {false, true, false, false}, // 2
    {true, false, false, true}, // 3
    {false, true, true, false}, // 4
    {true, false, false, true}, // 5
    {true, false, false, false}, // 6
    {true, false, true, false}, // 7
    {false, true, true, false}, // 8
    {true, false, false, true}  // 9
  },
  { // row 7
    {true, true, false, false}, // 0
    {false, true, true, true},  // 1
    {false, true, false, true}, // 2
    {false, false, false, true}, // 3
    {true, false, false, false}, // 4
    {false, true, true, false}, // 5
    {false, false, true, true}, // 6
    {true, false, false, false}, // 7
    {true, true, false, false}, // 8
    {false, false, true, true}  // 9
  },
  { // row 8
    {false, true, true, false}, // 0
    {true, false, false, true}, // 1
    {false, true, true, false}, // 2
    {false, true, false, true}, // 3
    {false, true, true, true},  // 4
    {true, false, true, true},  // 5
    {true, true, true, false},  // 6
    {false, true, false, true}, // 7
    {false, true, true, true},  // 8
    {true, false, false, true}, // 9
  },
  { // row 9
    {true, true, false, false}, // 0
    {false, true, false, true}, // 1
    {true, true, false, true},  // 2
    {false, false, false, true}, // 3
    {true, false, false, false}, // 4
    {true, false, false, false}, // 5
    {true, true, false, false}, // 6
    {false, false, false, true}, // 7
    {true, true, false, false}, // 8
    {false, false, false, true} // 9 FIN
  }
};

void setup() {

}

void loop() {
    
}

