@class NSArray, AVCaptureOutputInternal;

@interface AVCaptureOutput : NSObject {
    AVCaptureOutputInternal *_outputInternal;
}

@property (readonly, nonatomic) NSArray *connections;
@property (readonly, nonatomic, getter=isDeferredStartSupported) BOOL deferredStartSupported;
@property (nonatomic, getter=isDeferredStartEnabled) BOOL deferredStartEnabled;

+ (void)initialize;
+ (id)allOutputSubclasses;
+ (id)availableVideoCodecTypesForSourceDevice:(id)a0 sourceFormat:(id)a1 outputDimensions:(struct { int x0; int x1; })a2 fileType:(id)a3 videoCodecTypesAllowList:(id)a4;
+ (long long)dataDroppedReasonFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)supportedProResCodecTypes;
+ (id)supportedProResRawCodecTypes;

- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (id)sinkID;
- (void)setSinkID:(id)a0;
- (void)handleReactionEffectsActiveChangedForDevice:(id)a0;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)removeConnection:(id)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)handleCenterStageActiveChangedForDevice:(id)a0;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleStudioLightingActiveChangedForDevice:(id)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (int)changeSeed;
- (id)session;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)bumpChangeSeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleBackgroundReplacementActiveChangedForDevice:(id)a0;
- (void)setSession:(id)a0;
- (int)_invokeClientCompositingCallbackForSettingsID:(long long)a0 compositingData:(id)a1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleBackgroundBlurActiveChangedForDevice:(id)a0;
- (id)liveConnections;
- (id)_inputForConnection:(id)a0;
- (id)_recommendedAudioOutputSettingsForConnection:(id)a0 sourceSettings:(id)a1 fileType:(id)a2 spatialAudioChannelLayoutTag:(unsigned int)a3;
- (id)_recommendedVideoOutputSettingsForConnection:(id)a0 sourceSettings:(id)a1 videoCodec:(id)a2 isIris:(BOOL)a3 outputFileURL:(id)a4;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (id)connectionWithMediaType:(id)a0;
- (id)firstEnabledConnectionForMediaType:(id)a0;
- (void)getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 mirroredOut:(BOOL *)a1 rollAdjustmentOut:(double *)a2 forConnection:(id)a3;
- (void)handleChangedDynamicAspectRatio:(id)a0 forFormat:(id)a1;
- (void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleVideoStabilizationModeChangedForConnection:(id)a0;
- (BOOL)hasRequiredOutputFormatForConnection:(id)a0;
- (id)initSubclass;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (void)performBlockOnSessionNotifyingThread:(id /* block */)a0;
- (id)recommendedCinematicAudioOutputSettingsForConnection:(id)a0 fileType:(id)a1 isProResCapture:(BOOL)a2;
- (id)recommendedOutputSettingsForConnection:(id)a0 sourceSettings:(id)a1 videoCodecType:(id)a2 fileType:(id)a3 isIris:(BOOL)a4 outputFileURL:(id)a5 spatialAudioChannelLayoutTag:(unsigned int)a6;
- (unsigned int)requiredOutputFormatForConnection:(id)a0;
- (id)transformedMetadataObjectForMetadataObject:(id)a0 connection:(id)a1;
- (void)updateMetadataTransformForSourceFormat:(id)a0 aspectRatio:(id)a1;
- (BOOL)updateVideoSettingsForConnection:(id)a0;

@end
