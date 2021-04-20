//Déclaration des Pin
const int enPin = 3;
const int pwnPin = 6;
const int potPin = A0;


int potValue = 0;
int pwnValue = 0;

void setup(){
	//Définition des Pin
	pinMode(enPin, OUTPUT);
	pinMode(pwnPin, OUTPUT);
	digitalWrite(enPin, HIGH);
}

void loop() {
	// Transformation de la valeur du poptetiomètre en signal PWM
	potValue = analogRead(potPin);
	pwnValue = map(potValue, 0, 1023, 0, 255);
	analogWrite(pwnPin, pwnValue);
}
