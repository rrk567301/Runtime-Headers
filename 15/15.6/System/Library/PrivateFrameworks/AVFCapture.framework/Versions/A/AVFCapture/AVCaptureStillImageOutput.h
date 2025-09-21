@class NSDictionary, NSArray, AVCaptureStillImageOutputInternal;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal *_internal;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) char stillImageStabilizationSupported;
@property (nonatomic) char automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) char stillImageStabilizationActive;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) char highResolutionStillImageOutputEnabled;
@property (readonly, getter=isCapturingStillImage) char capturingStillImage;

+ (id)new;
+ (void)initialize;
+ (struct __CFDictionary { } *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface { } *)a0 size:(unsigned long long)a1 metadata:(id)a2;
+ (unsigned long long)maxStillImageJPEGDataSize;

- (void)dealloc;
- (id)init;
- (void)removeConnection:(id)a0;
- (char)canAddConnection:(id)a0 failureReason:(id *)a1;
- (char)_bracketedSettingsAreValid:(id)a0 fromConnection:(id)a1 exceptionReason:(id *)a2;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)a0 fromConnection:(id)a1;
- (id)_figCaptureStillImageSettingsForConnection:(id)a0;
- (char)_preparedForBracketedCaptureWithSettings:(id)a0;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(char)a0;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)a0;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)captureStillImageAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)a0 withSettingsArray:(id)a1 completionHandler:(id /* block */)a2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPreparedBracketIfNeeded;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)firstActiveConnection;
- (void)handleBackgroundBlurActiveChangedForDevice:(id)a0;
- (void)handleBackgroundReplacementActiveChangedForDevice:(id)a0;
- (void)handleCenterStageActiveChangedForDevice:(id)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)handleNotificationForPrepareRequest:(id)a0 withPayload:(id)a1;
- (void)handleNotificationForRequest:(id)a0 withPayload:(id)a1 imageIsEV0:(char *)a2;
- (void)handleReactionEffectsActiveChangedForDevice:(id)a0;
- (void)handleStudioLightingActiveChangedForDevice:(id)a0;
- (char)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (unsigned int)imageDataFormatType;
- (char)isLensStabilizationDuringBracketedCaptureEnabled;
- (char)isLensStabilizationDuringBracketedCaptureSupported;
- (char)isNoiseReductionEnabled;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)a0 withSettingsArray:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })previewImageSize;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(char)a0;
- (void)setNoiseReductionEnabled:(char)a0;
- (void)setPreviewImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setShutterSound:(unsigned int)a0;
- (void)setSquareCropEnabled:(char)a0;
- (unsigned int)shutterSound;
- (char)squareCropEnabled;
- (void)updateSISSupportedForSourceDevice:(id)a0;

@end
