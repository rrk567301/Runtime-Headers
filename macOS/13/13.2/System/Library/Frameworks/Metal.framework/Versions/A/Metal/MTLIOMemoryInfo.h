@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {
    void *memlist_key;
    MTLIOAccelResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;
- (void)shutdown;
- (struct __CFArray { } *)annotationList;
- (void)addResourceToList:(id)a0;
- (void)removeResourceFromList:(id)a0;
- (void *)addDataSource:(id /* block */)a0;
- (void)removeDataSource:(void *)a0;

@end
