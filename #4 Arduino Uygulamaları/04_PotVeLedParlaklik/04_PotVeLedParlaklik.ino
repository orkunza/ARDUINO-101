/*
  Işığın parlaklığı

  Bu örnek analogWrite() işlevini kullanarak 9 numaralı pin üzerindeki
  bir LED'in potansiyometre ile nasıl parlaklığının değişeceğini gösterir.

  AnalogWrite () işlevi PWM kullanır, bu nedenle kullandığınız pini değiştirmek istiyorsanız, 
  başka bir PWM özellikli pin kullandığınızdan emin olun. Arduino'nun çoğunda,
  PWM pimleri ~3, ~5, ~6, ~9, ~10 ve ~11 gibi bir "~" işaretiyle tanımlanır.
 
 */

int led = 9;           // LED'in bağlı olduğu PWM pini, led ifadesi pin 9'u temsil ediyor.
int potdeger = 0;      // Potansiyometreden okunan değeri kaydetmek için
int parlaklık = 0;     // LED parlaklığı

void setup() {
 
  pinMode(led, OUTPUT);  // pin 9'u çıkış olarak ayarlayalım
  pinMode(pot, INPUT);  // pin A0'ı giriş olarak ayarlayalım
  
}

void loop() {
  
  potdeger = analogRead(A0);   // Analog 0 numaralı pinden pot değerini "potdeger"e yazar:
  
  // A0 pini 0-1023 aralığında okur. Arduinonun 10 bit ADC'si mevcut olduğundan.
  // Arduino PWN pini ise 8 bit DAC'si olduğundan 0-255 arası değer yazabilir.
  // Okunan değer ile yazılacak değer arasındaki farkı map() komutu ile 
  // 10 biti 8bite sıkıştıracağız.Bu değeride parlaklık değişkenine atayalım.
  
  parkalık = map(potdeger,0,1023,0,255);
  //map(değişecek olan değişken,değişenin ilk değeri,son değeri,istenen ilk değer,son değer);
  
  analogWrite(led, parlaklık);  // 9 numaralı pinin parlaklığını ayarlar:

}
