@class NSData, SISchemaVoiceTriggerMetrics;

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceTriggerMetrics *voiceTrigger;
@property (nonatomic) BOOL hasVoiceTrigger;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteVoiceTrigger;

@end
