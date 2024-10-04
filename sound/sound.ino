
// Pin connected to the speaker or buzzer
int speakerPin = 9; // Change this to any PWM-capable pin on your Arduino

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  // Play the melody for approximately 4 seconds
  playMelody();
  
  // Wait before playing again
  delay(1000); // Adjust this delay as needed
}

void playMelody() {
  // Define the frequencies for a simple melody (adjust as desired)
  // int melody[] = {3200, 4000, 330, 349, 392, 440, 494, 523}; // C4, D4, E4, F4, G4, A4, B4, C5
  // int noteDurations[] = {400, 400, 400, 400, 400, 400, 400, 400}; // Duration of each note in milliseconds (4 seconds total)
  int melody[]={1319,1175,740,831,1109,988,587,659,988,880,554,659,880};
  int noteDurations[]={133,133,267,267,133,133,267,267,133,133,267,267,533};
  // Play each note in the melody
  for (int i = 0; i < 8; i++) {
    int noteFrequency = melody[i];
    int noteDuration = noteDurations[i];
    
    // Play the note
    tone(speakerPin, noteFrequency, noteDuration);
    
    // Delay between notes (slight pause)
    delay(noteDuration + 200); // Adjust this delay for note separation
}
  
  // Stop playing
  noTone(speakerPin);
}

