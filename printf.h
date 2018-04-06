#pragma once
#ifdef ARDUINO

int serial_putc(char c, FILE *)
{
	Serial.write(c);

	return c;
}

void printf_begin(void)
{
	fdevopen(&serial_putc, 0);
}

#else
#error This example is only for use on Arduino.
#endif // ARDUINO