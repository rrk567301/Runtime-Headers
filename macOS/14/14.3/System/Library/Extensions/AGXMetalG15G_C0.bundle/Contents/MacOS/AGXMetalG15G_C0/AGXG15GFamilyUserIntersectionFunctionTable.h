@class NSString;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface AGXG15GFamilyUserIntersectionFunctionTable : IOGPUMetalIntersectionFunctionTable <MTLIntersectionFunctionTableSPI> {
    void *_impl;
    id _pipelineState;
    int _stage;
}

@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (retain, nonatomic) id<MTLBuffer> globalBuffer;
@property (nonatomic) unsigned long long globalBufferOffset;
@property (readonly) unsigned long long gpuHandle;
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
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)a0;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setFunction:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctions:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setOpaqueCurveIntersectionFunctionWithSignature:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setOpaqueCurveIntersectionFunctionWithSignature:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)clone:(id)a0 cloneTableHeap:(void *)a1 slProgramsTracker:(void *)a2;
- (id)initWithDevice:(id)a0 numTableFnSlots:(int)a1 pipelineSets:(struct shared_ptr<const AGX::G15::IntersectionPipelineSets> { struct IntersectionPipelineSets *x0; struct __shared_weak_count *x1; })a2 pipeline:(id)a3 stage:(int)a4 resourceIndex:(unsigned int)a5;
- (id)initWithDevice:(id)a0 originalTable:(id)a1 cloneTableHeap:(void *)a2 slProgramsTracker:(void *)a3;

@end
