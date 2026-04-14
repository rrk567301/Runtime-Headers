@class NSDictionary, NSArray, AVCaptureStillImageOutputInternal_Tundra;

@interface AVCaptureStillImageOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureStillImageOutputInternal_Tundra *_internal;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled;
@property (readonly, getter=isCapturingStillImage) BOOL capturingStillImage;

+ (void)initialize;
+ (id)new;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { } *)a0;

- (void)dealloc;
- (id)init;
- (id)connectionMediaTypes;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (int)connectionGraphNodeForConnection:(id)a0;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (void)_updateVideoDecompressorNodeForConnection:(id)a0;
- (BOOL)supportsVideoMirroringForConnection:(id)a0;
- (BOOL)supportsVideoOrientationForConnection:(id)a0;
- (BOOL)supportsVideoFieldModeForConnection:(id)a0;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (id)applicationAnalytics;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;
- (int)videoDecompressionRequirementForConnection:(id)a0;
- (long long)defaultVideoFieldModeForConnection:(id)a0;
- (void)captureStillImageAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (id)_deviceFromActiveDeviceInput;
- (id)_videoDecompressionSettings;
- (void)_updateHighResMode;
- (void)configureAndInitiateCopyStillImageForRequest:(id)a0;
- (void)_receiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 imageRequest:(id)a1 error:(id)a2;

@end
