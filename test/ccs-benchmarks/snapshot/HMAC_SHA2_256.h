/* This file was auto-generated by KreMLin! */
#ifndef __HMAC_SHA2_256_H
#define __HMAC_SHA2_256_H



#include "kremlib.h"
#include "testlib.h"

typedef uint8_t Hacl_Hash_Lib_Create_uint8_t;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_t;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_t;

typedef uint8_t Hacl_Hash_Lib_Create_huint8_t;

typedef uint32_t Hacl_Hash_Lib_Create_huint32_t;

typedef uint64_t Hacl_Hash_Lib_Create_huint64_t;

typedef uint8_t *Hacl_Hash_Lib_Create_huint8_p;

typedef uint32_t *Hacl_Hash_Lib_Create_huint32_p;

typedef uint64_t *Hacl_Hash_Lib_Create_huint64_p;

typedef uint8_t *Hacl_Hash_Lib_LoadStore_uint8_p;

typedef uint8_t Hacl_Hash_SHA2_256_uint8_t;

typedef uint32_t Hacl_Hash_SHA2_256_uint32_t;

typedef uint64_t Hacl_Hash_SHA2_256_uint64_t;

typedef uint8_t Hacl_Hash_SHA2_256_uint8_ht;

typedef uint32_t Hacl_Hash_SHA2_256_uint32_ht;

typedef uint64_t Hacl_Hash_SHA2_256_uint64_ht;

typedef uint32_t *Hacl_Hash_SHA2_256_uint32_p;

typedef uint8_t *Hacl_Hash_SHA2_256_uint8_p;

typedef struct {
  uint32_t fst;
  uint8_t *snd;
}
K___uint32_t_uint8_t_;

typedef uint8_t Hacl_HMAC_SHA2_256_uint8_t;

typedef uint32_t Hacl_HMAC_SHA2_256_uint32_t;

typedef uint64_t Hacl_HMAC_SHA2_256_uint64_t;

typedef uint8_t Hacl_HMAC_SHA2_256_uint8_ht;

typedef uint32_t Hacl_HMAC_SHA2_256_uint32_ht;

typedef uint64_t Hacl_HMAC_SHA2_256_uint64_ht;

typedef uint32_t *Hacl_HMAC_SHA2_256_uint32_p;

typedef uint8_t *Hacl_HMAC_SHA2_256_uint8_p;

typedef uint8_t HMAC_SHA2_256_uint8_ht;

typedef uint32_t HMAC_SHA2_256_uint32_t;

typedef uint8_t *HMAC_SHA2_256_uint8_p;

void HMAC_SHA2_256_hmac_core(uint8_t *mac, uint8_t *key, uint8_t *data, uint32_t len);

void
HMAC_SHA2_256_hmac(
  uint8_t *mac,
  uint8_t *key,
  uint32_t keylen,
  uint8_t *data,
  uint32_t datalen
);
#endif
