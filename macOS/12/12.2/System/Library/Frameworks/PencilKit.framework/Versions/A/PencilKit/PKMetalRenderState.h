@class NSMutableArray;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder, MTLTexture, MTLCommandQueue, MTLComputeCommandEncoder;

@interface PKMetalRenderState : NSObject {
    NSMutableArray *_commandBuffers;
    NSMutableArray *_purgeableFramebuffers;
}

@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTLCommandBuffer> computeCommandBuffer;
@property (readonly, nonatomic) id<MTLCommandBuffer> maskCommandBuffer;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> renderEncoder;
@property (retain, nonatomic) id<MTLComputeCommandEncoder> computeEncoder;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> maskRenderEncoder;
@property (nonatomic) unsigned long long vertexEncodeCount;
@property (retain, nonatomic) id<MTLTexture> destinationTexture;
@property (nonatomic) unsigned long long destinationColorAttachmentIndex;
@property (nonatomic) BOOL liveRendering;
@property (nonatomic) BOOL waitUntilCompletedOnCommit;
@property (nonatomic) BOOL msaaRendering;
@property (nonatomic) BOOL renderOnPaper;
@property (nonatomic) BOOL needRenderMask;
@property (nonatomic) long long sixChannelRenderMode;
@property (retain, nonatomic) id<MTLTexture> sixChannelContentTexture;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } renderTextureTexCoordTransform;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } scissorRect;

+ (void)renderTargetBarrierForRenderEncoder:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)commit;
- (void)cancel;
- (void)commitAndPurgeResourceSet:(id)a0;
- (void)renderTargetBarrier;
- (void)commitMaskCommandBuffer;
- (id)initWithCommandQueue:(id)a0 liveRendering:(BOOL)a1;
- (id)commandBufferCreateIfNecessary;
- (id)computeCommandBufferCreateIfNecessary;
- (id)maskCommandBufferCreateIfNecessary;
- (void)addCommandBuffer:(id)a0;
- (void)addPurgeableFramebuffer:(id)a0;

@end
