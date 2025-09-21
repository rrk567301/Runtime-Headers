@class NSDictionary, NSArray, AVCaptureStillImageOutputInternal_Tundra;

@interface AVCaptureStillImageOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureStillImageOutputInternal_Tundra *_internal;
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
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { } *)a0;

- (void)dealloc;
- (id)init;
- (id)_deviceFromActiveDeviceInput;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 imageRequest:(id)a1 error:(id)a2;
- (void)_receiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateHighResMode;
- (void)_updateVideoDecompressorNodeForConnection:(id)a0;
- (id)_videoDecompressionSettings;
- (char)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (char)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (char)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (char)canAddConnectionForMediaType:(id)a0;
- (void)captureStillImageAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureAndInitiateCopyStillImageForRequest:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (long long)defaultVideoFieldModeForConnection:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (char)supportsVideoFieldModeForConnection:(id)a0;
- (char)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (char)supportsVideoMinFrameDurationForConnection:(id)a0;
- (char)supportsVideoMirroringForConnection:(id)a0;
- (char)supportsVideoOrientationForConnection:(id)a0;
- (int)videoDecompressionRequirementForConnection:(id)a0;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;

@end
