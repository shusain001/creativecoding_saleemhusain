class Background {
  void lines(){
                  //rectanglecolorchange
                  for (int y=0; y<height; y=y+100){
                  for (int x=0; x<width; x=x+100){ 
                  strokeWeight(4);
                  stroke (random(0,255));
                  fill (random(0,255),(random(0,mouseX)),(random(0,mouseY)));
                  rect (x,y,100,100);
                  //linetorigin
                  strokeWeight(1);
                  stroke (0);
                  line(mouseX, y, x+100,mouseY);
}
}
}
}
