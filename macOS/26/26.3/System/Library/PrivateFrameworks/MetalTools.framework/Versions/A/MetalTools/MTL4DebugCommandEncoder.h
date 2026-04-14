@class MTLToolsDevice, MTL4DebugCommandBuffer;

@interface MTL4DebugCommandEncoder : NSObject {
    id _baseObject;
    MTLToolsDevice *_device;
    MTL4DebugCommandBuffer *_commandBuffer;
    unsigned long long _encoderStageMask;
    struct MTL4DebugCommandEncoderState { unsigned char canEndEncoding : 1; unsigned char hasEndEncoding : 1; } _encoderState;
}

@property (nonatomic) BOOL canEndEncoding;
@property (readonly, nonatomic) BOOL hasEndEncoding;

- (void)updateFence:(id)a0 afterEncoderStages:(unsigned long long)a1;
- (void)barrierAfterEncoderStages:(unsigned long long)a0 beforeEncoderStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)barrierAfterQueueStages:(unsigned long long)a0 beforeStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)barrierAfterStages:(unsigned long long)a0 beforeQueueStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (unsigned int)commandBatchIdOffset;
- (BOOL)commandBatchIdRangeMin:(unsigned int *)a0 max:(unsigned int *)a1;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)endEncodingPreamble;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (id)initWithBaseObject:(id)a0 device:(id)a1 commandBuffer:(id)a2 encoderStageMask:(unsigned long long)a3;
- (void)resetEncoderState;
- (void)validateFunctionArguments:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a0 stage:(id)a1 functionName:(id)a2 argumentTable:(id)a3 boundThreadgroupMemoryArguments:(struct MTLDebugFunctionArgument { BOOL x0; BOOL x1; unsigned long long x2; id x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; BOOL x10; float x11; float x12; } *)a4 bindings:(id)a5 allowNullBufferBindings:(BOOL)a6;
- (void)waitForFence:(id)a0 beforeEncoderStages:(unsigned long long)a1;

@end
