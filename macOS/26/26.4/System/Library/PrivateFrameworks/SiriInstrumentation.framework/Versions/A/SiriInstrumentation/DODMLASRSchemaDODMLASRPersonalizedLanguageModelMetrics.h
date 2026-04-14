@class DODMLASRSchemaDODMLASRModelMetrics, DODMLASRSchemaDODMLASRTranscriptionMetrics, NSData, DODMLASRSchemaDODMLASREvaluationMetrics;

@interface DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char userLocale : 1; } _has;
}

@property (nonatomic) int userLocale;
@property (nonatomic) BOOL hasUserLocale;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptionMetrics *transcriptionMetrics;
@property (nonatomic) BOOL hasTranscriptionMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRModelMetrics *modelMetrics;
@property (nonatomic) BOOL hasModelMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASREvaluationMetrics *evaluationMetrics;
@property (nonatomic) BOOL hasEvaluationMetrics;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEvaluationMetrics;
- (void)deleteModelMetrics;
- (void)deleteTranscriptionMetrics;
- (void)deleteUserLocale;

@end
