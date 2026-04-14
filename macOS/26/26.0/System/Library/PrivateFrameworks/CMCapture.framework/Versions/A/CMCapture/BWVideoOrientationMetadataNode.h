@class BWVideoOrientationTimeMachine, NSObject;
@protocol OS_dispatch_queue;

@interface BWVideoOrientationMetadataNode : BWNode {
    struct OpaqueCMClock { } *_clock;
    struct OpaqueCMClock { } *_masterClock;
    int _rotationDegrees;
    BOOL _videoMirrored;
    int _sourcePosition;
    int _sourceDeviceType;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    unsigned int _localIDOfOrientationMetadata;
    BOOL _recordVideoOrientationAndMirroringChanges;
    BOOL _physicalMirroringForMovieRecordingEnabled;
    BOOL _flipMetadataHorizontally;
    BOOL _recording;
    int _exifOrientation;
    struct OpaqueCMBlockBuffer *_bbufCache[8];
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) BWVideoOrientationTimeMachine *videoOrientationTimeMachine;

+ (void)initialize;

- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (int)sourceDeviceType;
- (struct OpaqueCMClock { } *)masterClock;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (int)sourcePosition;
- (void)dealloc;
- (void)setSourcePosition:(int)a0;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (void)updateRotationDegrees:(int)a0;
- (id)init;
- (void)updateVideoMirrored:(BOOL)a0;
- (void)setSourceDeviceType:(int)a0;

@end
