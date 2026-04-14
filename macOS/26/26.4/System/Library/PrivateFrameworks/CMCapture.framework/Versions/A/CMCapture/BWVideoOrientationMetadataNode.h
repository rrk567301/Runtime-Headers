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
- (BOOL)hasNonLiveConfigurationChanges;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (int)sourceDeviceType;
- (void)updateRotationDegrees:(int)a0;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (struct OpaqueCMClock { } *)masterClock;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (id)init;
- (void)setSourceDeviceType:(int)a0;
- (void)updateVideoMirrored:(BOOL)a0;
- (int)sourcePosition;
- (void)setSourcePosition:(int)a0;
- (void)dealloc;

@end
