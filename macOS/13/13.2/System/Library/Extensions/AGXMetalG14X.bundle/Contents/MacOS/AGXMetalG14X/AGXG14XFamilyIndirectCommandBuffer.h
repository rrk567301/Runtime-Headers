@class NSString, AGXG14XFamilyBuffer;
@protocol MTLHeap, MTLDevice;

@interface AGXG14XFamilyIndirectCommandBuffer : IOGPUMetalIndirectCommandBuffer <MTLIndirectCommandBuffer> {
    int _type;
    AGXG14XFamilyBuffer *_buffer;
    union Impl { struct IndirectCommandBuffer *render; struct IndirectComputeCommandBuffer *compute; } _impl;
    union Encoder { struct IndirectRenderCommandEncoder *render; struct IndirectComputeCommandEncoder *compute; } _encoder;
}

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

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (unsigned long long)resourceIndex;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 count:(unsigned long long)a2 options:(unsigned long long)a3 isSuballocDisabled:(BOOL)a4;

@end
