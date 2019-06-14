#line 1 "E:/internship/day3pic3.c"
void main()
{
 int b=0;
 int b2=0;
 int lb=0;
 int a=0;
 int lb2=0;
 TRISD.F0=1;
 TRISB = 0;
 TRISD.F1=1;
 Lcd_Init(&PORTB);
 Lcd_Cmd(Lcd_CLEAR);
 Lcd_Cmd(Lcd_CURSOR_OFF);

 while(1)
 {
 char c=48+a;
 b = PORTD.F0;
 b2 = PORTD.F1;
 if (b != lb)
 {
 if (b == 1)
 {
 a++;
 }
 else
 {
 }
 Delay_ms(50);
 }
 lb = b;
 if (b2 != lb2)
 {
 if (b2 == 1)
 {
 a--;
 } else
 {
 }
 Delay_ms(50);
 }
 lb2 = b2;
 if(a<10)
 Lcd_Chr(1,1,a+0x30);
 else
 {
 Lcd_Chr(1,1,(a/10)+0x30);
 Lcd_Chr(1,2,(a%10)+0x30);
 }

 Delay_ms(150);
 }
 }
