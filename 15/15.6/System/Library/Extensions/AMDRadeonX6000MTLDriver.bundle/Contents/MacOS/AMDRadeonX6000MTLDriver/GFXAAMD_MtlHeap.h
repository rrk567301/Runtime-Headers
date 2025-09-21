@class NSString;
@protocol MTLDevice;

@interface GFXAAMD_MtlHeap : MTLIOAccelHeap <MTLHeapSPI> {
    struct AMD_HeapMembers { unsigned int baseAlign; unsigned short renderTargetId; union { unsigned int bits; struct { unsigned char placementHeap : 1; unsigned char rtidValid : 1; unsigned int reserved : 30; } ; } flags; } m_members;
}

@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long protectionOptions;
@property (readonly, nonatomic) unsigned long long memoryPoolId;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) long long type;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newTextureWithDescriptor:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 atOffset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0 atOffset:(unsigned long long)a1;
- (id)initInternalWithDevice:(id)a0 withDescriptor:(id)a1;

@end
