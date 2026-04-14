@class NSMutableArray, MTLDebugResource, MTLDebugDevice;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {
    unsigned long long _length;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly, nonatomic) MTLDebugResource *common;
@property (readonly, nonatomic) const void *pointer;
@property (readonly, nonatomic) long long placementSparsePageSize;
@property (nonatomic) BOOL isContentExposedToCPU;

- (unsigned long long)resourceIndex;
- (unsigned long long)gpuAddress;
- (void)dealloc;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)replaceBackingWithRanges:(id)a0 readOnly:(BOOL)a1;
- (void)makeAliasable;
- (BOOL)replaceBackingWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (BOOL)detachBacking;
- (void *)contents;
- (id)description;
- (unsigned long long)length;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)removeAllDebugMarkers;
- (BOOL)purgeableStateValidForRendering;
- (id)copyDebugMarkers;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (id)initWithBuffer:(id)a0 device:(id)a1 bytes:(const void *)a2 options:(unsigned long long)a3;
- (id)initWithBuffer:(id)a0 device:(id)a1 options:(unsigned long long)a2;
- (id)initWithBuffer:(id)a0 device:(id)a1 options:(unsigned long long)a2 placementSparsePageSize:(long long)a3;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (void)lockPurgeableState;
- (id)newTensorWithDescriptor:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)newTiledTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (void)setParentGPUAddress:(unsigned long long)a0;
- (void)setParentGPUSize:(unsigned long long)a0;
- (void)unlockPurgeableState;

@end
