@interface _MTLHeap : _MTLAllocation {
    unsigned long long _heapResourceOptions;
    long long _heapType;
}

@property (readonly) long long type;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long memoryPoolId;
@property (readonly) unsigned long long allocatedSize;
@property (readonly, nonatomic) unsigned long long gpuAddress;

- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newBufferWithDescriptor:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newBufferWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (BOOL)detachBacking;
- (BOOL)replaceBackingWithRanges:(id)a0 readOnly:(BOOL)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 atOffset:(unsigned long long)a2;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)initWithType:(long long)a0 options:(unsigned long long)a1;
- (id)newTextureWithDescriptor:(id)a0 atOffset:(unsigned long long)a1;
- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)init;
- (id)description;

@end
