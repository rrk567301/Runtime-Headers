@class CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded, CLPInstSchemaCLPCurareAppIntentSampleClassificationFailed, NSData, SISchemaUUID, CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted;

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationFailed *failed;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
