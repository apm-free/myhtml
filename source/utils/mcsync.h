/*
 Copyright 2015 Alexander Borisov
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MyHTML_UTILS_MCSYNC_H
#define MyHTML_UTILS_MCSYNC_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct mcsync {
    int spinlock;
}
typedef mcsync_t;


mcsync_t * mcsync_create(void);
void mcsync_init(mcsync_t* mcsync);
void mcsync_clean(mcsync_t* mcsync);
mcsync_t * mcsync_destroy(mcsync_t* mcsync, int destroy_self);

void mcsync_lock(mcsync_t* mclock);
void mcsync_unlock(mcsync_t* mclock);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* mcsync_h */
