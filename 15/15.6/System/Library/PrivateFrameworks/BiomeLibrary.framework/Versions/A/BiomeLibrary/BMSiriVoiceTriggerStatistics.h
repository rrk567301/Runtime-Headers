@class NSString, NSDate;

@interface BMSiriVoiceTriggerStatistics : BMEventBase <BMStoreData> {
    char _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) double firstPassPeakScoreHS;
@property (nonatomic) char hasFirstPassPeakScoreHS;
@property (readonly, nonatomic) double firstPassPeakScoreJS;
@property (nonatomic) char hasFirstPassPeakScoreJS;
@property (readonly, nonatomic) int firstPassTriggerSource;
@property (nonatomic) char hasFirstPassTriggerSource;
@property (readonly, nonatomic) double recognizerScoreHS;
@property (nonatomic) char hasRecognizerScoreHS;
@property (readonly, nonatomic) double recognizerScoreJS;
@property (nonatomic) char hasRecognizerScoreJS;
@property (readonly, nonatomic) double triggerScoreHS;
@property (nonatomic) char hasTriggerScoreHS;
@property (readonly, nonatomic) double triggerScoreJS;
@property (nonatomic) char hasTriggerScoreJS;
@property (readonly, nonatomic) double mitigationScore;
@property (nonatomic) char hasMitigationScore;
@property (readonly, nonatomic) int invocationTypeID;
@property (nonatomic) char hasInvocationTypeID;
@property (readonly, nonatomic) double repetitionSimilarityScore;
@property (nonatomic) char hasRepetitionSimilarityScore;
@property (readonly, nonatomic) double tdSpeakerRecognizerCombinedScore;
@property (nonatomic) char hasTdSpeakerRecognizerCombinedScore;
@property (readonly, nonatomic) double hwSampleRate;
@property (nonatomic) char hasHwSampleRate;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) double keywordThresholdHS;
@property (nonatomic) char hasKeywordThresholdHS;
@property (readonly, nonatomic) double keywordThresholdJS;
@property (nonatomic) char hasKeywordThresholdJS;
@property (readonly, nonatomic) double tdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic) char hasTdSpeakerRecognizerCombinedThresholdHS;
@property (readonly, nonatomic) double tdSpeakerRecognizerCombinedThresholdJS;
@property (nonatomic) char hasTdSpeakerRecognizerCombinedThresholdJS;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithAbsoluteTimestamp:(id)a0 firstPassPeakScoreHS:(id)a1 firstPassPeakScoreJS:(id)a2 firstPassTriggerSource:(id)a3 recognizerScoreHS:(id)a4 recognizerScoreJS:(id)a5 triggerScoreHS:(id)a6 triggerScoreJS:(id)a7 mitigationScore:(id)a8 invocationTypeID:(id)a9 repetitionSimilarityScore:(id)a10 tdSpeakerRecognizerCombinedScore:(id)a11 hwSampleRate:(id)a12 configVersion:(id)a13 keywordThresholdHS:(id)a14 keywordThresholdJS:(id)a15 tdSpeakerRecognizerCombinedThresholdHS:(id)a16 tdSpeakerRecognizerCombinedThresholdJS:(id)a17;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(id)a0 firstPassPeakScoreHS:(id)a1 firstPassPeakScoreJS:(id)a2 firstPassTriggerSource:(id)a3 recognizerScoreHS:(id)a4 recognizerScoreJS:(id)a5 triggerScoreHS:(id)a6 triggerScoreJS:(id)a7 mitigationScore:(id)a8 invocationTypeID:(id)a9 repetitionSimilarityScore:(id)a10 tdSpeakerRecognizerCombinedScore:(id)a11 hwSampleRate:(id)a12 configVersion:(id)a13;

@end
