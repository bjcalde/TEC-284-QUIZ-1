int RED = digitalRead(7);
int GREEN = digitalRead(6);
int BLUE = digitalRead(5);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Enabled Serial Connection
  // Using pin 7(R), 6(G) and 5(B) for the buttons. When each button is pressed, the corresponding color will be turned on.
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  //
  int RED = digitalRead(7);
  int GREEN = digitalRead(6);
  int BLUE = digitalRead(5);
  whatColor(RED, GREEN, BLUE);
  delay(750);
}
// This function will read what is being input, and will print out if the light is on depending on which button is being pressed.
void whatColor(int readRED, int readGREEN, int readBLUE) {
  if (readRED == LOW) {
    Serial.println("RED ON");
  }
  if (readGREEN == LOW) {
    Serial.println("GREEN ON");
  }
  if (readBLUE == LOW) {
    Serial.println("BLUE ON");
  }
}
