#include "lib/video.c"
#include "lib/io.c"
#include "lib/kbd.c"

int main( void )
{
    int index,i,stringSize=0;
    char temp;
    char input[160];
    int lineNr= 1;
//  putc('L');

//  puts("LIDGW");
//  puts("GOOBY PLS");
//  clrscr();
/*
  for(;;){
  input = getchar();
  switch(input){
   case '\n':
      putc('r');
      break;

   default:
      putc(input);
      break;
  }
}
*/
  for(;;){
  temp = getchar();
  switch(temp){

    case 'a':
      hello();
      break;

    case '\n':
    lineNr++;

    if(lineNr>24) {
     break;
    }
    
    else{
        setNewLine();
        puts("you typed: ");
        puts(input);
        setNewLine();
        for(i=0;i<stringSize;i++){
        input[i] = ' ';
        }
        stringSize = 0;
        break;
    }
      break;




    case 'd':
      clrscr();
      for(i=0;i<stringSize;i++){
      input[i] = ' ';
      }
      stringSize = 0;
      lineNr = 1;
      break;
    default:
      //putc(temp);

      input[stringSize] = temp;
      putc(input[stringSize]);
      stringSize++;
  }
  }
}
