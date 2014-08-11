#ifndef PUSHBUTTONS_H
#define	PUSHBUTTONS_H

#include <stdint.h>

// Exported API
typedef void (*PushButtonHandler)();

void PushButton_Init(PushButtonHandler handler);
void PushButton_EventHandler(uint8_t buttonId);

#endif	/* PUSHBUTTONS_H */

