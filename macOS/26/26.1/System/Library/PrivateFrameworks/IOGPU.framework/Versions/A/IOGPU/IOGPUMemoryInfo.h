@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {
    void *memlist_key;
    IOGPUMetalResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (void)unlock;
- (void)removeResourceFromList:(id)a0;
- (void)shutdown;
- (struct __CFArray { } *)getAnnotationListAndEmitResourceInfo;
- (void)addResourceToList:(id)a0;
- (struct __CFArray { } *)annotationList;
- (void)lock;
- (void *)addDataSource:(id /* block */)a0;
- (void)dealloc;
- (void)removeDataSource:(void *)a0;
- (id)init;

@end
