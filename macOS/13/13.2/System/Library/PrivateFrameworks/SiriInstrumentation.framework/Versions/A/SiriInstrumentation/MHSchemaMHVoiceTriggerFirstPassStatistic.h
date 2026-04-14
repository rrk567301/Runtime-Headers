@class NSData;

@interface MHSchemaMHVoiceTriggerFirstPassStatistic : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassPeakScoreHS : 1; unsigned char firstPassPeakScoreJS : 1; unsigned char firstPassTriggerSource : 1; unsigned char recognizerScoreHS : 1; unsigned char recognizerScoreJS : 1; unsigned char triggerScoreHS : 1; unsigned char triggerScoreJS : 1; unsigned char mitigationScore : 1; unsigned char invocationTypeId : 1; unsigned char secondsSinceEpoch : 1; unsigned char repetitionSimilarityScore : 1; unsigned char tdSpeakerRecognizerCombinedScore : 1; } _has;
}

@property (nonatomic) float firstPassPeakScoreHS;
@property (nonatomic) BOOL hasFirstPassPeakScoreHS;
@property (nonatomic) float firstPassPeakScoreJS;
@property (nonatomic) BOOL hasFirstPassPeakScoreJS;
@property (nonatomic) int firstPassTriggerSource;
@property (nonatomic) BOOL hasFirstPassTriggerSource;
@property (nonatomic) float recognizerScoreHS;
@property (nonatomic) BOOL hasRecognizerScoreHS;
@property (nonatomic) float recognizerScoreJS;
@property (nonatomic) BOOL hasRecognizerScoreJS;
@property (nonatomic) float triggerScoreHS;
@property (nonatomic) BOOL hasTriggerScoreHS;
@property (nonatomic) float triggerScoreJS;
@property (nonatomic) BOOL hasTriggerScoreJS;
@property (nonatomic) float mitigationScore;
@property (nonatomic) BOOL hasMitigationScore;
@property (nonatomic) int invocationTypeId;
@property (nonatomic) BOOL hasInvocationTypeId;
@property (nonatomic) long long secondsSinceEpoch;
@property (nonatomic) BOOL hasSecondsSinceEpoch;
@property (nonatomic) float repetitionSimilarityScore;
@property (nonatomic) BOOL hasRepetitionSimilarityScore;
@property (nonatomic) float tdSpeakerRecognizerCombinedScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteTdSpeakerRecognizerCombinedScore;
- (void)deleteFirstPassPeakScoreHS;
- (void)deleteFirstPassPeakScoreJS;
- (void)deleteFirstPassTriggerSource;
- (void)deleteRecognizerScoreHS;
- (void)deleteRecognizerScoreJS;
- (void)deleteTriggerScoreHS;
- (void)deleteTriggerScoreJS;
- (void)deleteMitigationScore;
- (void)deleteInvocationTypeId;
- (void)deleteSecondsSinceEpoch;
- (void)deleteRepetitionSimilarityScore;

@end
