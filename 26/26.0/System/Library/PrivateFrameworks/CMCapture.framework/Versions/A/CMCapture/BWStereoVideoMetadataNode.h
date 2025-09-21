@interface BWStereoVideoMetadataNode : BWNode {
    struct __CFData { } *_serializedRectificationQuaternion;
    int _consecutiveSpatiallyAggressiveFramesThreshold;
    int _numberOfFramesEvaluatedForAggressiveStatus;
    int _numberOfConsecutiveLuxLevelAggressiveFrames;
    int _numberOfLuxLevelAggressiveFrames;
    int _numberOfConsecutiveFocusDistanceAggressiveFrames;
    int _numberOfFocusDistanceAggressiveFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startingPTS;
    int _aggregateStereoVideoCaptureStatus;
}

+ (void)initialize;

- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithPorts:(id)a0 secondaryPort:(id)a1 cameraInfoByPortType:(id)a2 errStatus:(int *)a3;

@end
