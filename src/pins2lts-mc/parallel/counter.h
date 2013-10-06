/**
 *
 */

#ifndef COUNTER_H
#define COUNTER_H

#include <stdlib.h>

typedef struct work_counter_s {
    size_t              explored;
    size_t              trans;
    size_t              level_max;
    size_t              level_cur;
} work_counter_t;

extern void work_add_results (work_counter_t *res, work_counter_t *cnt);

extern void work_report (char *prefix, work_counter_t *cnt);

extern void work_report_estimate (char *prefix, work_counter_t *cnt);

static inline void
increase_level (work_counter_t *cnt)
{
    cnt->level_cur++;
    if (cnt->level_cur > cnt->level_max) {
        cnt->level_max = cnt->level_cur;
    }
}

#endif // COUNTER_H
