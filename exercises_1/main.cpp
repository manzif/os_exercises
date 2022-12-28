// declaration of LEDs PINs
int LED1 = 1;
int LED2 = 2;
int LED3 = 3;
int LED4 = 4;

// declaration of the swuitches PINs
int SW1 = 5;
int SW2 = 6;

// declaration of the counter
int counter = 0; 

void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);

  digitalWrite (LED1,LOW);
  digitalWrite (LED2,LOW);
  digitalWrite (LED3,LOW);
  digitalWrite (LED4,LOW);

}
void loop() {

  if(digitalRead(SW1)==LOW) // detect if a button is LOW
    { 
      delay(10); // delay to eliminate bounce
      if(digitalRead(SW1)==LOW) // check if button SW1 is pressed
        {     
          while(digitalRead(SW1)==LOW); // Wait for key interface to low
          delay(10); // delay to eliminate the bounce
          while(digitalRead(SW1)==LOW); // Confirm button release
          counter = counter+1; // add the main functionality of the button

        }
    }

 if(digitalRead(SW2)==LOW) // detect if a button is LOW
  {   
    delay(10);  // delay to eliminate the bounce
    if(digitalRead(SW2)==LOW) // check if button SW1 is pressed
      {     
        while(digitalRead(SW2)==LOW); // Wait for key interface to low
        delay(10); // delay to eliminate the bounce
        while(digitalRead(SW2)==LOW); // Confirm button release
        counter = counter-1; // add the main functionality of the button
      }
  }

  if (counter>15 or counter<0){
    counter = 0;
  }
  displayNumber(counter);

}

void displayNumber(int number){
  if (number==0){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,LOW);
  }
  if (number==1){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,HIGH);
  }
  if (number==2){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,LOW);
  }
  if (number==3){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,HIGH);
  }
  if (number==4){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,LOW);
  }
  if (number==5){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,HIGH);
  }
  if (number==6){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,LOW);
  }
  if (number==7){
    digitalWrite (LED1,LOW);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,HIGH);
  }
  if (number==8){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,LOW);
  }
  if (number==9){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,HIGH);
  }
  if (number==10){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,LOW);
  }
  if (number==11){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,HIGH);
  }
  if (number==12){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,LOW);
  }
  if (number==13){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,HIGH);
  }
  if (number==14){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,LOW);
  }
  if (number==15){
    digitalWrite (LED1,HIGH);
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,HIGH);
    digitalWrite (LED4,HIGH);
  }

}
