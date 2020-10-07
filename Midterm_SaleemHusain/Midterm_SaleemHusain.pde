import processing.pdf.*;

import processing.sound.*;
Background B;
Text T;
Rect R;
SoundFile file;
void setup() {
  file = new SoundFile(this, "2pac feat Dr.Dre - California Love HD.mp3");
  file.play();
  
  size (1000,1000);
  background (0);
  B = new Background ();
  T = new Text ();
  R = new Rect ();
  T.Words();
}

  
void draw (){
 
  
  if (mousePressed) {
  B.lines();
  R.rectangle();
   }
}
