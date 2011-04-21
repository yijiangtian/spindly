#ifndef SPDY_NV_BLOCK_H_
#define SPDY_NV_BLOCK_H_ 1

#include <stdint.h>

/**
 * Name/Value Pair
 * Contains the name and the values of a single Name/Value pair.
 */
typedef struct {
	char *name;            /*!< Name of the values */
	uint16_t values_count; /*!< Number of values */
	char **values;         /*!< Values */
} spdy_nv_pair;

/**
 * Name/Value Header Block
 * Structure for holding data from a name/value header like in
 * in SYN_STREAM and SYN_REPLY.
 */
typedef struct {
	uint16_t count;      /*!< Number of Name/Value pairs */
	spdy_nv_pair *pairs; /*!< Array of Name/Value pairs */
} spdy_nv_block;

#endif
