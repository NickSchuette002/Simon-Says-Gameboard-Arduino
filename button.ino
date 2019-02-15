/*
  Blink
  Turns a random LED on for one second, then that same LED off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led [] = {10, 11, 12, 13};
int switches [] = {6, 7, 8, 9};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the array of digital pins as outputs.
  pinMode(led[0], OUTPUT);   
  pinMode(led[1], OUTPUT); 
  pinMode(led[2], OUTPUT); 
  pinMode(led[3], OUTPUT); 
  
  //initialize the array of switches as inputs
  pinMode(switches[0], INPUT);
  pinMode(switches[1], INPUT);
  pinMode(switches[2], INPUT);
  pinMode(switches[3], INPUT);
}

// returns a random integer between 0 and 3
int randomizer() {
  rand() % 4;
}

// the loop routine runs over and over again forever:
void loop() {
//  int r = randomizer();
//  digitalWrite(led[r], HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);               // wait for a second
//  digitalWrite(led[r], LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);               // wait for a second
  int stateX = digitalRead(6);
  digitalWrite(10, stateX);
}
