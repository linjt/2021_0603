/*
  Melody
 */
#define NOTE_C3  131
#define NOTE_SC3 139
#define NOTE_D3  147
#define NO
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_sg3 208
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

// notes in the melody:
int melody[] = {
  NOTE_C3, NOTE_D3, NOTE_E3, NOTE_C3, NOTE_C3, NOTE_D3, NOTE_E3, NOTE_C3
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4
};


int ledPin[]={2,3,4,5,6,7,8,9};
int ledState = 0;

void setup() {
  // iterate over the notes of the melody:
  for(byte i=2;i<=9;i++)
  pinMode(ledPin[i], OUTPUT);
}

void loop() {
  // no need to repeat the melody.
    // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(10, melody[thisNote], noteDuration);

    if(melody[thisNote] == NOTE_C3){
      digitalWrite(ledPin[0],HIGH);
      ledState=ledPin[0];}
    else if(melody[thisNote] == NOTE_D3){
      digitalWrite(ledPin[1],HIGH);
      ledState=ledPin[1];}
    else if(melody[thisNote] == NOTE_E3){
      digitalWrite(ledPin[2],HIGH);
      ledState=ledPin[2];}
    else if(melody[thisNote] == NOTE_F3){
      digitalWrite(ledPin[3],HIGH);
      ledState=ledPin[3];}
    else if(melody[thisNote] == NOTE_G3){
      digitalWrite(ledPin[4],HIGH);
      ledState=ledPin[4];}
    else if(melody[thisNote] == NOTE_A3){
      digitalWrite(ledPin[5],HIGH);
      ledState=ledPin[5];}
    else if(melody[thisNote] == NOTE_B3){
      digitalWrite(ledPin[6],HIGH);
      ledState=ledPin[6];}
    else if(melody[thisNote] == NOTE_C4){
      digitalWrite(ledPin[7],HIGH);
      ledState=ledPin[7];}
    
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(10);
    digitalWrite(ledState,LOW);
  }
  delay(225);
}