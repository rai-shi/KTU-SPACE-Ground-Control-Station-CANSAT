int Team_ID = 2102;
int Packet_Cnt, Altitude, gps_sat;
int tilt_x, tilt_y, rot_z;
float Speed, Voltage, Temperature, Pressure, gps_alti;
float gps_lati = 40.992352572579115;
float gps_longi = 39.774423249029496;
String Mission_Time = "14:53:02";
char Mode = 'F';
char HS_Dply = 'P';
char PC_Dply = 'C';
String cmd_Echo = "CX,ON";
String State = "ASCENT";
String gps_Time = "12:35:24";

String reading;

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  Gelen();
  Gonder();
  delay(1000); //Paket delay
}

void Gelen()

{
  if (Serial.available() != 0) 
  {
    reading = Serial.readString();
    cmd_Echo = reading;
  }
  else
  {
    cmd_Echo = "CX,ON";
  }
}


void Gonder() {
  Altitude = random(1, 750);
  Speed = random(1, 30);
  Temperature = random(10, 50);
  Voltage = random(8, 13);
  Pressure = random(950, 1100);
  gps_alti = random(1, 750);
  tilt_x = random(0, 180);
  tilt_y = random(0, 180);
  rot_z = random(0, 180);


  Serial.print(Team_ID); Serial.print(','); Serial.print(Mission_Time); Serial.print(',');
  Serial.print(Packet_Cnt); Serial.print(','); Serial.print(Mode); Serial.print(',');
  Serial.print(State); Serial.print(','); Serial.print(Altitude); Serial.print(',');
  Serial.print(Speed); Serial.print(','); Serial.print(HS_Dply); Serial.print(',');

  Serial.print(PC_Dply); Serial.print(','); Serial.print(Temperature); Serial.print(',');
  Serial.print(Pressure); Serial.print(','); Serial.print(Voltage); Serial.print(',');
  Serial.print(gps_Time); Serial.print(','); Serial.print(gps_alti); Serial.print(',');

  Serial.print(gps_lati); Serial.print(','); Serial.print(gps_longi); Serial.print(',');
  Serial.print(gps_sat); Serial.print(','); Serial.print(tilt_x); Serial.print(',');
  Serial.print(tilt_y); Serial.print(','); Serial.print(rot_z); Serial.print(',');
  Serial.print(cmd_Echo);

  Serial.println(); //new line
  Packet_Cnt++;
}
