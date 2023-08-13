#define echoPin 2
#define trigPin 3
const int BUZZ=13;
long duration ;
int distance ;

void setup()
{
	pinMode (BUZZ,OUTPUT);
	pinMode(trigPin,OUTPUT);
	pinMode(echoPin,INPUT);
	Serial.begin(9600);
	Serial.println("ULTRASONIC SENSOR HC-SR04 Test");
	Serial.println("with Arduino UNO R3");
}


void loop()
{
	digitalWrite(trigPin,LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin,HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin,LOW);
	duration=pulseIn(echoPin,HIGH);
	distance=duration * 0.034 / 2;
	Serial.print("DISTANCE: ");
	Serial.print(distance);
	Serial.println(" cm");
  
	//detecting the distance
	if (distance>=100)
	{
		digitalWrite(BUZZ,HIGH);
		delay(1000);
		digitalWrite(BUZZ,LOW);
		delay(1000);
 	}

	else if(distance>=50)
 	{
		digitalWrite(BUZZ,HIGH);
		delay(500);
		digitalWrite(BUZZ,LOW);
		delay(500);
 	}

	else if(distance<50)
 	{
		digitalWrite(BUZZ,HIGH);
 	}
}