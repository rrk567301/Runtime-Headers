@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char originTaskStatementId : 1; unsigned char actionStatementId : 1; unsigned char statementId : 1; } _has;
}

@property (nonatomic) unsigned int originTaskStatementId;
@property (nonatomic) char hasOriginTaskStatementId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) char hasActionStatementId;
@property (nonatomic) unsigned int statementId;
@property (nonatomic) char hasStatementId;
@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) char hasPlanCycleId;
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
- (void)deleteActionStatementId;
- (void)deleteOriginTaskStatementId;
- (void)deletePlanCycleId;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
