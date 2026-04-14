@class PRSiriSchemaPRRequestStarted, PRSiriSchemaPRRequestFailed, NSData, SISchemaUUID, PRSiriSchemaPRRequestEnded;

@interface PRSiriSchemaPRRequestContext : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; } _has;
}

@property (retain, nonatomic) PRSiriSchemaPRRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) PRSiriSchemaPRRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) PRSiriSchemaPRRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *planEventId;
@property (nonatomic) BOOL hasPlanEventId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) BOOL hasActionStatementId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteActionStatementId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deletePlanEventId;
- (void)deleteStartedOrChanged;

@end
