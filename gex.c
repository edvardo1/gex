#include "gex.h"

static void copy_g_hash_table_auxiliary(gpointer key, gpointer value,
                                        gpointer userdata) {
	g_hash_table_replace((GHashTable *)userdata, key, value);
}

GHashTable *copy_g_hash_table(GHashTable *hashtable, GHashFunc hash_func,
                              GEqualFunc key_equal_func) {
	GHashTable *ret = g_hash_table_new(hash_func, key_equal_func);
	g_hash_table_foreach(hashtable, copy_g_hash_table_auxiliary, ret);
	return ret;
}
