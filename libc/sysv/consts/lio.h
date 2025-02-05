#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_LIO_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_LIO_H_

#define LIO_NOP LIO_NOP
#define LIO_NOWAIT LIO_NOWAIT
#define LIO_READ LIO_READ
#define LIO_WAIT LIO_WAIT
#define LIO_WRITE LIO_WRITE

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int LIO_NOP;
extern const int LIO_NOWAIT;
extern const int LIO_READ;
extern const int LIO_WAIT;
extern const int LIO_WRITE;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_LIO_H_ */
