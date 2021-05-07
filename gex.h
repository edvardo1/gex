#ifndef _G_E_X_H_
#define _G_E_X_H_

#include <glib.h>

GHashTable *copy_g_hash_table(GHashTable *hashtable, GHashFunc hash_func,
                              GEqualFunc key_equal_func);

#endif /* _G_E_X_H_ */
