@class MTLTensorExtents, NSString;
@protocol MTLTensor, MTLDevice, MTLHeap, MTLBuffer;

@interface MTLToolsTensor : MTLToolsResource <MTLTensorSPI>

@property (readonly) id<MTLTensor> parentTensor;
@property (readonly) id<MTLBuffer> buffer;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long offset;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) MTLTensorExtents *strides;
@property (readonly) MTLTensorExtents *dimensions;
@property (readonly) long long dataType;
@property (readonly) unsigned long long usage;
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

- (void)dealloc;
- (void)replaceSlice:(struct MTLTensorSlice { id x0; id x1; })a0 withBytes:(const void *)a1 strides:(id)a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSlice:(struct MTLTensorSlice { id x0; id x1; })a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSliceOrigin:(id)a2 sliceDimensions:(id)a3;
- (id)initWithBaseObject:(id)a0 buffer:(id)a1;
- (id)initWithBaseObject:(id)a0 parentTensor:(id)a1;
- (BOOL)isTensorViewableWithReshapedDescriptor:(id)a0;
- (id)newTensorViewWithReshapedDescriptor:(id)a0 error:(id *)a1;
- (id)newTensorViewWithSlice:(struct MTLTensorSlice { id x0; id x1; })a0 error:(id *)a1;
- (void)replaceSliceOrigin:(id)a0 sliceDimensions:(id)a1 withBytes:(const void *)a2 strides:(id)a3;
- (id)wrapChildTensor:(id)a0;

@end
