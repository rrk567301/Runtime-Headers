@class NSArray, NSString;

@interface SecureSpeakerRecognitionConfig : NSObject {
    void /* unknown type, empty encoding */ phraseConfig;
    void /* unknown type, empty encoding */ satConfigString;
    void /* unknown type, empty encoding */ psrConfigString;
}

@property (nonatomic, readonly) NSArray *phraseConfig;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ numPruningRetentionUtt;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningExplicitSATThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningExplicitPSRThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningSATThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pruningPSRThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ combinationWeight;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitProfileThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitProfileDeltaThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitVTThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxEnrollmentUtterances;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ implicitTrainingEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ useTDTIEnrollment;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ satMemoryIndex;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ psrMemoryIndex;
@property (nonatomic, copy) NSString *satConfigString;
@property (nonatomic, copy) NSString *psrConfigString;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ audioDurationProcessIntervalInMillis;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ minAudioDurationInMillis;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxAudioDurationInMillis;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNumPruningRetentionUtt:(long long)a0 pruningExplicitSATThreshold:(float)a1 pruningExplicitPSRThreshold:(float)a2 pruningSATThreshold:(float)a3 pruningPSRThreshold:(float)a4 combinationWeight:(float)a5 implicitProfileThreshold:(float)a6 implicitProfileDeltaThreshold:(float)a7 implicitVTThreshold:(float)a8 maxEnrollmentUtterances:(long long)a9 implicitTrainingEnabled:(char)a10 useTDTIEnrollment:(char)a11 phraseConfig:(id)a12 satMemoryIndex:(id)a13 psrMemoryIndex:(id)a14 satConfig:(id)a15 psrConfig:(id)a16 audioDurationProcessIntervalInMillis:(long long)a17 minAudioDurationInMillis:(long long)a18 maxAudioDurationInMillis:(long long)a19;

@end
