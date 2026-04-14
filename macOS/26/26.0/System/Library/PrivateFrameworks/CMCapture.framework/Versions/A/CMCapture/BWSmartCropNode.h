@class NSString, NSArray, BWFigVideoCaptureDevice, NSMutableDictionary, NSDictionary, NSMutableArray, BWNodeOutput, BWNodeInput;
@protocol RTSCProcessor;

@interface BWSmartCropNode : BWNode <BWSmartCropHomographyProvider, BWFigVideoCaptureDeviceCenterStageDelegate> {
    NSDictionary *_cameraInfoByPortType;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    int _maxLossyCompressionLevel;
    struct { void /* unknown type, empty encoding */ columns[3]; } _cameraExtrinsicMatrix;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSArray *_portTypes;
    BOOL _videoOutputFormatIsLive;
    BOOL _liveReconfigurationInProgress;
    int _processingMode;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _stillCaptureEnabled;
    NSMutableArray *_stillPTSQueue;
    NSMutableDictionary *_stillHomographyByPTS;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stillHomographyQueueLock;
    BOOL _detectionMetadataIsLive;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
}

@property (nonatomic) struct { int width; int height; } outputDimensions;
@property (retain, nonatomic) id<RTSCProcessor> rtscProcessor;
@property (readonly, nonatomic) BWNodeInput *detectionMetadataInput;
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterestForCameraControls;
@property (nonatomic) id /* block */ regionOfInterestForCameraControlsChangedHandler;
@property (nonatomic, getter=isRegionOfInterestForCameraControlsFeedbackEnabled) BOOL regionOfInterestForCameraControlsFeedbackEnabled;
@property (nonatomic) struct { BOOL x0; BOOL x1; BOOL x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; int x4; float x5; float x6; float x7; double x8; float x9; float x10; float x11; } cinematicFramingControls;
@property (nonatomic) BOOL cinematicFramingControlsSuspended;

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)_addMetadataInputsAndOutputsWithMetadataIdentifiers:(id)a0;
- (void)_addVideoCaptureInputAndOutput;
- (id)_createCalibrationDictionaryFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_initRTSCProcessor;
- (BOOL)_isSampleBufferFromPrimaryStream:(struct opaqueCMSampleBuffer { } *)a0 metadataDict:(id)a1;
- (id)_popHomography;
- (void)_pushHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_supportedInputPixelFormats;
- (id)_supportedOutputPixelFormats;
- (int)_updateDetectedObjectsInfo:(id)a0;
- (void)_updateOutputRequirements;
- (void)didChangeCenterStageFramingMode:(int)a0;
- (void)didChangeCenterStageMetadataDeliveryEnabled:(BOOL)a0;
- (void)didChangeCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 cameraInfoByPortType:(id)a1 horizontalSensorBinningFactor:(int)a2 verticalSensorBinningFactor:(int)a3 maxLossyCompressionLevel:(int)a4 cameraExtrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a5 processingMode:(int)a6 stillCaptureEnabled:(BOOL)a7 objectMetadataIdentifiers:(id)a8 captureDevice:(id)a9;
- (void)renderMetadataSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)renderVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)restrictCenterStageFieldOfViewToWide:(BOOL)a0;
- (id)smartCropHomographyDataForPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
