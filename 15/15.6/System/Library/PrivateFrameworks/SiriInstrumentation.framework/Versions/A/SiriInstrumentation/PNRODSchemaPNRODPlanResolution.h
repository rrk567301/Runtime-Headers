@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODPlanResolution : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; unsigned char statementId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) char hasPlanCycleId;
@property (retain, nonatomic) SISchemaUUID *prId;
@property (nonatomic) char hasPrId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) char hasActionStatementId;
@property (nonatomic) unsigned int statementId;
@property (nonatomic) char hasStatementId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *prTotalHandleTime;
@property (nonatomic) char hasPrTotalHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) char hasFailureInfo;
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
- (void)deleteFailureInfo;
- (void)deletePlanCycleId;
- (void)deletePrId;
- (void)deletePrTotalHandleTime;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
