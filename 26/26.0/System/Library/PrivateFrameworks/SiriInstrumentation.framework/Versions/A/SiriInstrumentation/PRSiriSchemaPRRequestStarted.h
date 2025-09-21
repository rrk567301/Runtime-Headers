@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char originTaskStatementId : 1; unsigned char actionStatementId : 1; unsigned char statementId : 1; } _has;
}

@property (nonatomic) unsigned int originTaskStatementId;
@property (nonatomic) BOOL hasOriginTaskStatementId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) BOOL hasActionStatementId;
@property (nonatomic) unsigned int statementId;
@property (nonatomic) BOOL hasStatementId;
@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) BOOL hasPlanCycleId;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteOriginTaskStatementId;
- (void)deletePlanCycleId;
- (void)deleteStatementId;

@end
