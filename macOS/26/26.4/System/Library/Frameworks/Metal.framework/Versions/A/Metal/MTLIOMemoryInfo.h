@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {
    void *memlist_key;
    MTLIOAccelResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (void)shutdown;
- (void *)addDataSource:(id /* block */)a0;
- (void)unlock;
- (struct __CFArray { } *)annotationList;
- (id)init;
- (void)addResourceToList:(id)a0;
- (void)removeDataSource:(void *)a0;
- (void)lock;
- (void)removeResourceFromList:(id)a0;
- (void)dealloc;

@end
