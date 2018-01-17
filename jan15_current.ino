

int numRows = 30; 
int numCols = 2; 
int fs = 60;
int numLeds = 45;
int numRows2 = 11;
int numCols2 = 7;

int ledPins[30][2] = {{1, -1}, {2, -1}, {3, -1}, {4, -1}, {5, 6},
                      {7, 11}, {8, 12}, {9, 13}, {10, 14}, 
                      {15, -1}, {16, -1}, {17, -1}, {18, -1}, {19, -1}, 
                      {20, -1}, {21, -1}, {22, -1}, {23, -1}, 
                      {25, -1}, {26, 36}, {27, 35}, {28, 34}, {29, 33},
                      {30, 32}, {31, -1}, 
                      {37, 42}, {38, 43}, {39, 43}, {40, 44}, {41, 45}};

int ledPins2[11][7] = {{1, 25, 36, -1, -1, -1, -1},
                      {2, 26, -1, -1, -1, -1, -1},
                      {3, 27, 35, -1, -1, -1, -1}, 
                      {4, 28, 34, -1, -1, -1, -1}, 
                      {5, 29, 33, -1, -1, -1, -1},
                      {6, 7, 23, 22, 30, 31, 32}, 
                      {21, 11, 8, 37, 42, -1, -1},
                      {20, 12, 9, 38, 43, -1, -1},
                      {19, 13, 10, 39, 44, -1, -1},
                      {18, 14, 40, -1, -1, -1, -1}, 
                      {17, 16, 15, 41, 45, -1, -1}};


void setup() {
  // put your setup code here, to run once:
  for (int i = 1; i <= 45; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++){
      digitalWrite(ledPins[i][j], HIGH);
    }
    delay(fs/2);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++){
      digitalWrite(ledPins[i][j], HIGH);
    }
    delay(fs);
  }
  delay(3000);
  for (int i = 0; i < 3; i++){
    for (int j = 1; j <= numLeds; j++) {
      digitalWrite(j, LOW);  
    }
    delay(500);
    for (int j = 1; j <= numLeds; j++) {
      digitalWrite(j, HIGH);  
    }
    delay(500);
  }
  for (int i = 0; i < numRows2; i++){
    for (int j = 0; j < numCols2; j++){
      digitalWrite(ledPins2[i][j], LOW);
    }
    delay(fs);
  }
  for (int k = 0; k < 3; k++){
    for (int i = 0; i < numRows2; i++){
      for (int j = 0; j < numCols2; j++){
        digitalWrite(ledPins2[i][j], HIGH);
      }
      delay(fs);
      for (int j = 0; j < numCols2; j++){
        digitalWrite(ledPins2[i][j], LOW);
      }
    }
    for (int i = numRows2 - 1; i >= 0; i--){
      for (int j = 0; j < numCols2; j++){
        digitalWrite(ledPins2[i][j], HIGH);
      }
      delay(fs);
      for (int j = 0; j < numCols2; j++){
        digitalWrite(ledPins2[i][j], LOW);
      }
    }
  }
  /*
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++){
      digitalWrite(ledPins[i][j], LOW);
    }
    delay(fs);
  }
  /*
  for (int i = numRows - 1; i >= 0; i--) {
    for (int j = 0; j < numCols; j++){
      digitalWrite(ledPins[i][j], LOW);
    }
    delay(100);
  }
  
  for (int i = 1; i <= 45; i++) {
    if (random(0,9) > 4){
      digitalWrite(i, HIGH);
    } else {
      digitalWrite(i, LOW);
    }
  }
  */
  delay(100);
}
