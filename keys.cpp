#include <termios.h>

int getch()
{
	static struct termios oldt, newt;
  tcgetattr( STDIN_FILENO, &oldt);           // save old settings
  newt = oldt;
  newt.c_lflag &= ~(ICANON);                 // disable buffering
  newt.c_cc[ VMIN ] = 0;
  newt.c_cc[ VTIME ] = 0;
  tcsetattr( STDIN_FILENO, TCSANOW, &newt);  // apply new settings

  int c = getchar();  // read character (non-blocking)

  tcsetattr( STDIN_FILENO, TCSANOW, &oldt);  // restore old settings

  return c;
}

int main(int argc, char **argv)
{

  int c = getch();   // call your non-blocking input function
  
		if ( c == 'a' )
		{
      // Do something
    }

}
