#include <iostream>

char* Convert(const char *pHexString)
{
  //size_t = 0;
  int i = 0;
  int strLength = 0;

  // get the length of string
  while(pHexString[i] != '\0')
  {
    strLength++;
    i++;
  }
  int BASE = 16;
  int basePosValue  = 1;
  int hexDecimalVal = 0;
  static int placeHolderPos = 0;
  static int decimalAtPos   = 0;

  for(int x=strLength-1; x >= 0; x--)
  {
    switch(pHexString[x])
    {
      case '0':
        hexDecimalVal = 0;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("placeHolderPos %i\n", placeHolderPos);
        break;

      case '1':
        hexDecimalVal = 1;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
          printf("basePosValue: %i\n", basePosValue);
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) 
        {
          basePosValue = 1;
          printf("placeholder position 0: base pos = %i\n", basePosValue);
        }
        decimalAtPos = basePosValue * hexDecimalVal;
        printf("decimal val %i\n", decimalAtPos);
        break;

      case '2':
        hexDecimalVal = 2;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '3':
        hexDecimalVal = 3;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '4':
        hexDecimalVal = 4;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '5':
        hexDecimalVal = 5;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '6':
        hexDecimalVal = 6;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '7':
        hexDecimalVal = 7;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '8':
        hexDecimalVal = 8;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case '9':
        hexDecimalVal = 9;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case 'a':
        hexDecimalVal = 10;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case 'b':
        hexDecimalVal = 11;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case 'c':
        hexDecimalVal = 12;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case 'd':
        hexDecimalVal = 13;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case 'e':
        hexDecimalVal = 14;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;

      case 'f':
        hexDecimalVal = 15;
        basePosValue = 1;
        for(int mult=0; mult < placeHolderPos; mult++)
        {
          basePosValue *= BASE;
        }
        // if this is position zero then base pos value is 1.
        if(placeHolderPos == 0) basePosValue = 1;
        decimalAtPos += basePosValue * hexDecimalVal;
        printf("%i\n", decimalAtPos);
        break;
    }
    placeHolderPos++;
    printf("placeHolderPos %i\n", placeHolderPos);
  }
  // return decimal conversion string
  printf("\n Decimal Conversion. %i", decimalAtPos);
  return 0;
}

int main() 
{
  char pHexString[] = "1111";
  Convert(pHexString);
  //std::cout << "Enter hex numnber to convert. \n";
}