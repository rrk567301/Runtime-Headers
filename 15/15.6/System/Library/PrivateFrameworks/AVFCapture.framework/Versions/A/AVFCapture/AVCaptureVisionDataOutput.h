@class NSString, AVCaptureVisionDataOutputInternal, NSData, NSObject;
@protocol OS_dispatch_queue, AVCaptureVisionDataOutputDelegate;

@interface AVCaptureVisionDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureVisionDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureVisionDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minBurstFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxBurstDuration;
@property (nonatomic) unsigned long long gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned long long maxKeypointsCount;
@property (nonatomic, getter=isFeatureBinningEnabled) char featureBinningEnabled;
@property (nonatomic, getter=isFeatureOrientationAssignmentEnabled) char featureOrientationAssignmentEnabled;
@property (readonly, nonatomic, getter=isDynamicThresholdingSupported) char dynamicThresholdingSupported;
@property (nonatomic, getter=isDynamicThresholdingEnabled) char dynamicThresholdingEnabled;
@property (nonatomic) unsigned long long keypointDetectionFlowType;
@property (readonly, nonatomic, getter=isSubPixelThresholdSupported) char subPixelThresholdSupported;
@property (nonatomic) unsigned long long subPixelThreshold;
@property (readonly, nonatomic, getter=isFeatureMatchingSupported) char featureMatchingSupported;
@property (nonatomic, getter=isFeatureMatchingEnabled) char featureMatchingEnabled;
@property (nonatomic) unsigned long long featureMatchingDescriptorSize;
@property (readonly, nonatomic, getter=isOrientationDistanceThresholdSupported) char orientationDistanceThresholdSupported;
@property (nonatomic) float orientationDistanceThreshold;
@property (readonly, nonatomic, getter=isSigmaDistanceThresholdSupported) char sigmaDistanceThresholdSupported;
@property (nonatomic) float sigmaDistanceThreshold;
@property (readonly, nonatomic, getter=isSquareDistanceDisparityFractionSupported) char squareDistanceDisparityFractionSupported;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (readonly, nonatomic, getter=isHammingDistanceThresholdSupported) char hammingDistanceThresholdSupported;
@property (nonatomic) unsigned long long hammingDistanceThreshold;
@property (readonly, nonatomic, getter=isLACCConfigAndMetadataSupported) char laccConfigAndMetadataSupported;
@property (retain, nonatomic) NSData *laccConfigAndMetadata;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)removeConnection:(id)a0;
- (char)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_initializeClientVisiblePropertiesForSourceDevice:(id)a0;
- (char)_isPropertySupported:(id)a0;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (char)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (char)areRuntimeUpdatesSupported;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (char)isKeypointDetectionFlowTypeSupported:(unsigned long long)a0;
- (float)keypointDetectionThreshold;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (void)setKeypointDetectionThreshold:(float)a0;
- (void)setRuntimeUpdates:(id)a0;
- (void)triggerBurst;

@end
