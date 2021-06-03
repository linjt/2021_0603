/*
  Melody
 */
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262


int buttonPin[]={2,3,4,5,6,7,8,9};

void setup() {
  for(byte i=2;i<=9;i++){
    pinMode(i,INPUT_PULLUP);
//    digitalWrite(buttonPin[i],HIGH);
  }
  pinMode(10,OUTPUT);
}

void loop() {
  // no need to repeat the melody.
    // iterate over the notes of the melody:

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000;
//	for(byte i=0;i<=7;i++)
//  	int buttonPin[i]=(i+2);
 
  
  
    if(digitalRead(buttonPin[0]) == LOW){
      Serial.println("u");
      tone(10, NOTE_C3, noteDuration);
      }
    else if(digitalRead(buttonPin[1]) == LOW){
      tone(10, NOTE_D3, noteDuration);
      }

    else if(digitalRead(buttonPin[2]) == LOW){
      tone(10, NOTE_E3, noteDuration);
      }
    else if(digitalRead(buttonPin[3]) == LOW){
      tone(10, NOTE_F3, noteDuration);
      }
    else if(digitalRead(buttonPin[4]) == LOW){
      tone(10, NOTE_G3, noteDuration);
      }
    else if(digitalRead(buttonPin[5]) == LOW){
      tone(10, NOTE_A3, noteDuration);
      }
    else if(digitalRead(buttonPin[6]) == LOW){
      tone(10, NOTE_B3, noteDuration);
      }
    else if(digitalRead(buttonPin[7]) == LOW){
      tone(10, NOTE_C4, noteDuration);
      }

    
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    //int pauseBetweenNotes = noteDuration * 1.3;
    //delay(pauseBetweenNotes);
    // stop the tone playing:
  delay(200);  
  noTone(10);
    //buttonState =0;
  
  
}