@class NSMutableArray, NSObject;
@protocol MTLCommandBuffer, MTLComputePipelineState, MTLRenderCommandEncoder, MTLBuffer, MTLComputeCommandEncoder, OS_dispatch_queue, MTLRenderPipelineState, MTLCommandQueue;

@interface CCAccelerateDeviceGroup : NSObject {
    id<MTLCommandBuffer> _lastBuffer;
    NSMutableArray *_submittedBuffers;
    struct vector<std::tuple<long, CCBuffer *>, std::allocator<std::tuple<long, CCBuffer *>>> { void *__begin_; void *__end_; void *__cap_; } trackedBufferList;
    id<MTLRenderPipelineState> _logPipelineState;
    id<MTLComputePipelineState> _logComputePipelineState;
    id<MTLBuffer> _vertexLog;
    id<MTLBuffer> _fragmentLog;
    id<MTLBuffer> _computeLog;
    id<MTLBuffer> _smallTriangleBuffer;
    id<MTLCommandBuffer> _mtlCommandBuffer;
    unsigned long long _protectionOptions;
}

@property (retain, nonatomic) id<MTLCommandQueue> mtlCommandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> mtlCommandBufferRaw;
@property (copy, nonatomic) id /* block */ scheduledHandler;
@property (copy, nonatomic) id /* block */ completedHandler;
@property (nonatomic) BOOL isProtected;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> renderEncoder;
@property (retain, nonatomic) id<MTLComputeCommandEncoder> computeEncoder;
@property (nonatomic) BOOL enhancedCommandBufferDebugging;
@property (nonatomic) unsigned int frame_id;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } frame_logs;
@property (nonatomic) BOOL enableSeparateFastClear;

- (BOOL)commit;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeEncoderWithDispatchType:(unsigned long long)a0;
- (void)addTrackedBufferDynamicMethod:(id)a0 withIndex:(long long)a1;
- (BOOL)commitAndWaitUntilBuffersSubmitted;
- (void)endComputeEncoder;
- (void)endRenderEncoder;
- (BOOL)submitBuffer;
- (id)trackedComputeEncoderWithDispatchType:(unsigned long long)a0;
- (void)waitUntilBuffersCompleted;
- (void)waitUntilBuffersScheduled;

@end
