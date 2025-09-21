@class NSUUID, NSTimer, CAActivityIndicatorLayer, CALayer, CALayerHost, CAContext;

@interface ASVInlinePreview : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    CALayerHost *_layerHost;
    char _isUIProcess;
    CAContext *_localContext;
    char _resizeLayerImmediately;
}

@property (readonly, nonatomic) CAActivityIndicatorLayer *spinnerLayer;
@property (readonly, nonatomic) CALayer *errorLayer;
@property (copy, nonatomic) id /* block */ cameraTransformReply;
@property (readonly, retain, nonatomic) NSTimer *animationUpdateTimer;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) char enableShadows;
@property (readonly, nonatomic) char isPlaying;
@property (copy, nonatomic) id /* block */ animationObserverBlock;
@property (nonatomic) char isLooping;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) char hasAudio;
@property (nonatomic) char isMuted;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ cameraTransform;
@property (readonly, nonatomic) unsigned int contextId;

+ (int)instanceCount;
+ (void)_kill:(int)a0;
+ (id)sharedXPCConnection;
+ (void)debugGetMemoryUsage:(id /* block */)a0;
+ (id)getService;
+ (void)remoteInstanceCount:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setCurrentTime:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayout;
- (char)hasError;
- (void)setIsMuted:(char)a0;
- (void)setRemoteContext:(unsigned int)a0;
- (void)setIsLooping:(char)a0;
- (void)getCameraTransform:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 UUID:(id)a1;
- (void)mouseDownAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)mouseDraggedAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)mouseUpAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)preparePreviewOfFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCameraTransform:(SEL)a0;
- (void)setFrameWithinFencedTransaction:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsPlaying:(char)a0 reply:(id /* block */)a1;
- (void)setupRemoteConnectionWithCompletionHandler:(id /* block */)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)getSharedInlineServiceFailable:(id /* block */)a0;
- (id)_createErrorLayer;
- (void)_getCameraTransform:(id /* block */)a0;
- (void)centerLayerInParent:(id)a0;
- (void)commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sendTeardownEvent;
- (void)setAnimationObserverBlock:(id /* block */)a0;
- (void)setEnableShadows:(char)a0;
- (void)setWantsDebugColors:(char)a0;
- (void)showErrorLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })squareFrameFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateRuntimeStateFrom:(id)a0;

@end
