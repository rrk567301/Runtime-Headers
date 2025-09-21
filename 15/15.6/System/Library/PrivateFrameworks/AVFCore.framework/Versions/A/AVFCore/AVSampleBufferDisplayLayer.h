@class AVSampleBufferVideoOutput, NSString, AVSampleBufferVideoRenderer, NSError, CALayer, NSObject;
@protocol OS_dispatch_queue;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVContentKeyRecipientInternal, AVContentKeyRecipient, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {
    CALayer *_contentLayer;
    NSString *_videoGravity;
    struct CGSize { double width; double height; } _presentationSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVSampleBufferVideoOutput *_videoOutput;
}

@property (readonly, nonatomic) char mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) char mayRequireContentKeysForMediaDataProcessing;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char requiresFlushToResumeDecoding;
@property (readonly, getter=isReadyForMoreMediaData) char readyForMoreMediaData;
@property (readonly, nonatomic) char hasSufficientMediaDataForReliablePlaybackStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) char preventsCapture;
@property (nonatomic) char preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic) char preventsAutomaticBackgroundingDuringVideoPlayback;
@property (getter=_disallowsVideoLayerDisplayCompositing, setter=_setDisallowsVideoLayerDisplayCompositing:) char disallowsVideoLayerDisplayCompositing;
@property (nonatomic) AVSampleBufferVideoOutput *output;
@property (readonly, nonatomic) AVSampleBufferVideoRenderer *sampleBufferRenderer;
@property (readonly, nonatomic, getter=_sampleBufferVideoRenderer) AVSampleBufferVideoRenderer *sampleBufferVideoRenderer;
@property (retain) struct OpaqueCMTimebase { } *controlTimebase;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic, getter=isReadyForDisplay) char readyForDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingError;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_destRectForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (id)keyPathsForValuesAffectingOutputObscuredDueToInsufficientExternalProtection;
+ (id)keyPathsForValuesAffectingStatus;

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)flush;
- (void)layerDidBecomeVisible:(char)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setToneMapToStandardDynamicRange:(char)a0;
- (id)_contentLayer;
- (int)_attachToContentKeySession:(id)a0 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a1 failedSinceAlreadyAttachedToAnotherSession:(char *)a2;
- (char)_attachedToExternalContentKeySession;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)a0 presentationSize:(struct CGSize { double x0; double x1; })a1 videoGravityShouldTriggerAnimation:(char)a2;
- (void)_updatePresentationSize:(struct CGSize { double x0; double x1; })a0;
- (id)contentKeySession;
- (struct __CVBuffer { } *)copyDisplayedPixelBuffer;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)a0;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
- (void)expire;
- (void)flushAndRemoveImage;
- (void)flushWithRemovalOfDisplayedImage:(char)a0 completionHandler:(id /* block */)a1;
- (id)makeVideoRenderer;
- (void)postVideoRectDidChangeNotification;
- (void)prerollDecodeWithCompletionHandler:(id /* block */)a0;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (char)setRenderSynchronizer:(id)a0 error:(id *)a1;
- (void)stopRequestingMediaData;
- (id)videoPerformanceMetrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;

@end
