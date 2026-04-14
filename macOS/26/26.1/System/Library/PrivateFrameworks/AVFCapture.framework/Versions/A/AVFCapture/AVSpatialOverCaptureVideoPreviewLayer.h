@class NSString, CALayer, NSArray;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _primaryCaptureRectLock;
    struct CGPoint { double x; double y; } _primaryCaptureRectCenterPoint;
    double _primaryCaptureRectAspectRatio;
    double _primaryCaptureRectTrueVideoTransitionPercentComplete;
    double _primaryCaptureRectSmartFramingTransitionPercentComplete;
    NSString *_primaryCaptureRectSmartFramingTransitionTargetFieldOfView;
    long long _primaryCaptureRectUniqueID;
    BOOL _lastCamerasMountedInLandscapeOrientation;
    BOOL _havePendingPrimaryCaptureRectChange;
    BOOL _primaryAndOverCaptureCompositingEnabled;
    long long _overCaptureStatus;
    BOOL _isPresentationLayer;
    BOOL _automaticallyDimsOverCaptureRegion;
    CALayer *_topDimmingOverlay;
    CALayer *_bottomDimmingOverlay;
    double _lastAspectCenterUpdateTime;
    BOOL _semanticStyleRenderingSupported;
    BOOL _semanticStyleRenderingEnabled;
    NSArray *_semanticStyles;
    NSArray *_semanticStylesRegions;
    unsigned long long _maxSemanticStyles;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } primaryCaptureRectCenterPoint;
@property (readonly, nonatomic) double primaryCaptureRectAspectRatio;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryCaptureRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overCaptureRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) BOOL primaryAndOverCaptureCompositingEnabled;
@property (readonly, nonatomic) long long overCaptureStatus;
@property (nonatomic) BOOL automaticallyDimsOverCaptureRegion;

+ (long long)uniqueID;

- (BOOL)isSemanticStyleRenderingSupported;
- (id)initWithLayer:(id)a0;
- (id)semanticStyle;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)_updateSemanticStyleRenderingSupported;
- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (void)_setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1 trueVideoTransitionPercentComplete:(double)a2 smartFramingTransitionPercentComplete:(double)a3 smartFramingTransitionTargetFieldOfView:(id)a4;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)a0 imageQueue:(id)a1 rotationDegrees:(double)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)getPrimaryCaptureRectWithCamerasMountedInLandscapeOrientation:(BOOL)a0 center:(struct CGPoint { double x0; double x1; } *)a1 aspectRatio:(double *)a2 uniqueID:(long long *)a3;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)isSemanticStyleRenderingEnabled;
- (void)removeConnection:(id)a0;
- (id)_initWithSession:(id)a0 makeConnection:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })captureDeviceTransformForSensorSize:(struct CGSize { double x0; double x1; })a0 previewSize:(struct CGSize { double x0; double x1; })a1 sensorToPreviewVTScalingMode:(id)a2 applyDynamicAspectRatio:(BOOL)a3;
- (void)layoutSublayers;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1 smartFramingTransitionPercentComplete:(double)a2 smartFramingTransitionTargetFieldOfView:(id)a3;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setSemanticStyleRenderingEnabled:(BOOL)a0;
- (long long)primaryCaptureRectUniqueID;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint { double x0; double x1; } *)a0 aspectRatio:(double *)a1 uniqueID:(long long *)a2;
- (id)semanticStyles;
- (BOOL)performContentUpdates:(id /* block */)a0;
- (void)setSemanticStyles:(id)a0 semanticStylesRegions:(id)a1;
- (void)dealloc;
- (id)semanticStylesRegions;
- (long long)maxSemanticStyles;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 centerPoint:(struct CGPoint { double x0; double x1; })a1 trueVideoTransitionPercentComplete:(double)a2;
- (void)_updatePrimaryCaptureRectWithCamerasMountedInLandscapeOrientation:(BOOL)a0 center:(struct CGPoint { double x0; double x1; } *)a1 aspectRatio:(double *)a2;
- (void)_handleSpatialNotification:(id)a0 payload:(id)a1;

@end
