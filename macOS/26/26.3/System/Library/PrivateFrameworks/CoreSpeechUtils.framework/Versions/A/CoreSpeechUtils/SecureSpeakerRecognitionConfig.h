@class NSArray, SecureMemoryIndex, NSString;

@interface SecureSpeakerRecognitionConfig : NSObject {
    void /* function */ phraseConfig;
    void /* function */ satConfigString;
    void /* function */ psrConfigString;
}

@property (nonatomic, readonly) NSArray *phraseConfig;
@property (nonatomic, readonly) long long numPruningRetentionUtt;
@property (nonatomic, readonly) float pruningExplicitSATThreshold;
@property (nonatomic, readonly) float pruningExplicitPSRThreshold;
@property (nonatomic, readonly) float pruningSATThreshold;
@property (nonatomic, readonly) float pruningPSRThreshold;
@property (nonatomic, readonly) float combinationWeight;
@property (nonatomic, readonly) float implicitProfileThreshold;
@property (nonatomic, readonly) float implicitProfileDeltaThreshold;
@property (nonatomic, readonly) float implicitVTThreshold;
@property (nonatomic, readonly) long long maxEnrollmentUtterances;
@property (nonatomic, readonly) BOOL implicitTrainingEnabled;
@property (nonatomic, readonly) BOOL useTDTIEnrollment;
@property (nonatomic, readonly) SecureMemoryIndex *satMemoryIndex;
@property (nonatomic, readonly) SecureMemoryIndex *psrMemoryIndex;
@property (nonatomic, copy) NSString *satConfigString;
@property (nonatomic, copy) NSString *psrConfigString;
@property (nonatomic, readonly) long long audioDurationProcessIntervalInMillis;
@property (nonatomic, readonly) long long minAudioDurationInMillis;
@property (nonatomic, readonly) long long maxAudioDurationInMillis;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNumPruningRetentionUtt:(long long)a0 pruningExplicitSATThreshold:(float)a1 pruningExplicitPSRThreshold:(float)a2 pruningSATThreshold:(float)a3 pruningPSRThreshold:(float)a4 combinationWeight:(float)a5 implicitProfileThreshold:(float)a6 implicitProfileDeltaThreshold:(float)a7 implicitVTThreshold:(float)a8 maxEnrollmentUtterances:(long long)a9 implicitTrainingEnabled:(BOOL)a10 useTDTIEnrollment:(BOOL)a11 phraseConfig:(id)a12 satMemoryIndex:(id)a13 psrMemoryIndex:(id)a14 satConfig:(id)a15 psrConfig:(id)a16 audioDurationProcessIntervalInMillis:(long long)a17 minAudioDurationInMillis:(long long)a18 maxAudioDurationInMillis:(long long)a19;

@end
