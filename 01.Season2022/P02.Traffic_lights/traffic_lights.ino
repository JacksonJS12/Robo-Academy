//declare the leds
 
const int redLed = 10;
const int yellowLed = 9;
const int greenLed = 8;

//declare the button
const int btn = 3;

//setup
void setup(){
	pinMode(btn, INPUT);
  
	pinMode(redLed, OUTPUT);
	pinMode(yellowLed, OUTPUT);
	pinMode(greenLed, OUTPUT);
  
  Serial.begin(9600);
}
void loop(){
	int btnState = digitalRead(btn);
  	Serial.print(btnState);
  
  //if the is pressed
  if(btnState == HIGH){
	digitalWrite(redLed, LOW);
	digitalWrite(yellowLed, HIGH);
	digitalWrite(greenLed, LOW);
    delay(2000);
    
    digitalWrite(redLed, HIGH);
	digitalWrite(yellowLed, LOW);
	digitalWrite(greenLed, LOW);
    delay(5000);
  } 
  //if the btn is not pressed
  else{
  	digitalWrite(redLed, LOW);
	digitalWrite(yellowLed, LOW);
	digitalWrite(greenLed, HIGH);
  }
}
