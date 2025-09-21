@interface EXSurfaceMemoryRegion : NSObject {
    struct EXSurfaceRangeAllocator { struct EXSurfaceRangeAllocatorElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _rangeAllocator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _numAllocated;
}

@property (readonly) unsigned long long sharedMemoryRegionID;
@property (readonly) void *baseAddress;

+ (id)newMemoryRegionLength:(long long)a0 attributes:(unsigned long long)a1;

- (void)decNumAllocated;
- (BOOL)_incNumAllocated:(long long)a0 size:(long long)a1;
- (BOOL)_setMaxMappedOffset:(long long)a0 size:(long long)a1;
- (BOOL)allocateOffset:(long long *)a0 size:(long long)a1;
- (void)deallocateOffset:(long long)a0 size:(long long)a1;
- (BOOL)incNumAllocated:(long long)a0 size:(long long)a1;
- (id)initWithLength:(long long)a0 attributes:(unsigned long long)a1;

@end
