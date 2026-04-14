@class VKCImageAnalysisResult, NSBezierPath, VKCImageSubjectGlowLayer, CALayer, CIContext, VKCRemoveBackgroundRequestHandler, NSValue, NSObject, NSImage, VKCRemoveBackgroundResult, CAPackage;
@protocol OS_dispatch_queue, VKCImageSubjectBaseViewDelegate;

@interface VKCImageSubjectBaseView : VKCImageBaseOverlayView

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) CALayer *colorLayer;
@property (retain, nonatomic) CALayer *imageHighlightLayer;
@property (retain, nonatomic) CALayer *imageHighlightLayerContainer;
@property (retain, nonatomic) CALayer *imageHighlightLayerContainerShadow;
@property (retain, nonatomic) VKCImageSubjectGlowLayer *glowLayer;
@property (retain, nonatomic) CAPackage *pulsePackage;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskNormalizedCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subjectNormalizedCropRect;
@property (retain, nonatomic) NSBezierPath *normalizedSubjectPath;
@property (nonatomic) unsigned long long subjectPathIndex;
@property (nonatomic) BOOL subjectHighlightFeatureFlagEnabled;
@property (readonly, nonatomic) VKCImageAnalysisResult *analysisResult;
@property (nonatomic) unsigned long long loadMaskRequestStatus;
@property (nonatomic) unsigned long long loadMaskIndex;
@property (nonatomic) BOOL loadImageRequested;
@property (retain) CIContext *maskLoadContext;
@property (retain, nonatomic) VKCRemoveBackgroundRequestHandler *removeBackgroundRequestHandler;
@property (weak, nonatomic) id<VKCImageSubjectBaseViewDelegate> baseSubjectDelegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } subjectFrame;
@property (nonatomic) BOOL glowLayerActive;
@property (readonly, nonatomic) CALayer *pulseLayer;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) NSValue *burstPoint;
@property (nonatomic) struct __CVBuffer { } *subjectMaskBuffer;
@property (readonly, nonatomic) NSBezierPath *subjectPathInBoundsCoordinates;
@property (retain, nonatomic) NSImage *subjectImage;
@property (nonatomic) long long imageOrientation;
@property (retain, nonatomic) VKCRemoveBackgroundResult *maskRemoveBackgroundResult;
@property (retain, nonatomic) VKCRemoveBackgroundResult *imageRemoveBackgroundResult;
@property (retain, nonatomic) NSImage *customImageForRemoveBackground;

- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRecognitionResult:(id)a0;
- (void)loadImageSubjectIfNecessaryWithCompletion:(id /* block */)a0;
- (void)beginImageSubjectAnalysisWithDelayIfNecessary;
- (void)showPulseAnimationWithViewScale:(double)a0;
- (void)configurePulseAnimationWithViewScale:(double)a0;
- (id)loadPulsePackage;
- (void)processPath;
- (void)updateForImageBoundsChangeIfNecessary;
- (void)_updateForImageBoundsChange;
- (BOOL)subjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertViewPointToImagePixels:(struct CGPoint { double x0; double x1; })a0 isInImageBounds:(BOOL *)a1;
- (void)loadSubjectMaskIfNecessary;
- (void)sendSubjectAnalyticsEventWithEventType:(long long)a0 interactionType:(long long)a1 subjectFound:(BOOL)a2 processingDuration:(double)a3;

@end
