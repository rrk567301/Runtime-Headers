@class JRSchemaRiskProfile, NSArray, SISchemaVersion, NSData, JRSchemaJRModelInputShapes, JRSchemaJRModelOutputs;

@interface JRSchemaJRInferenceEnded : SISchemaInstrumentationMessage {
    struct { unsigned char trialDisambiguationRate : 1; unsigned char trialConfirmationRate : 1; } _has;
}

@property (retain, nonatomic) JRSchemaJRModelInputShapes *modelInputShapes;
@property (nonatomic) BOOL hasModelInputShapes;
@property (retain, nonatomic) JRSchemaJRModelOutputs *modelOutputs;
@property (nonatomic) BOOL hasModelOutputs;
@property (retain, nonatomic) SISchemaVersion *version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) float trialDisambiguationRate;
@property (nonatomic) BOOL hasTrialDisambiguationRate;
@property (nonatomic) float trialConfirmationRate;
@property (nonatomic) BOOL hasTrialConfirmationRate;
@property (retain, nonatomic) JRSchemaRiskProfile *riskProfile;
@property (nonatomic) BOOL hasRiskProfile;
@property (copy, nonatomic) NSArray *parameterTypes;
@property (copy, nonatomic) NSArray *alreadyPrompteds;
@property (copy, nonatomic) NSArray *callerComponents;
@property (copy, nonatomic) NSArray *candidateHistoryCounts;
@property (copy, nonatomic) NSArray *tupleHistoryCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAlreadyPrompted:(float)a0;
- (void)addCallerComponent:(float)a0;
- (void)addCandidateHistoryCount:(id)a0;
- (void)addParameterType:(float)a0;
- (void)addTupleHistoryCount:(id)a0;
- (float)alreadyPromptedAtIndex:(unsigned long long)a0;
- (unsigned long long)alreadyPromptedCount;
- (float)callerComponentAtIndex:(unsigned long long)a0;
- (unsigned long long)callerComponentCount;
- (id)candidateHistoryCountAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateHistoryCountCount;
- (void)clearAlreadyPrompted;
- (void)clearCallerComponent;
- (void)clearCandidateHistoryCount;
- (void)clearParameterType;
- (void)clearTupleHistoryCount;
- (void)deleteAlreadyPrompted;
- (void)deleteCallerComponent;
- (void)deleteCandidateHistoryCount;
- (void)deleteModelInputShapes;
- (void)deleteModelOutputs;
- (void)deleteParameterType;
- (void)deleteRiskProfile;
- (void)deleteTrialConfirmationRate;
- (void)deleteTrialDisambiguationRate;
- (void)deleteTupleHistoryCount;
- (void)deleteVersion;
- (float)parameterTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterTypeCount;
- (id)suppressMessageUnderConditions;
- (id)tupleHistoryCountAtIndex:(unsigned long long)a0;
- (unsigned long long)tupleHistoryCountCount;

@end
