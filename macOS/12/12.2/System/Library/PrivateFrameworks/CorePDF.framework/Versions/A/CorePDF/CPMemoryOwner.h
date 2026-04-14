@interface CPMemoryOwner : NSObject <CPDisposable> {
    void *memory;
}

- (void)finalize;
- (void)dealloc;
- (void)dispose;
- (id)initWithAllocatedMemory:(void *)a0;

@end
