@class EXSurfaceMemoryRegion;

@interface EXSurfaceMemory : NSObject {
    EXSurfaceMemoryRegion *_memoryRegion;
    BOOL _dealloc;
}

@property (readonly) long long offset;
@property (readonly) long long size;

+ (id)newMemoryWithMemoryRegion:(id)a0 size:(long long)a1;
+ (id)newMemoryWithMemoryRegion:(id)a0 size:(long long)a1 offset:(long long)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMemoryRegion:(id)a0 size:(long long)a1;
- (id)initWithMemoryRegion:(id)a0 size:(long long)a1 offset:(long long)a2;

@end
