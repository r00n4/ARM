# STM32
stm labs  
Milandr ic based USB mass storage device
  
  [Creating the project](https://microtechnics.ru/stm32-uchebnyj-kurs-keil-sozdanie-proekta/)
  
  https://bravikov.wordpress.com/2016/02/21/%D0%BD%D0%B0%D1%87%D0%B0%D0%BB%D0%BE-%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%8B-%D1%81-stm32-%D0%B2-keil-mdk-arm/
  

  
  [Habr Milandr](https://habr.com/ru/post/255323/)    
    
      
  [Mass storage host](https://forum.milandr.ru/viewtopic.php?f=22&t=3579)
  
  [Nice resources](https://forum.milandr.ru/viewtopic.php?f=14&t=327)  
    
  [Milandr BLOG](http://gimmor.blogspot.com/search?q=%D0%BC%D0%B8%D0%BB%D0%B0%D0%BD%D0%B4%D1%80)  
    
  USB ARM description:  
  [Local file](https://file:///C:/Keil_v5/Arm/Packs/Keil/MDK-Middleware/7.10.0/Doc/USB/html/_u_s_b__device.html)  
    
  FAT32 microSD:  
  [solve](http://forum.easyelectronics.ru/viewtopic.php?f=35&t=19787)  
    
  <***C***>   для **даунов** :  
  [lib.ru](http://lib.ru/CTOTOR/starterkit.txt)
  
#include <stdio.h>

int main () {

    int x= 5, y=7;
    float z;            // if float --> can't make an output with correct result
                        // if int --> it returns correct result
    z= x + y;
    printf("the result = %f\ n", z);
    printf("================================================\n");
    printf ("Characters: %c %c \n", 'a', 65);
    printf ("Decimals: %d %ld\n", 1977, 650000L);
    printf ("Preceding with blanks: %10d \n", 1977);
    printf ("Preceding with zeros: %010d \n", 1977);
    printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
    printf ("Width trick: %*d \n", 5, 10);
    printf ("%s \n", "A string");
    return 0;

}
