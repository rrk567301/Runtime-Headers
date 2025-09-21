@class MTLTensorExtents, NSString;
@protocol MTLTensor, MTLDevice, MTLHeap, MTLBuffer;

@interface IOGPUMetalTensor : IOGPUMetalResource <MTLTensorSPI>

@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) id<MTLBuffer> buffer;
@property (readonly) MTLTensorExtents *dimensions;
@property (readonly) long long dataType;
@property (readonly) unsigned long long usage;
@property (readonly) id<MTLTensor> parentTensor;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) MTLTensorExtents *strides;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long plane;
@property (readonly) unsigned long long bufferOffset;
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

- (unsigned long long)resourceIndex;
- (unsigned long long)usage;
- (void)dealloc;
- (id)dimensions;
- (long long)dataType;
- (unsigned long long)offset;
- (struct __IOSurface { } *)iosurface;
- (id)strides;
- (struct MTLResourceID { unsigned long long x0; })gpuResourceID;
- (void)replaceSlice:(struct MTLTensorSlice { id x0; id x1; })a0 withBytes:(const void *)a1 strides:(id)a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSlice:(struct MTLTensorSlice { id x0; id x1; })a2;
- (id)internalMTLBuffer;
- (BOOL)isTensorViewableWithReshapedDescriptor:(id)a0;
- (id)newTensorViewWithReshapedDescriptor:(id)a0 error:(id *)a1;
- (id)newTensorViewWithSlice:(struct MTLTensorSlice { id x0; id x1; })a0 error:(id *)a1;
- (unsigned long long)plane;
- (id)initWithBuffer:(id)a0;

@end
