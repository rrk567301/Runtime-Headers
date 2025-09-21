@class CALayer, NSArray;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _primaryCaptureRectLock;
    struct CGPoint { double x; double y; } _primaryCaptureRectCenterPoint;
    double _primaryCaptureRectAspectRatio;
    double _primaryCaptureRectTransitionPercentComplete;
    long long _primaryCaptureRectUniqueID;
    char _havePendingPrimaryCaptureRectChange;
    char _primaryAndOverCaptureCompositingEnabled;
    long long _overCaptureStatus;
    char _isPresentationLayer;
    char _automaticallyDimsOverCaptureRegion;
    CALayer *_topDimmingOverlay;
    CALayer *_bottomDimmingOverlay;
    double _lastAspectCenterUpdateTime;
    char _semanticStyleRenderingSupported;
    char _semanticStyleRenderingEnabled;
    NSArray *_semanticStyles;
    NSArray *_semanticStylesRegions;
    unsigned long long _maxSemanticStyles;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } primaryCaptureRectCenterPoint;
@property (readonly, nonatomic) double primaryCaptureRectAspectRatio;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryCaptureRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overCaptureRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) char primaryAndOverCaptureCompositingEnabled;
@property (readonly, nonatomic) long long overCaptureStatus;
@property (nonatomic) char automaticallyDimsOverCaptureRegion;

+ (long long)uniqueID;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (void)removeConnection:(id)a0;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)a0 imageQueue:(id)a1 rotationDegrees:(double)a2 size:(struct CGSize { double x0; double x1; })a3;
- (char)isSemanticStyleRenderingEnabled;
- (void)_handleSpatialNotification:(id)a0 payload:(id)a1;
- (id)_initWithSession:(id)a0 makeConnection:(char)a1;
- (void)_setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1 transitionPercentComplete:(double)a2;
- (void)_updateSemanticStyleRenderingSupported;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })captureDeviceTransformForSensorSize:(struct CGSize { double x0; double x1; })a0 previewSize:(struct CGSize { double x0; double x1; })a1 sensorToPreviewVTScalingMode:(id)a2;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint { double x0; double x1; } *)a0 aspectRatio:(double *)a1 uniqueID:(long long *)a2;
- (char)isSemanticStyleRenderingSupported;
- (long long)maxSemanticStyles;
- (char)performContentUpdates:(id /* block */)a0;
- (long long)primaryCaptureRectUniqueID;
- (id)semanticStyle;
- (id)semanticStyles;
- (id)semanticStylesRegions;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1 trueVideoTransitionPercentComplete:(double)a2;
- (void)setSemanticStyle:(id)a0 animated:(char)a1;
- (void)setSemanticStyleRenderingEnabled:(char)a0;
- (void)setSemanticStyles:(id)a0 semanticStylesRegions:(id)a1;

@end
