@class NSDictionary, NSArray, AVCaptureStillImageOutputInternal;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal *_internal;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled;
@property (readonly, nonatomic, getter=isCameraSensorOrientationCompensationSupported) BOOL cameraSensorOrientationCompensationSupported;
@property (nonatomic, getter=isCameraSensorOrientationCompensationEnabled) BOOL cameraSensorOrientationCompensationEnabled;
@property (readonly, getter=isCapturingStillImage) BOOL capturingStillImage;

+ (id)new;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct __CFDictionary { } *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface { } *)a0 size:(unsigned long long)a1 metadata:(id)a2;

- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)handleReactionEffectsActiveChangedForDevice:(id)a0;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)removeConnection:(id)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)handleCenterStageActiveChangedForDevice:(id)a0;
- (void)_updateCameraSensorOrientationCompensationSupportedForDevice:(id)a0;
- (void)handleStudioLightingActiveChangedForDevice:(id)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (id)init;
- (void)handleBackgroundReplacementActiveChangedForDevice:(id)a0;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)a0;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleBackgroundBlurActiveChangedForDevice:(id)a0;
- (BOOL)isLensStabilizationDuringBracketedCaptureSupported;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (BOOL)_bracketedSettingsAreValid:(id)a0 fromConnection:(id)a1 exceptionReason:(id *)a2;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)a0 fromConnection:(id)a1;
- (id)_figCaptureStillImageSettingsForConnection:(id)a0;
- (BOOL)_preparedForBracketedCaptureWithSettings:(id)a0;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)a0;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)a0;
- (void)captureStillImageAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)a0 withSettingsArray:(id)a1 completionHandler:(id /* block */)a2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPreparedBracketIfNeeded;
- (id)firstActiveConnection;
- (void)handleNotificationForPrepareRequest:(id)a0 withPayload:(id)a1;
- (void)handleNotificationForRequest:(id)a0 withPayload:(id)a1 imageIsEV0:(BOOL *)a2;
- (unsigned int)imageDataFormatType;
- (BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
- (BOOL)isNoiseReductionEnabled;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)a0 withSettingsArray:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })previewImageSize;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)a0;
- (void)setNoiseReductionEnabled:(BOOL)a0;
- (void)setPreviewImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setShutterSound:(unsigned int)a0;
- (unsigned int)shutterSound;
- (void)updateSISSupportedForSourceDevice:(id)a0;

@end
