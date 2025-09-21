@class NSString, MTLAccelerationStructureDescriptor, GFXAAMD_MtlBuffer;
@protocol MTLHeap, MTLDevice, MTLBuffer;

@interface GFX10_MTLAccelerationStructure : MTLIOAccelAccelerationStructure <MTLAccelerationStructure, MTLAccelerationStructureSPI> {
    struct GFX10_MTLAccelerationStructureMemberRec { unsigned long long rsrcIndex; unsigned char isRsrcIndexReserved : 1; unsigned int reserved : 31; GFXAAMD_MtlBuffer *bvhSizesBuffer; } _gfx10;
}

@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long accelerationStructureUniqueIdentifier;
@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly, nonatomic) unsigned long long bufferOffset;
@property (retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor;
@property (readonly) unsigned long long gpuHandle;

- (void)dealloc;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 size:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;

@end
