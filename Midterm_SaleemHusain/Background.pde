class Background {
  void lines(){
                  //rectanglecolorchange
                  for (int y=0; y<height; y=y+100){
                  for (int x=0; x<width; x=x+100){ 
                  stroke (255);
                  fill (random(mouseX,mouseY));
                  rect (x,y,100,100);
                  //linetorigin
                  stroke (0);
                  line(mouseX, y, x+100,mouseY);
}
}
}
}
