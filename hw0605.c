#include<stdio.h>
#include<stdint.h>
#include"hw0605.h"
#include"test.h"
uint8_t player1[13];
uint8_t player2[13];
uint8_t player3[13];
uint8_t player4[13];
int main()
{
    printf( "Before:\n" );
    print_card( player1 );
    print_card( player2 );
    print_card( player3 );
    print_card( player4 );
    printf( "Type 01:\n" );
    sort_card( player1 , func01 );
    sort_card( player2 , func01 );
    sort_card( player3 , func01 );
    sort_card( player4 , func01 );
    print_card( player1 );
    print_card( player2 );
    print_card( player3 );
    print_card( player4 );
    printf( "Type 02:\n" );
    sort_card( player1 , func02 );
    sort_card( player2 , func02 );
    sort_card( player3 , func02 );
    sort_card( player4 , func02 );
    print_card( player1 );
    print_card( player2 );
    print_card( player3 );
    print_card( player4 );
    printf( "Type 03:\n" );
    sort_card( player1 , func03 );
    sort_card( player2 , func03 );
    sort_card( player3 , func03 );
    sort_card( player4 , func03 );
    print_card( player1 );
    print_card( player2 );
    print_card( player3 );
    print_card( player4 );
    return 0;
}

