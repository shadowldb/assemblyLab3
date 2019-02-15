//
// In-line Intel Assembly Language Program
// by Mohamed Bachir B00222753
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
// Part A adds 33333h to 88888h and subtracts 6666h using 32 bit registers 
//and immediate addressings. 

unsigned int numb1A = 0x33333;
unsigned int numb2A = 0x88888;
unsigned int num3A = 0x6666;
unsigned int resultA;        

// The manually calculated answer for Part A is: B5555h

// your properly formatted assembly language data here

    __asm {
//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |

        mov eax, numb1A         ;  move numb1A into eax
        add eax, numb2A         ;  add to eax numb2A
        sub eax, num3A          ;  sub to eax 
        mov resultA, eax        ;  save eas to resultA
        nop                     ; no op for Part A break point
    }

// Part B ...

// The manually calculated answer for Part B is:

// your properly formatted assembly language data here

unsigned short int num1B = 0x333;
unsigned short int num2B = 0x888;
unsigned short int num3B = 0x66;
unsigned short int resultB;

    __asm {
//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |

        mov ex, num1B           ; move numb1A into eax
        add ex, num2B           ; add to eax numb2A
        sub ex, num3B           ; sub to eax 
        mov resultB, ex         ; save eas to resultA
        nop                     ; no op for Part B break point
    }

// Part C ...

// The manually calculated answer for Part C is:

// your properly formatted assembly language data here

unsigned short int num1C = 0x333;
unsigned short int num2C = 0x888;
unsigned short int num3C = 0x66;
unsigned short int resultC;
    __asm {
//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |

        mov ex, num1C           ; move num1C into eax
        add ex, num2C           ; add to eax num2C
        sub ex, num3C           ; sub to eax 
        mov resultC, ex         ; save eas to resultC
        nop                     ; no op for Part C break point    
    }

// Part D ...

// The manually calculated answer for Part D is:

// your properly formatted assembly language data here
unsigned char num1D = 0x33;
unsigned char num2D = 0x88;
unsigned char num3D = 0x6;
unsigned char resultC;

    __asm {

//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |

        mov al, num1D           ; move num1C into eax
        add al, num2D           ; add to eax num2C
        sub al, num3D           ; sub to eax 
        mov resultC, al         ; save eas to resultC
        nop                     ; no op for Part D break point
    }

    return(0);
}