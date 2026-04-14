@class AVVideoCompositionRenderContext, NSDictionary, AVWeakReference, NSError, NSObject, AVVideoComposition;
@protocol OS_dispatch_queue, AVVideoCompositing;

@interface AVCustomVideoCompositorSession : NSObject {
    struct OpaqueFigVideoCompositor { } *_figCustomCompositor;
    BOOL _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    AVWeakReference *_weakSelf;
    void *_callbackContextToken;
    NSObject<OS_dispatch_queue> *_videoCompositionQ;
    AVVideoComposition *_videoComposition;
    BOOL _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;
    id<AVVideoCompositing> _clientCustomCompositor;
    NSObject<OS_dispatch_queue> *_clientErrorQ;
    NSError *_clientError;
    NSObject<OS_dispatch_queue> *_renderContextQ;
    AVVideoCompositionRenderContext *_renderContext;
    NSObject<OS_dispatch_queue> *_finishedRequestQ;
}

@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;

+ (id)sessionWithVideoComposition:(id)a0 recyclingSession:(id)a1;
+ (BOOL)_colorPropertiesAreSetInVideoComposition:(id)a0;

- (void)dealloc;
- (void)setVideoComposition:(id)a0;
- (id)customVideoCompositor;
- (void)_willDeallocOrFinalize;
- (id)initWithVideoComposition:(id)a0;
- (BOOL)_validateSourcePixelBufferAttributes:(id)a0 andReturnException:(id *)a1;
- (BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)a0 andReturnException:(id *)a1;
- (BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(id *)a0;
- (void)detachVideoComposition;
- (struct OpaqueFigVideoCompositor { } *)_copyFigVideoCompositor;
- (id)getAndClearClientError;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 didFinishWithComposedPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 didFinishWithError:(id)a1;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame { } *)a0;
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 requiresRenderUsingSources:(id)a2 requiresSampleBuffersUsingSources:(id)a3 withInstruction:(void *)a4;
- (int)_customCompositorShouldAnticipateRenderingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andThenFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)_customCompositorShouldPrerollForRenderingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andThenFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 requestID:(long long)a4;
- (int)_customCompositorShouldCancelPendingFrames;
- (void)_customCompositorFigPropertyDidChange;
- (int)_setupFigCallbacks;
- (void)_cleanupFigCallbacks;

@end
