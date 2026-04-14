@class NSUUID, NSTimer, CAActivityIndicatorLayer, CALayer, CALayerHost, CAContext;

@interface ASVInlinePreview : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    CALayerHost *_layerHost;
    BOOL _isUIProcess;
    CAContext *_localContext;
}

@property (readonly, nonatomic) CAActivityIndicatorLayer *spinnerLayer;
@property (readonly, nonatomic) CALayer *errorLayer;
@property (copy, nonatomic) id /* block */ cameraTransformReply;
@property (readonly, retain, nonatomic) NSTimer *animationUpdateTimer;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) BOOL enableShadows;
@property (readonly, nonatomic) BOOL isPlaying;
@property (copy, nonatomic) id /* block */ animationObserverBlock;
@property (nonatomic) BOOL isLooping;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL isMuted;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ cameraTransform;
@property (readonly, nonatomic) unsigned int contextId;

+ (void)_kill:(int)a0;
+ (id)sharedXPCConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCurrentTime:(double)a0;
- (void)setIsMuted:(BOOL)a0;
- (void)updateLayout;
- (void)setRemoteContext:(unsigned int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 UUID:(id)a1;
- (void)setupRemoteConnectionWithCompletionHandler:(id /* block */)a0;
- (void)mouseDownAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)mouseDraggedAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)mouseUpAtLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)getCameraTransform:(id /* block */)a0;
- (void)setCameraTransform:(SEL)a0;
- (void)setIsPlaying:(BOOL)a0 reply:(id /* block */)a1;
- (void)preparePreviewOfFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })squareFrameFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showErrorLayer;
- (id /* block */)setupRuntimeStateObserver:(id)a0;
- (void)updateRuntimeStateFrom:(id)a0;
- (void)centerLayerInParent:(id)a0;
- (void)_getCameraTransform:(id /* block */)a0;
- (void)getSharedInlineServiceFailable:(id /* block */)a0;
- (void)setFrameWithinFencedTransaction:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setWantsDebugColors:(BOOL)a0;
- (void)setEnableShadows:(BOOL)a0;
- (void)setAnimationObserverBlock:(id /* block */)a0;
- (id)_createErrorLayer;

@end
