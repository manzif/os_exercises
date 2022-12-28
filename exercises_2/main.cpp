//  The pins of LEDs on Arduino UNO
int LedRED =1;
int LedBLUE =2; 
int LedYELLOW =3;
int LedGREEN =4;

// The pins Switch on Arduino UNO
int S1=5;
int S2=6;
int readswitch=0;
int statuslast=0;  

void setup() {
  // Setting Inputs and Outputs pins 
  pinMode(LedRED, OUTPUT);
  pinMode(LedBLUE, OUTPUT);
  pinMode(LedYELLOW, OUTPUT);
  pinMode(LedGREEN, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  // start all LEDs OFF
  digitalWrite(LedRED, LOW);
  digitalWrite(LedBLUE, LOW);
  digitalWrite(LedYELLOW, LOW);
  digitalWrite(LedGREEN, LOW);
  delay (3000);
}

void loop() {

  readswitch=digitalRead(S1);

  if (readswitch != statuslast) {
    if (readswitch == LOW) {
    } else {
      digitalWrite(LedYELLOW, HIGH);  
      digitalWrite(LedGREEN, LOW);
      delay(1000);
      digitalWrite(LedYELLOW, LOW);          
    }
  }
  if(readswitch==0) { 
    digitalWrite(LedRED, LOW);
    digitalWrite(LedGREEN, LOW);   
    digitalWrite(LedBLUE, HIGH);
  } else {
    digitalWrite(LedBLUE, LOW);
    digitalWrite(LedRED, HIGH);
    digitalWrite(LedGREEN, HIGH);
    delay(500); 
    digitalWrite(LedRED, LOW);
    digitalWrite(LedGREEN, LOW);
    delay(500);
  }
  statuslast = readswitch;
}
