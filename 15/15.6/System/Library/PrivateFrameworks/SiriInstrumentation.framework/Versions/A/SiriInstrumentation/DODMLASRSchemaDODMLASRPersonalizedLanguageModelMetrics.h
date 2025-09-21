@class DODMLASRSchemaDODMLASRModelMetrics, DODMLASRSchemaDODMLASRTranscriptionMetrics, NSData, DODMLASRSchemaDODMLASREvaluationMetrics;

@interface DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char userLocale : 1; } _has;
}

@property (nonatomic) int userLocale;
@property (nonatomic) char hasUserLocale;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptionMetrics *transcriptionMetrics;
@property (nonatomic) char hasTranscriptionMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRModelMetrics *modelMetrics;
@property (nonatomic) char hasModelMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASREvaluationMetrics *evaluationMetrics;
@property (nonatomic) char hasEvaluationMetrics;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEvaluationMetrics;
- (void)deleteModelMetrics;
- (void)deleteTranscriptionMetrics;
- (void)deleteUserLocale;
- (id)suppressMessageUnderConditions;

@end
