@class MHSchemaMHAcousticFalseTriggerMitigationStarted, MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated, NSData, MHSchemaMHAcousticFalseTriggerMitigationFailed;

@interface MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *scoreGenerated;
@property (nonatomic) BOOL hasScoreGenerated;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteFailed;
- (void)deleteScoreGenerated;
- (void)deleteStartedOrChanged;

@end
