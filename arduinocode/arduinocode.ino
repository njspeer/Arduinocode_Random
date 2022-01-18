/*
/home/nathan/Documents/Arduino/Blink_100ms/.vscode/arduino.json

You can monitor the output on your virtual serial port ttyACM0

/dev/ttyACM0

Tools/Serial Monitor in the Arduino IDE
or tail -f /dev/ttyACM0 in the Linux terminal


*/

// the setup function runs once when you press reset or power the board
void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // Serial.begin(9600);
  // Serial.begin(19200);
  // Serial.begin(38400);
  // Serial.begin(57600);
  Serial.begin(115200);
  randomSeed(analogRead(0));
}

// the loop function runs over and over again forever
// int dt = 100;                   /* 10 Hz */
// int dt = 10;                    /* 100 Hz */
int dt = 1;                        /* 1000 Hz */
int i  = 0;
void loop() 
{
  // delay(dt);                            // wait for dt ms */
  if(i % 2 == 0)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }

  Serial.print(i);             /* data */
  Serial.print(',');           /* data */
  Serial.print(millis());      /* dt in millisec since prgm started */
  Serial.print(',');           /* data */
  Serial.print(random());      /* data */
  Serial.print(',');           /* data */
  Serial.print(random());      /* data */
  Serial.print('\n');          /* data */
  i++;                         /* increment i */ 
}
