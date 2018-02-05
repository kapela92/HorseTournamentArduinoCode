int fotoPin = 0;
boolean start = 0;   
int hounderth,second,minute =0;
 int fotoDane;     
 void setup(void) {
  Serial.begin(9600);  
  Serial.print(start,BIN);
}
void loop(void) {
  fotoDane = analogRead(fotoPin);  
  //Serial.print("Oswietlenie = ");
  //Serial.println(fotoDane);  
  //Serial.print("start= ");
  //Serial.println(start);
  //Serial.print("czas= ");
  //Serial.println(t);  
  if ( fotoDane < 200 ){
    if ( start==0 ){
      start = 1;
      Serial.print(start,BIN);
      delay(1000);
     }
     else{
      start = 0;
      Serial.print(start,BIN);
      delay(1000);
     }
    }
    /*if (start==1){    
       hounderth=hounderth+1;
       if (hounderth=100){
        second=second+1;
        hounderth=0;
        if(second==60){
          second=0;
          minute=minute+1;
        }
       }
    }*/
}

            
            
            
            
