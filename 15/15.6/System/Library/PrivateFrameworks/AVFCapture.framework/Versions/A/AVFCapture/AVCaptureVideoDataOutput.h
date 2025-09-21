@class NSArray, NSDictionary, NSString, NSObject, AVCaptureVideoDataOutputInternal;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureVideoDataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;
@property (nonatomic) char alwaysDiscardsLateVideoFrames;
@property (nonatomic) char automaticallyConfiguresOutputBufferDimensions;
@property (nonatomic) char deliversPreviewSizedOutputBuffers;
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
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeConnection:(id)a0;
- (char)isSceneStabilityMetadataEnabled;
- (char)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_setMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateAvailableVideoCVPixelFormatTypesForConnection:(id)a0;
- (void)_updateDeliversPreviewSizedOutputBuffersForConnection:(id)a0 sessionPreset:(id)a1;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (char)_updateVideoSettingsForConnection:(id)a0 connectionBeingAdded:(char)a1;
- (id)addConnection:(id)a0 error:(id *)a1;
- (char)allLossyVideoCVPixelFormatTypesEnabled;
- (char)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)a0;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)fullyPopulatedVideoSettingsForSettingsDictionary:(id)a0 connection:(id)a1;
- (id)getTransformedDetectedObjectsInfoFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 connection:(id)a1;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (char)hasRequiredOutputFormatForConnection:(id)a0;
- (char)isSceneStabilityMetadataSupported;
- (char)isVideoSettingsAspectRatioOverrideEnabled;
- (char)isVideoSettingsAspectRatioOverrideOptimized;
- (char)isVideoSettingsAspectRatioOverrideSupported;
- (char)isVideoSettingsDimensionsOverrideEnabled;
- (id)outputScalingModeForSourceFormat:(id)a0;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)a0;
- (id)recommendedVideoSettingsForVideoCodecType:(id)a0 assetWriterOutputFileType:(id)a1;
- (id)recommendedVideoSettingsForVideoCodecType:(id)a0 assetWriterOutputFileType:(id)a1 outputFileURL:(id)a2;
- (id)requestedBufferAttachments;
- (unsigned int)requiredOutputFormatForConnection:(id)a0;
- (void)setAllLossyVideoCVPixelFormatTypesEnabled:(char)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (void)setRequestedBufferAttachments:(id)a0;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;
- (void)setSceneStabilityMetadataEnabled:(char)a0;
- (void)setVideoSettingsAspectRatioOverrideEnabled:(char)a0;
- (void)setVideoSettingsDimensionsOverrideEnabled:(char)a0;
- (id)supportedAssetWriterOutputFileTypes;
- (id)supportedVideoSettingsKeys;
- (char)updateVideoSettingsForConnection:(id)a0;
- (id)vettedVideoSettingsForSettingsDictionary:(id)a0 connection:(id)a1;

@end
