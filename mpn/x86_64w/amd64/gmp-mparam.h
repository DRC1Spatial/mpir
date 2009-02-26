/* Generated by tuneup.c, 2009-02-26, system compiler */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD             162

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          36
#define SQR_TOOM3_THRESHOLD             210

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD             124
#define MULLOW_MUL_N_THRESHOLD          185

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                120
#define POWM_THRESHOLD                   40

#define GCD_ACCEL_THRESHOLD              24
#define GCDEXT_THRESHOLD                202
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           0  /* always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             21
#define GET_STR_PRECOMPUTE_THRESHOLD     23
#define SET_STR_THRESHOLD              8540

#define MUL_FFT_TABLE  { 912, 1952, 4672, 7424, 23552, 36864, 0 }
#define MUL_FFT_MODF_THRESHOLD         1232
#define MUL_FFT_THRESHOLD              9344

#define SQR_FFT_TABLE  { 912, 2080, 5568, 11520, 27648, 45056, 0 }
#define SQR_FFT_MODF_THRESHOLD         1296
#define SQR_FFT_THRESHOLD             10624

/* Tuneup completed successfully, took 14 seconds */