/**
 * Code to make the LED switchboard work
 */
// constants won't change. They're used here to set pin numbers:
const int buttonPin [] = {4, 5, 6, 7};     // the number of the pushbutton pin
const int ledPin [] =  {10, 11, 12, 13};      // the number of the LED pin

// variables will change:
int buttonState [] = {0, 0, 0, 0};         // variable for reading the pushbutton status

void setup() {
  // initialize the array of digital pins as outputs.
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  
  //initialize the array of button pins as inputs
  pinMode(buttonPin[0], INPUT_PULLUP);
  pinMode(buttonPin[1], INPUT_PULLUP);
  pinMode(buttonPin[2], INPUT_PULLUP);
  pinMode(buttonPin[3], INPUT_PULLUP);

  Serial.begin(9600);

  randomSeed(12);
}

// returns a random integer between 0 and 3
int randomizer() {
  return random(4);
}

void loop() {
//  // read the state of the pushbutton valueS:
//  buttonState[0]  = digitalRead(buttonPin[0]);
//  buttonState[1] = digitalRead(buttonPin[1]);
//  buttonState[3] = digitalRead(buttonPin[2]);
//  buttonState[4] = digitalRead(buttonPin[3]);

  int r = randomizer();
  Serial.println(r);
  digitalWrite(ledPin[r], HIGH);
  while(digitalRead(buttonPin[r])) {
    
  }
  digitalWrite(ledPin[r], LOW);
  while(!digitalRead(buttonPin[r])) {
    
  }
  //Serial.println(r);
  
  
  
//  int lastTime = millis();
//  int currentTime = millis();
//
//  while(currentTime < lastTime + 5000 || buttonState || buttonState2 || buttonState3 || buttonState4) {
//    
//  digitalWrite(ledPin[r], HIGH);
//    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
//    if (buttonState == HIGH) {
//      // turn LED off:
//      digitalWrite(ledPin[r], LOW);
//    } else {
//      // turn LED on:
//      digitalWrite(ledPin[r], HIGH);
//    }    
//    currentTime = millis();
//  }


}
