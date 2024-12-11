/*
 * software_timer.h
 *
 *  Created on: Dec 11, 2024
 *      Author: HOANGANH
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[5];

void setTimer(int index, int counter);
void timer_run(void);

#endif /* INC_SOFTWARE_TIMER_H_ */
