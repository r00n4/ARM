lcd.setCursor(0,1);
lcd.print(N);

if (N>0) {
unsigned long T = millis();
while (digitalRead(KEY_UP)+digitalRead(KEY_S)+digitalRead(KEY_DOWN) < 3) delay(10);
// проверка на долгое, больше 3 сек, нажатие
if (millis()-T > 3000) N += 8;
}

lcd.setCursor(3,1);
lcd.print(N);
=?UTF-8?B?0JXQu9C10L3QsCDQktC70LDQtNC40LzQuNGA0L7QstC90LA=?= <lena_fommina@mail.ru>
=?UTF-8 ?B? 0 JXQu 9 C 10 L 3 QsCDQktC 70 LDQtNC 40 LzQuNGA 0 L 7 QstC 90 LA=?= <lena_fommina@mail.ru>
8 0 9 10 3  70 40 0 7 90
192.168.000.000
809.103.704.007.90