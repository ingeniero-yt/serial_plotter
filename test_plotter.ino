/*
 *      -----TEST PLOTTER-----
 * 
 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 * 
 * La distribución y/o modificación del código es totalmente libre.
 */
 
void setup() {
  delay(3000);
  Serial.begin(115200);
  delay(3000);

  Serial.println("Serie1 Serie2");
}

void loop() {

  Serial.print(14);
  Serial.print(" ");
  Serial.println(25);  
  
  delay(100);
}
