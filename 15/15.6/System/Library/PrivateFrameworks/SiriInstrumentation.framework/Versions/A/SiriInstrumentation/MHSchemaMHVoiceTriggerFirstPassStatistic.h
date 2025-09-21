@class NSData;

@interface MHSchemaMHVoiceTriggerFirstPassStatistic : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassPeakScoreHS : 1; unsigned char firstPassPeakScoreJS : 1; unsigned char firstPassTriggerSource : 1; unsigned char recognizerScoreHS : 1; unsigned char recognizerScoreJS : 1; unsigned char triggerScoreHS : 1; unsigned char triggerScoreJS : 1; unsigned char mitigationScore : 1; unsigned char invocationTypeId : 1; unsigned char secondsSinceEpoch : 1; unsigned char repetitionSimilarityScore : 1; unsigned char tdSpeakerRecognizerCombinedScore : 1; unsigned char keywordThresholdHS : 1; unsigned char keywordThresholdJS : 1; unsigned char tdSpeakerRecognizerCombinedThresholdHS : 1; unsigned char tdSpeakerRecognizerCombinedThresholdJS : 1; } _has;
}

@property (nonatomic) float firstPassPeakScoreHS;
@property (nonatomic) char hasFirstPassPeakScoreHS;
@property (nonatomic) float firstPassPeakScoreJS;
@property (nonatomic) char hasFirstPassPeakScoreJS;
@property (nonatomic) int firstPassTriggerSource;
@property (nonatomic) char hasFirstPassTriggerSource;
@property (nonatomic) float recognizerScoreHS;
@property (nonatomic) char hasRecognizerScoreHS;
@property (nonatomic) float recognizerScoreJS;
@property (nonatomic) char hasRecognizerScoreJS;
@property (nonatomic) float triggerScoreHS;
@property (nonatomic) char hasTriggerScoreHS;
@property (nonatomic) float triggerScoreJS;
@property (nonatomic) char hasTriggerScoreJS;
@property (nonatomic) float mitigationScore;
@property (nonatomic) char hasMitigationScore;
@property (nonatomic) int invocationTypeId;
@property (nonatomic) char hasInvocationTypeId;
@property (nonatomic) long long secondsSinceEpoch;
@property (nonatomic) char hasSecondsSinceEpoch;
@property (nonatomic) float repetitionSimilarityScore;
@property (nonatomic) char hasRepetitionSimilarityScore;
@property (nonatomic) float tdSpeakerRecognizerCombinedScore;
@property (nonatomic) char hasTdSpeakerRecognizerCombinedScore;
@property (nonatomic) float keywordThresholdHS;
@property (nonatomic) char hasKeywordThresholdHS;
@property (nonatomic) float keywordThresholdJS;
@property (nonatomic) char hasKeywordThresholdJS;
@property (nonatomic) float tdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic) char hasTdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic) float tdSpeakerRecognizerCombinedThresholdJS;
@property (nonatomic) char hasTdSpeakerRecognizerCombinedThresholdJS;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRepetitionSimilarityScore;
- (void)deleteFirstPassPeakScoreHS;
- (void)deleteFirstPassPeakScoreJS;
- (void)deleteFirstPassTriggerSource;
- (void)deleteInvocationTypeId;
- (void)deleteKeywordThresholdHS;
- (void)deleteKeywordThresholdJS;
- (void)deleteMitigationScore;
- (void)deleteRecognizerScoreHS;
- (void)deleteRecognizerScoreJS;
- (void)deleteSecondsSinceEpoch;
- (void)deleteTdSpeakerRecognizerCombinedScore;
- (void)deleteTdSpeakerRecognizerCombinedThresholdHS;
- (void)deleteTdSpeakerRecognizerCombinedThresholdJS;
- (void)deleteTriggerScoreHS;
- (void)deleteTriggerScoreJS;
- (id)suppressMessageUnderConditions;

@end
