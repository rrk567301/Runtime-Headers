@class NSArray;

@interface SecureSpeakerRecognitionConfigBridge : NSObject

@property (copy, nonatomic) NSArray *phraseConfigs;
@property (nonatomic) unsigned int numPruningRetentionUtt;
@property (nonatomic) float pruningExplicitSATThreshold;
@property (nonatomic) float pruningExplicitPSRThreshold;
@property (nonatomic) float pruningSATThreshold;
@property (nonatomic) float pruningPSRThreshold;
@property (nonatomic) float combinationWeight;
@property (nonatomic) float implicitProfileThreshold;
@property (nonatomic) float implicitProfileDeltaThreshold;
@property (nonatomic) float implicitVTThreshold;
@property (nonatomic) unsigned int maxEnrollmentUtterances;
@property (nonatomic) BOOL implicitTrainingEnabled;
@property (nonatomic) unsigned int multiUserHighScoreThreshold;
@property (nonatomic) unsigned int multiUserLowScoreThreshold;
@property (nonatomic) unsigned int multiUserConfidentScoreThreshold;
@property (nonatomic) unsigned int multiUserDeltaScoreThreshold;
@property (nonatomic) BOOL useTDTIEnrollment;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPhraseConfigs:(id)a0 numPruningRetentionUtt:(unsigned int)a1 pruningExplicitSATThreshold:(float)a2 pruningExplicitPSRThreshold:(float)a3 pruningSATThreshold:(float)a4 pruningPSRThreshold:(float)a5 combinationWeight:(float)a6 implicitProfileThreshold:(float)a7 implicitProfileDeltaThreshold:(float)a8 implicitVTThreshold:(float)a9 maxEnrollmentUtterances:(unsigned int)a10 implicit_training_enabled:(BOOL)a11 multiUserHighScoreThreshold:(unsigned int)a12 multiUserLowScoreThreshold:(unsigned int)a13 multiUserConfidentScoreThreshold:(unsigned int)a14 multiUserDeltaScoreThreshold:(unsigned int)a15 useTDTIEnrollment:(BOOL)a16;
- (void)iteratePhraseConfigs:(id /* block */)a0;

@end
