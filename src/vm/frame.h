#ifndef VM_FRAME_H
#define VM_FRAME_H

#include "vm/struct.h"
#include "threads/palloc.h"

void _free_frame(void *address, uint32_t *pagedir);

void *_get_frame(void *frame, uint32_t *pagedir, enum palloc_flags flags);

struct frame_struct *address_to_frame(void *address);

void evict(void);
bool _clock_evict(struct frame_struct *vf);
#endif
