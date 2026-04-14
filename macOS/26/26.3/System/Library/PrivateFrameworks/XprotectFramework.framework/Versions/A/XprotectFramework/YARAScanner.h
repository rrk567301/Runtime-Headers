@interface YARAScanner : NSObject {
    struct YR_SCAN_CONTEXT { unsigned long long x0; unsigned long long x1; int x2; int x3; unsigned long long x4; void *x5; void /* function */ *x6; struct YR_RULES *x7; struct YR_STRING *x8; struct YR_MEMORY_BLOCK_ITERATOR *x9; struct _YR_HASH_TABLE *x10; struct YR_NOTEBOOK *x11; struct _YR_STOPWATCH { struct mach_timebase_info { unsigned int x0; unsigned int x1; } x0; unsigned long long x1; } x12; struct RE_FIBER_POOL { int x0; struct RE_FIBER_LIST { struct RE_FIBER *x0; struct RE_FIBER *x1; } x1; } x13; unsigned long long *x14; unsigned long long *x15; unsigned long long *x16; struct YR_MATCHES *x17; struct YR_MATCHES *x18; struct YR_PROFILING_INFO *x19; } *_scanner;
}

- (void)dealloc;
- (id)initWithRules:(struct YR_RULES { struct YR_ARENA *x0; union { struct YR_RULE *x0; struct YR_RULE *x1; } x1; union { struct YR_STRING *x0; struct YR_STRING *x1; } x2; union { struct YR_EXTERNAL_VARIABLE *x0; struct YR_EXTERNAL_VARIABLE *x1; } x3; unsigned int *x4; struct YR_AC_MATCH *x5; unsigned int *x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; } *)a0 withCallback:(void /* function */ *)a1 withData:(id)a2;
- (id)scanData:(id)a0;
- (id)scanURL:(id)a0;

@end
