@class NSString;
@protocol MTL4CommandAllocator, MTLDevice, MTL4CommandBuffer;

@interface _MTL4CommandEncoder : _MTLObjectWithLabel <MTL4CommandEncoderGGDSPI> {
    unsigned long long _labelTraceID;
}

@property (retain, nonatomic) id<MTL4CommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTL4CommandAllocator> commandAllocator;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly, nonatomic, getter=getType) long long type;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)updateFence:(id)a0 afterEncoderStages:(unsigned long long)a1;
- (void)barrierAfterEncoderStages:(unsigned long long)a0 beforeEncoderStages:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)barrierAfterEncoderStages:(unsigned long long)a0 beforeEncoderStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)barrierAfterQueueStages:(unsigned long long)a0 beforeStages:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)barrierAfterQueueStages:(unsigned long long)a0 beforeStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)barrierAfterStages:(unsigned long long)a0 beforeQueueStages:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)barrierAfterStages:(unsigned long long)a0 beforeQueueStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (unsigned int)commandBatchIdOffset;
- (BOOL)commandBatchIdRangeMin:(unsigned int *)a0 max:(unsigned int *)a1;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)insertDebugSignpost:(id)a0;
- (void)waitForFence:(id)a0 beforeEncoderStages:(unsigned long long)a1;
- (id)initWithCommandAllocator:(id)a0;

@end
