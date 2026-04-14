@class JRSchemaRiskProfile, SISchemaVersion, NSData, JRSchemaJRModelInputShapes, JRSchemaJRModelOutputs;

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
- (void)deleteModelInputShapes;
- (void)deleteModelOutputs;
- (void)deleteRiskProfile;
- (void)deleteTrialConfirmationRate;
- (void)deleteTrialDisambiguationRate;
- (void)deleteVersion;
- (id)suppressMessageUnderConditions;

@end
