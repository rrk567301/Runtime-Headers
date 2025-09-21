@class MHSchemaMHAcousticFalseTriggerMitigationStarted, MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated, NSData, MHSchemaMHAcousticFalseTriggerMitigationFailed;

@interface MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *scoreGenerated;
@property (nonatomic) char hasScoreGenerated;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationFailed *failed;
@property (nonatomic) char hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFailed;
- (void)deleteScoreGenerated;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
