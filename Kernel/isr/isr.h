// This file is part of InK.
// 
// author = "Kasım Sinan Yıldırım " 
// maintainer = "Kasım Sinan Yıldırım "
// email = "sinanyil81 [at] gmail.com" 
//  
// copyright = "Copyright 2018 Delft University of Technology" 
// license = "LGPL" 
// version = "3.0" 
// status = "Production"
//
// 
// InK is free software: you ca	n redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>./*
 /* isr.h
 *
 *  Created on: 17 Feb 2018
 *
 */

#ifndef ISR_ISR_H_
#define ISR_ISR_H_

// the maximum number of events (generated by ISRs) which
// are not processed by the corresponding thread
#define MAX_PENDING_INTERRUPTS  8

#include "isrmanager.h"
#include "persistentqueue.h"

// checks if the thread event slots are not full
#define __EVENT_BUFFER_FULL(threadid)   \
    __event_buffer_full_ISR(__get_thread(threadid))

// signaling of the event from ISRs
#define __SIGNAL_EVENT(threadid,event)  \
    __event_signal_ISR(__get_thread(threadid),event)

#endif /* ISR_ISR_H_ */
