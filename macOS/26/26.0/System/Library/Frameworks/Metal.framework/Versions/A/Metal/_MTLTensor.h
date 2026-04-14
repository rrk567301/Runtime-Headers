@class MTLTensorExtents, NSString;
@protocol MTLTensor, MTLDevice, MTLHeap, MTLBuffer;

@interface _MTLTensor : _MTLResource <MTLTensorSPI>

@property (readonly) struct MTLResourceID { unsigned long long _impl; } gpuResourceID;
@property (readonly) id<MTLBuffer> buffer;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly) MTLTensorExtents *dimensions;
@property (readonly) long long dataType;
@property (readonly) unsigned long long usage;
@property (readonly) id<MTLTensor> parentTensor;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) MTLTensorExtents *strides;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long plane;
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
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (int)setOwnerWithIdentity:(unsigned int)a0;
- (void)makeAliasable;
- (BOOL)isComplete;
- (BOOL)isAliasable;
- (unsigned long long)bufferOffset;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)waitUntilComplete;
- (BOOL)isWriteComplete;
- (void)replaceSlice:(struct MTLTensorSlice { id x0; id x1; })a0 withBytes:(const void *)a1 strides:(id)a2;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSlice:(struct MTLTensorSlice { id x0; id x1; })a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSliceOrigin:(id)a2 sliceDimensions:(id)a3;
- (id)internalMTLBuffer;
- (BOOL)isPurgeable;
- (BOOL)isTensorViewableWithReshapedDescriptor:(id)a0;
- (id)newTensorViewWithReshapedDescriptor:(id)a0 error:(id *)a1;
- (id)newTensorViewWithSlice:(struct MTLTensorSlice { id x0; id x1; })a0 error:(id *)a1;
- (void)replaceSliceOrigin:(id)a0 sliceDimensions:(id)a1 withBytes:(const void *)a2 strides:(id)a3;

@end
