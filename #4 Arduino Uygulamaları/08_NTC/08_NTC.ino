/*
   NTC Sıcaklık Sensörü

  1 adet 10kΩ NTC
  1 adet 10kΩ direnç

*/

double sicaklik;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int deger;
  double sicaklik;

  deger = analogRead(A0);
  
  sicaklik = log(((10240000 / deger) - 10000));
  sicaklik = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * sicaklik * sicaklik )) * sicaklik );
  sicaklik = sicaklik - 273.15;
  
  Serial.println(sicaklik);
  delay(500);
}
