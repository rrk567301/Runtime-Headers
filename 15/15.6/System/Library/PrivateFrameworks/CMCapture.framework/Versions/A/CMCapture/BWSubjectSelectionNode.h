@class NSString, NSDictionary, NSMutableDictionary, SubjectSelectionSession, BWDeviceOrientationMonitor, NSArray;

@interface BWSubjectSelectionNode : BWNode <BWFigVideoCaptureDeviceSubjectSelectionDelegate> {
    NSMutableDictionary *_videoCaptureInputsByPortType;
    NSMutableDictionary *_videoCaptureOutputsByPortType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    NSDictionary *_cameraInfoByPortType;
    struct { int width; int height; } _outputDimensions;
    SubjectSelectionSession *_subjectSelectionSession;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    unsigned int _minLuxLevelNeeded;
    char _deviceOrientationCorrectionEnabled;
    NSArray *_portTypes;
    int _endOfDataInputsCount;
    char _cameraHasDistortionCoefficients;
    char _cameraHasCalibrationValidMaxRadius;
    int _centerStageFramingMode;
    char _gazeSelectionEnabled;
}

@property (readonly, nonatomic) NSDictionary *videoCaptureInputsByPortType;
@property (readonly, nonatomic) NSDictionary *videoCaptureOutputsByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didChangeCenterStageFramingMode:(int)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 cameraInfoByPortType:(id)a1 horizontalSensorBinningFactor:(int)a2 verticalSensorBinningFactor:(int)a3 deviceOrientationCorrectionEnabled:(char)a4 portTypes:(id)a5 cameraHasDistortionCoefficients:(char)a6 cameraHasCalibrationValidMaxRadius:(char)a7 centerStageFramingMode:(int)a8 gazeSelectionEnabled:(char)a9;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
