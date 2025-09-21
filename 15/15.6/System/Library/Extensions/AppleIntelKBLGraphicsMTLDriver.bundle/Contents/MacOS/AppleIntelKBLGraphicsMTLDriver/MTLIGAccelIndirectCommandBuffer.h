@class NSString;
@protocol MTLHeap, MTLDevice;

@interface MTLIGAccelIndirectCommandBuffer : MTLIOAccelIndirectCommandBuffer <MTLIndirectCommandBufferSPI>

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long storageMode;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) unsigned long long size;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2;

@end
