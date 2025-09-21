@class NSMutableArray, NSMutableSet;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder, MTLTexture, MTLCommandQueue, MTLComputeCommandEncoder;

@interface PKMetalRenderState : NSObject {
    NSMutableArray *_commandBuffers;
    NSMutableSet *_purgeableFramebuffers;
    NSMutableSet *_extendedLifetimeObjects;
    struct PKShaderPipelineConfig { unsigned char framebufferPixelFormats[6]; } _defaultPipelineConfig;
}

@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTLCommandBuffer> lastCommandBuffer;
@property (readonly, nonatomic) id<MTLCommandBuffer> computeCommandBuffer;
@property (readonly, nonatomic) id<MTLCommandBuffer> maskCommandBuffer;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> renderEncoder;
@property (retain, nonatomic) id<MTLComputeCommandEncoder> computeEncoder;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> maskRenderEncoder;
@property (nonatomic) unsigned long long vertexEncodeCount;
@property (retain, nonatomic) id<MTLTexture> destinationTexture;
@property (retain, nonatomic) id<MTLTexture> multiplyDestinationTexture;
@property (nonatomic) unsigned long long destinationColorAttachmentIndex;
@property (nonatomic) char liveRendering;
@property (nonatomic) char waitUntilCompletedOnCommit;
@property (nonatomic) char msaaRendering;
@property (nonatomic) char renderOnPaper;
@property (nonatomic) char needRenderMask;
@property (nonatomic) char renderGroupMaskedRendering;
@property (nonatomic) char useAccumulatorsAsPaintFramebuffers;
@property (nonatomic) char needPaintAccumulator;
@property (nonatomic) long long sixChannelRenderMode;
@property (retain, nonatomic) id<MTLTexture> sixChannelContentTexture;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } renderTextureTexCoordTransform;
@property (nonatomic) unsigned long long numPaintFramebuffers;
@property (readonly, nonatomic) struct PKShaderPipelineConfig { unsigned char x0[6]; } pipelineConfig;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } scissorRect;

+ (void)renderTargetBarrierForRenderEncoder:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)pushDebugGroup:(id)a0;
- (void)commit;
- (void)popDebugGroup;
- (void)cancel;
- (void)addCommandBuffer:(id)a0;
- (void)addPurgeableFramebuffer:(id)a0;
- (id)commandBufferCreateIfNecessary;
- (void)commitAndPurgeResourceSet:(id)a0;
- (void)commitMaskCommandBuffer;
- (id)computeCommandBufferCreateIfNecessary;
- (void)extendLifetimeUntilCompleted:(id)a0;
- (id)initWithCommandQueue:(id)a0 liveRendering:(char)a1 defaultPipelineConfig:(struct PKShaderPipelineConfig { unsigned char x0[6]; })a2;
- (id)maskCommandBufferCreateIfNecessary;
- (void)renderTargetBarrier;

@end
