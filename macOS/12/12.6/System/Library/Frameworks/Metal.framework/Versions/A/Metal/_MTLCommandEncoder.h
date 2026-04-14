@class NSString, _MTLCommandBuffer, NSMutableArray;
@protocol MTLFence, MTLDevice, MTLCommandBuffer;

@interface _MTLCommandEncoder : _MTLObjectWithLabel {
    id<MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    BOOL _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _labelTraceID;
    id<MTLFence> _progressFence;
    BOOL _needsFrameworkAssistedErrorTracking;
    BOOL _isProgressTrackingEncoder;
    NSMutableArray *_debugSignposts;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly, nonatomic) unsigned long long globalTraceObjectID;
@property (readonly, nonatomic) unsigned long long numThisCommand;
@property (readonly, nonatomic, getter=getType) unsigned long long type;
@property (nonatomic) unsigned long long numThisEncoder;
@property (readonly) unsigned long long dispatchType;

- (void)dealloc;
- (id)description;
- (id)commandBuffer;
- (void)setVertexAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setFragmentAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setTileAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)endEncoding;
- (id)formattedDescription:(unsigned long long)a0;
- (void)invalidateCompressedTexture:(id)a0;
- (void)invalidateCompressedTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)insertDebugSignpost:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)dispatchType;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)a0;
- (unsigned long long)getDriverUniqueID;
- (void)preEndEncoding;
- (id)initWithCommandBuffer:(id)a0;
- (struct MTLStatSampleRec { void *x0; unsigned long long x1; unsigned long long x2[0]; } *)newSample;
- (void)incNumCommands;
- (void)memoryBarrierNotificationWithResources:(const id *)a0 count:(unsigned long long)a1;

@end
