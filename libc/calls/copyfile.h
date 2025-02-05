#ifndef COSMOPOLITAN_LIBC_CALLS_COPYFILE_H_
#define COSMOPOLITAN_LIBC_CALLS_COPYFILE_H_

#define COPYFILE_NOCLOBBER           1
#define COPYFILE_PRESERVE_OWNER      2
#define COPYFILE_PRESERVE_TIMESTAMPS 4

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

int _copyfile(const char *, const char *, int) paramsnonnull();

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_CALLS_COPYFILE_H_ */
