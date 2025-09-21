@class PRSiriSchemaPRJointResolverCallEnded, PRSiriSchemaPRJointResolverCallFailed, SISchemaUUID, PRSiriSchemaPRJointResolverCallStarted, NSData;

@interface PRSiriSchemaPRJointResolverCallContext : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; } _has;
}

@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *planEventId;
@property (nonatomic) BOOL hasPlanEventId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) BOOL hasActionStatementId;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteActionStatementId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deletePlanEventId;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;

@end
