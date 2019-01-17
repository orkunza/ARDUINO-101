/*
 
  Fotodirenç (LDR) uygulamsı
 
  Bir LED'in parlaklığını kontrol etmek için bir fotodirenç (ışık sensörü) kullanalım.
  
*/

int LDR_deger = 0;
int led = 9;
int parlaklik;


void setup()
{
  pinMode(led, OUTPUT);  
  pinMode(A0, INPUT); 
    
  Serial.begin(9600); // Seri monitörü 9600 de başlatır.
  
}

void loop()
{
  LDR_deger = analogRead(A0);  // Analog0'daki voltajı okur
  
  Serial.print("LDR_deger: ");    // Seri monitöre değerin adını yazar
  Serial.print(LDR_deger);       // Seri monitöre değeri yazar
  Serial.println("");            // "println" Seri monitörde alt satıra geçer


  parlaklik = map(LDR_deger, 0, 1023, 0, 255);  
  // "LDR_deger"i 0 - 1023 aralığından 0 - 255 aralığına ölçeklendirir.


  analogWrite(led, parlaklik);   // giriş seviyesine göre led parlaklığını pine yazar.       
                                          
  Serial.print("Parlaklik: ");    // Seri monitöre değerin adını yazar
  Serial.print(parlaklik);       // Seri monitöre değeri yazar
  Serial.println("");             // "println" Seri monitörde alt satıra geçer
  Serial.println("");

 
}



