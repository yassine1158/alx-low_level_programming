#include "main.h"

/**
 * jack_bauer- print every minute of the day
*/

void jack_baur(void)
{
	int main, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (main = 0; main <= 59; main++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}

