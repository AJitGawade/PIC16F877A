/*
 * File:   newmain.c
 * Author: ajit1
 *
 * Created on 28 November, 2018, 11:47 AM
 */


#include <xc.h>
#include"config.h"
void main(void) {
    TRISB0=0;
    TRISB1=0;
    TRISB2=0;
    while(1)
    {
        //flash led1
        RB0=1;
        __delay_ms(1000);
        RB0=0;
        __delay_ms(1000);
        //flash led2
        RB1=1;
        __delay_ms(1000);
        RB1=0;
        __delay_ms(1000);
        //flash led3
        RB2=1;
        __delay_ms(1000);
        RB2=0;
        __delay_ms(1000);
    }
    return;
}
