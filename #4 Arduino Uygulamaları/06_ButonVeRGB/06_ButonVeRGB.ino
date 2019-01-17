/*
    RGB LED'in buton uygulaması!
*/
const int kırmızı = 9;
const int yesil = 10;
const int mavi = 11;

  // buton durumunu kaydetmek için değişkenler
int btnDeger1  ;
int btnDeger2  ;
int btnDeger3  ;

void setup()
{
  // Ledlerin bağlı olduğu pinlerin tanımı
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(mavi, OUTPUT);

  // Butonların bağlı olduğu pinlerin tanımı
  pinMode( 3 , INPUT);
  pinMode( 4 , INPUT);
  pinMode( 5 , INPUT);
}

void loop()
{
  // Butonların bağlı olduğu pinlerden durumu okuyup değişkenlere yazalım
  btnDeger1 = digitalRead(3);
  btnDeger2 = digitalRead(4); ;
  btnDeger3 = digitalRead(5);

  // Butonların değerlerini RGB LEDin pinlerine ilişkilendirelim.
  
  digitalWrite(kirmizi, btnDeger1);
  digitalWrite(yesil, btnDeger2);
  digitalWrite(mavi, btnDeger3);

  
}

