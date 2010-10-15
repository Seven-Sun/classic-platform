/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/

#ifndef SLEEP_H_
#define SLEEP_H_

#include "os.h"

#define SLEEP(_x_) \
do{ \
	uint32_t pval = McuE_EnterCriticalSection(); \
	TaskType task; \
	GetTaskID(&task); \
	Sleep(_x_, task, EVENT_MASK_EVENT_SLEEP_ALARM ); \
    McuE_ExitCriticalSection(pval); \
	WaitEvent(EVENT_MASK_EVENT_SLEEP_ALARM); \
	ClearEvent(EVENT_MASK_EVENT_SLEEP_ALARM); \
}while(0);

void Sleep(uint32_t nofTicks, TaskType TaskID, EventMaskType Mask );

#endif /* SLEEP_H_ */
