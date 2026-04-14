@interface VMUTaskMemoryCache : NSObject {
    unsigned char _taskType;
    unsigned int _taskPort;
    BOOL _taskIs64Bit;
    BOOL _taskIsTranslated;
}

@property (readonly, nonatomic) struct mapped_memory_t { } *memoryRegions;
@property (copy, nonatomic) id /* block */ regionInfoBlock;

+ (BOOL)taskIs64Bit:(unsigned int)a0;
+ (id)taskMemoryCacheForTask:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTask:(unsigned int)a0;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 to:(void *)a1;
- (void)enumerateMemoryCache:(id /* block */)a0;
- (const struct mapped_region_node_t { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)findMappedAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (void)flushMemoryCache;
- (id)initWithCoreFile:(id)a0;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnedAddress:(unsigned long long *)a2 returnedSize:(unsigned long long *)a3;
- (int)peekAtAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnsBuf:(void **)a2;
- (int)readPointerAt:(unsigned long long)a0 value:(unsigned long long *)a1;
- (int)startPeeking;
- (int)stopPeeking;
- (BOOL)taskIsTranslated;
- (int)unmapAddress:(unsigned long long)a0 size:(unsigned long long)a1;

@end
