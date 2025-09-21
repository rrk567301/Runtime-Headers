@class NSString, BronzeMtlDevice;
@protocol MTLHeap, MTLDevice;

@interface BronzeMtlIndirectCmdBuffer : MTLIOAccelIndirectCommandBuffer <MTLIndirectCommandBuffer, MTLIndirectCommandBufferSPI> {
    struct BronzeMtlIndirectCmdBufferMembers { BronzeMtlDevice *device; struct { unsigned char setsPso : 1; unsigned char setsBuffers : 1; unsigned char isCompute : 1; unsigned char usesTess : 1; unsigned char iaMultiVgtIsConst : 1; unsigned char noPrimReset : 1; unsigned char isRsrcIndexReserved : 1; unsigned int unused : 25; } flags; unsigned int IA_MULTI_VGT; unsigned char numOptRanges; struct { unsigned char dwordOffset; unsigned char dwordCount; } optimizeRanges[3]; struct { unsigned short byteOffset; unsigned short numDwords; unsigned int dwords[52]; } resetCmdInfo; unsigned long long rsrcIndex; } _amdIcb;
}

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long size;
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
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long gpuHandle;

- (void)dealloc;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (char)supportDynamicAttributeStride;
- (id)initWithDescriptor:(id)a0 device:(id)a1 maxCount:(unsigned long long)a2 options:(unsigned long long)a3;
- (void)initializeCommands;

@end
