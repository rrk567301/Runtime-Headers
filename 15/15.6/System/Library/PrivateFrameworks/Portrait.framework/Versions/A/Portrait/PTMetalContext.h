@class PTMetalTextureUtil;
@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface PTMetalContext : NSObject <NSCopying> {
    char _imageblocksSupported;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;
@property (nonatomic) char allowCommandbufferAllocation;
@property (retain, nonatomic) PTMetalTextureUtil *textureUtil;

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
- (char)imageblocksSupported;
- (id)initWithCommandQueue:(id)a0 bundleClass:(Class)a1;
- (id)initWithDevice:(id)a0 bundleClass:(Class)a1;
- (char)isCommandBufferCommitted;
- (void)setImageblocksSupported:(char)a0;

@end
