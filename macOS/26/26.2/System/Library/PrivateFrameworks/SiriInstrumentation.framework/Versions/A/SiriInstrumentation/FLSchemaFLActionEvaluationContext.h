@class FLSchemaFLActionEvaluationStarted, NSData, FLSchemaFLActionEvaluationEnded, SISchemaUUID, FLSchemaFLActionEvaluationFailed;

@interface FLSchemaFLActionEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLActionEvaluationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) FLSchemaFLActionEvaluationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) FLSchemaFLActionEvaluationFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
