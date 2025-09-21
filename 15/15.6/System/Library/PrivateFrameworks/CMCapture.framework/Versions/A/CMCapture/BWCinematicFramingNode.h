@class BWDeviceOrientationMonitor, NSString, VCCamera, NSArray, NSMutableDictionary, NSDictionary, VCProcessor, BWNodeOutput;

@interface BWCinematicFramingNode : BWNode <BWFigVideoCaptureDeviceCenterStageDelegate, BWFigVideoCaptureDeviceManualCinematicFramingDelegate, BWCinematicFramingStatesProvider> {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    NSDictionary *_cameraInfoByPortType;
    struct { int width; int height; } _outputDimensions;
    struct { VCCamera *inputCamera; VCCamera *outputCamera; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputROI; } _stillCaptureQueue[2];
    unsigned int _stillCaptureEnqueueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stillCaptureQueueLock;
    VCProcessor *_vcProcessor;
    struct { char autoFramingEnabled; char fisheyeEffectEnabled; char fieldOfViewRestrictedToWide; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputFramingRectOfInterest; int centerStageFramingMode; float videoZoomFactor; float panningAngleX; float panningAngleY; double manualFramingDefaultZoomFactor; float defaultVirtualCameraRotationAngleX; float defaultVirtualCameraRotationAngleY; float defaultVirtualCameraRotationAngleZ; } _cinematicFramingControls;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    unsigned int _maxPeopleDetected;
    unsigned int _minLuxLevelNeeded;
    char _stillImageCaptureEnabled;
    char _deviceOrientationCorrectionEnabled;
    char _outputCameraResetInFlight;
    char _oneShotFramingInFlight;
    int _maxLossyCompressionLevel;
    NSArray *_portTypes;
    int _endOfDataVideoInputsCount;
    int _endOfDataMetadataInputsCount;
    char _videoOutputFormatIsLive;
    char _metadataOutputFormatIsLive;
    char _cameraHasDistoritionCoefficients;
    char _cameraHasCalibrationValidMaxRadius;
    char _cinematicFramingControlsSuspended;
    char _regionOfInterestForCameraControlsEnabled;
    id /* block */ _regionOfInterestForCameraControlsChangedHandler;
    unsigned long long _pipelineType;
    char _centerStageMetadataDeliveryEnabled;
}

@property (readonly, nonatomic) NSMutableDictionary *videoCaptureInputsByPortType;
@property (readonly, nonatomic) BWNodeOutput *videoCaptureOutput;
@property (readonly, nonatomic) NSMutableDictionary *detectionMetadataInputsByPortType;
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic) double manualFramingVideoZoomFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterestForCameraControls;
@property (nonatomic) id /* block */ regionOfInterestForCameraControlsChangedHandler;
@property (nonatomic, getter=isRegionOfInterestForCameraControlsFeedbackEnabled) char regionOfInterestForCameraControlsFeedbackEnabled;
@property (nonatomic) struct { char x0; char x1; char x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; int x4; float x5; float x6; float x7; double x8; float x9; float x10; float x11; } cinematicFramingControls;
@property (nonatomic) char cinematicFramingControlsSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)startPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)panWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)performOneShotFraming;
- (void)resetFraming;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)copyCameraStatesForPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)didChangeCenterStageFramingMode:(int)a0;
- (void)didChangeCenterStageMetadataDeliveryEnabled:(char)a0;
- (void)didChangeCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 cameraInfoByPortType:(id)a1 horizontalSensorBinningFactor:(int)a2 verticalSensorBinningFactor:(int)a3 deviceOrientationCorrectionEnabled:(char)a4 stillImageCaptureEnabled:(char)a5 objectMetadataIdentifiers:(id)a6 maxLossyCompressionLevel:(int)a7 portTypes:(id)a8 cinematicFramingControls:(struct { char x0; char x1; char x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; int x4; float x5; float x6; float x7; double x8; float x9; float x10; float x11; })a9 cameraHasDistortionCoefficients:(char)a10 cameraHasCalibrationValidMaxRadius:(char)a11 centerStageMetadataDeliveryEnabled:(char)a12 pipelineType:(unsigned long long)a13;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)restrictCenterStageFieldOfViewToWide:(char)a0;

@end
