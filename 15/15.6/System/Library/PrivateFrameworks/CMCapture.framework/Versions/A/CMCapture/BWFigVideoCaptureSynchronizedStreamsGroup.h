@class BWFigCaptureSynchronizedStreamsGroup, NSArray, NSDictionary, BWFigVideoCaptureStream;

@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {
    NSArray *_activeStreams;
    NSDictionary *_cameraViewMatricesByPortType;
    NSDictionary *_cameraPoseMatricesByPortType;
    char _readOnly;
    char _atomicMasterSlaveReconfigurationSupported;
    char _masterConfigurationSupported;
    BWFigVideoCaptureStream *_currentMasterStream;
    NSDictionary *_currentSlaveConfigurationsByPortType;
    int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    int _maximumNumberOfSlaveStreamsWithFrameProcessingEnabled;
    int _maximumNumberOfEnabledSlaveTimeMachines;
    char _statsMasterHasBeenSet;
}

@property (readonly, nonatomic) BWFigCaptureSynchronizedStreamsGroup *syncGroup;
@property (readonly, nonatomic) NSArray *activePortTypes;
@property (readonly, nonatomic) char minimumMasterToSlaveFrameRateRatioSupported;
@property (readonly, nonatomic) char maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (readonly, nonatomic) char maximumNumberOfSlaveStreamsWithFrameProcessingEnabledSupported;
@property (readonly, nonatomic) NSDictionary *clientBaseZoomFactorsByPortType;
@property (copy, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (readonly, nonatomic) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream;

+ (void)initialize;

- (void)dealloc;
- (id)cameraPoseMatrixForPortType:(id)a0;
- (id)cameraViewMatrixForPortType:(id)a0;
- (id)initWithSynchronizedStreamsGroup:(id)a0 activeStreams:(id)a1 readOnly:(char)a2 baseZoomFactorOverrides:(id)a3 clientBaseZoomFactorsByPortType:(id)a4 error:(int *)a5;
- (unsigned int)minimumMasterToSlaveFrameRateRatio;
- (int)setCameraControlsStatisticsMasterStream:(id)a0;
- (int)setMasterStream:(id)a0 allStreams:(id)a1;
- (void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)a0;
- (void)setMaximumNumberOfSlaveStreamsWithFrameProcessingEnabled:(int)a0;
- (void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)a0;
- (void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)a0;

@end
