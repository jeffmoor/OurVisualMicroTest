// UNO Test
#define LED	13

int x = 0;

void setup()
{
	Serial.begin(9600);
	Serial.println("Welcome to Visual Micro demo.");
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LOW);
}

void loop()
{
	digitalWrite(LED, LOW);
	delay(2500);
	Serial.print("x = ");
	Serial.println(x);
	digitalWrite(LED, HIGH);
	delay(2000);

	x++;
	if (x > 9) {
		x = 0;
	}
}
