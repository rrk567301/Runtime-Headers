@class NSString, AVCaptureConnection_Tundra, AVCaptureSession_Tundra, AVCaptureVideoPreviewLayerInternal_Tundra;

@interface AVCaptureVideoPreviewLayer_Tundra : CALayer {
    AVCaptureVideoPreviewLayerInternal_Tundra *_internal;
}

@property (retain, nonatomic) AVCaptureSession_Tundra *session;
@property (readonly, nonatomic) AVCaptureConnection_Tundra *connection;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic, getter=isPreviewing) char previewing;
@property (readonly, nonatomic, getter=isOrientationSupported) char orientationSupported;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic, getter=isMirroringSupported) char mirroringSupported;
@property (nonatomic) char automaticallyAdjustsMirroring;
@property (nonatomic, getter=isMirrored) char mirrored;

+ (void)initialize;
+ (id)layerWithSession:(id)a0;
+ (id)layerWithSessionWithNoConnection:(id)a0;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSession:(id)a0;
- (void)removeConnection:(id)a0;
- (id)pixelBufferAttributes;
- (void)setPixelBufferAttributes:(id)a0;
- (id)_input;
- (void)_updateCaptureDeviceTransformWithConnection:(id)a0 videoGravity:(id)a1 sourceSize:(struct CGSize { double x0; double x1; })a2;
- (id)_videoPreviewUnitPixelBufferAttributes;
- (id)addConnection:(id)a0 error:(id *)a1;
- (char)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (char)canAddConnectionForMediaType:(id)a0;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (long long)defaultVideoFieldModeForConnection:(id)a0;
- (char)defaultVideoMirroringForConnection:(id)a0;
- (long long)defaultVideoOrientationForConnection:(id)a0;
- (void)initCommonStorage;
- (id)initWithSessionWithNoConnection:(id)a0;
- (void)inputFormatDescriptionChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)notReadyError;
- (char)pausePreviewForConnection:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)positionSublayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshFormatDescriptionFromInputPort:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (char)resumePreviewForConnection:(id)a0;
- (char)setPaused:(char)a0 forConnection:(id)a1;
- (void)setSessionWithNoConnection:(id)a0;
- (char)shouldMirrorPreviewForConnection:(id)a0;
- (id)subLayer;
- (char)supportsVideoFieldModeForConnection:(id)a0;
- (char)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (char)supportsVideoMinFrameDurationForConnection:(id)a0;
- (char)supportsVideoMirroringForConnection:(id)a0;
- (char)supportsVideoOrientationForConnection:(id)a0;
- (id)transformedMetadataObjectForMetadataObject:(id)a0;
- (int)videoDecompressionRequirementForConnection:(id)a0;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;

@end
