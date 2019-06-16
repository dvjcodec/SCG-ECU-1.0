// Simple "blinking LED's" program to test outputs 
// Krzysztof Dymianiuk @ Seaside Customs Garage

int led = 9;    //inj1
int led2 = 8;   //inj2
int led3 = 5;   //inj3
int led4 = 2;   //inj4
int led5 = 12;  //inj5
int led6 = 27;  //inj6
int led7 = 6;   //hc1
int led8 = 7;   //hc2
int led9 = 10;  //idle
int led10 = 11; //boost
int led11 = 25; //inj8
int led12 = 24; //inj7
int led13 = 31; //ign3
int led14 = 32; //ign4
int led15 = 29; //ign1
int led16 = 30; //ign2
int led17 = 28; //ign5
int led18 = 14; //ign6
int led19 = 39; //ign7
int led20 = 22; //ign8



void setup() {               
// initialize the digital pin as an output.
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT); 
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led12, OUTPUT);
pinMode(led13, OUTPUT);
pinMode(led14, OUTPUT);
pinMode(led15, OUTPUT);
pinMode(led16, OUTPUT);
pinMode(led17, OUTPUT);
pinMode(led18, OUTPUT);
pinMode(led19, OUTPUT);
pinMode(led20, OUTPUT);
}

void loop() 
{digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(50);                 // wait for a second
digitalWrite(led, LOW);     // turn the LED off by making the voltage LOW
delay(50);                 // wait for a second

{digitalWrite(led2, HIGH);
delay(50);
digitalWrite(led2, LOW);
delay(50);}

{digitalWrite(led3, HIGH);
delay(50);
digitalWrite(led3, LOW);
delay(50);}

{digitalWrite(led4, HIGH);
delay(50);
digitalWrite(led4, LOW);
delay(50);}

{digitalWrite(led5, HIGH);
delay(50);
digitalWrite(led5, LOW);
delay(50);}

{digitalWrite(led6, HIGH);
delay(50);
digitalWrite(led6, LOW);
delay(50);}

{digitalWrite(led7, HIGH);
delay(50);
digitalWrite(led7, LOW);
delay(50);}

{digitalWrite(led8, HIGH);
delay(50);
digitalWrite(led8, LOW);
delay(50);}

{digitalWrite(led9, HIGH);
delay(50);
digitalWrite(led9, LOW);
delay(50);}

{digitalWrite(led10, HIGH);
delay(50);
digitalWrite(led10, LOW);
delay(50);}

{digitalWrite(led11, HIGH);
delay(50);
digitalWrite(led11, LOW);
delay(50);}

{digitalWrite(led12, HIGH);
delay(50);
digitalWrite(led12, LOW);
delay(50);}

{digitalWrite(led13, HIGH);
delay(50);
digitalWrite(led13, LOW);
delay(50);}

{digitalWrite(led14, HIGH);
delay(50);
digitalWrite(led14, LOW);
delay(50);}

{digitalWrite(led15, HIGH);
delay(50);
digitalWrite(led15, LOW);
delay(50);}

{digitalWrite(led16, HIGH);
delay(50);
digitalWrite(led16, LOW);
delay(50);}

{digitalWrite(led17, HIGH);
delay(50);
digitalWrite(led17, LOW);
delay(50);}

{digitalWrite(led18, HIGH);
delay(50);
digitalWrite(led18, LOW);
delay(50);}

{digitalWrite(led19, HIGH);
delay(50);
digitalWrite(led19, LOW);
delay(50);}

{digitalWrite(led20, HIGH);
delay(50);
digitalWrite(led20, LOW);
delay(50);}

}
