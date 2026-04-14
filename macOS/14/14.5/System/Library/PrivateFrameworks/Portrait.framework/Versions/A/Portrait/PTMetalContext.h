@class PTMTLDropHintsInFlight;
@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface PTMetalContext : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;
@property (nonatomic) BOOL allowCommandbufferAllocation;
@property (retain, nonatomic) PTMTLDropHintsInFlight *dropHintsInFlight;

+ (void)reloadShaders;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)commit;
- (void)waitForIdle;
- (id)functionWithName:(id)a0 withConstants:(id)a1;
- (void)checkCurrentThreadEqualsCommandBufferThread;
- (void)commitAndWaitUntilCompleted;
- (void)commitAndWaitUntilScheduled;
- (id)computePipelineStateFor:(id)a0 withConstants:(id)a1;
- (id)initWithCommandQueue:(id)a0 bundleClass:(Class)a1;
- (id)initWithCommandQueue:(id)a0 bundleClass:(Class)a1 dropHints:(BOOL)a2;
- (id)initWithDevice:(id)a0 bundleClass:(Class)a1;
- (BOOL)isCommandBufferCommitted;

@end
