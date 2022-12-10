int pinA = 13;
int pinB = 12;
int pinC = 11;
int pinD = 10;
int pinE = 9;
int pinF = 8;
int pinG = 7;

int btn = 2;
int btnState;

//common cathode

int time = 1000;

void setup(){
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);
	pinMode(pinC, OUTPUT);
	pinMode(pinD, OUTPUT);
	pinMode(pinE, OUTPUT);
	pinMode(pinF, OUTPUT);
	pinMode(pinG, OUTPUT);
  
	pinMode(btn, INPUT);
  
  Serial.begin(9600);
}

 int counter = 0;
void loop(){
  	btnState = digitalRead(btn);
  	Serial.println(btnState);
  
  if(counter == 9){
  	counter == 0;
  }
  
  if(btnState == 1){
  	counter++;
  }
  
  if(counter == 1){
  	 //1
  digitalWrite(pinA, 0);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
  }
  else if(counter == 2){
     //2
  	digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 0);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 1);
  }
  else if(counter == 3){
  //3
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 1);
  }
   else if(counter == 4){
  	 digitalWrite(pinA, 0);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  } else if(counter == 5){
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 0);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  } else if(counter == 6){
  //6
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 0);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  } else if(counter == 7){
   //7
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
  
  } else if(counter == 8){
   //8
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  } else if(counter == 9){
  //9
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  }
}

void CountFrom0to9(){
//0
	digitalWrite(pinA, 1);
  	digitalWrite(pinB, 1);
  	digitalWrite(pinC, 1);
  	digitalWrite(pinD, 1);
  	digitalWrite(pinE, 1);
  	digitalWrite(pinF, 1);
  	digitalWrite(pinG, 0);
  
  	delay(time);
  
  //1
  digitalWrite(pinA, 0);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
  
  	delay(time);
  
  //2
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 0);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 1);
  
  	delay(time);
  
  //3
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 1);
  
  	delay(time);
  
  //4
 digitalWrite(pinA, 0);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  	delay(time);
  
  //5
 digitalWrite(pinA, 1);
  digitalWrite(pinB, 0);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  	delay(time);
  
  //6
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 0);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  	delay(time);
  
  //7
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
  
  	delay(time);
  
  //8
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  	delay(time);
  
  
  //9
   digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  
  	delay(5000);
  
  	digitalWrite(pinA, 0);
  	digitalWrite(pinB, 0);
  	digitalWrite(pinC, 0);
  	digitalWrite(pinD, 0);
  	digitalWrite(pinE, 0);
  	digitalWrite(pinF, 0);
  	digitalWrite(pinG, 0);
}