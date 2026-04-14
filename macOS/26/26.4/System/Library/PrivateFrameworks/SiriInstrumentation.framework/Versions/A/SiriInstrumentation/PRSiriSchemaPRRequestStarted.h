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
- (void)deleteActionStatementId;
- (void)deleteOriginTaskStatementId;
- (void)deletePlanCycleId;
- (void)deleteStatementId;

@end
