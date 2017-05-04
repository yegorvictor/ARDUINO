int ir_sensor0 = 4;
int ir_sensor1 = 5;
void setup()
{
Serial.begin(9600);
}
void loop()
{
int lectura, cm;
lectura = analogRead(ir_sensor0);
Serial.print("Izquierda:");
Serial.println(lectura);
cm = pow(3027.4 / lectura, 1.2134);
Serial.print("Sensor Izquierda: ");
Serial.println(cm);
delay(2000);
lectura = analogRead(ir_sensor1);
Serial.print("Derecha:");
Serial.println(lectura);
cm = pow(3027.4 / lectura, 1.2134);
Serial.print("Sensor Derecha: ");
Serial.println(cm); // lectura del sensor 1
delay(2000);
}

