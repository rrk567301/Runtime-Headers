@class PRSiriSchemaPRJointResolverCallEnded, PRSiriSchemaPRJointResolverCallFailed, SISchemaUUID, PRSiriSchemaPRJointResolverCallStarted, NSData;

@interface PRSiriSchemaPRJointResolverCallContext : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; } _has;
}

@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) SISchemaUUID *planEventId;
@property (nonatomic) char hasPlanEventId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) char hasActionStatementId;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) char hasTraceId;
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
- (void)deleteActionStatementId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deletePlanEventId;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (id)suppressMessageUnderConditions;

@end
