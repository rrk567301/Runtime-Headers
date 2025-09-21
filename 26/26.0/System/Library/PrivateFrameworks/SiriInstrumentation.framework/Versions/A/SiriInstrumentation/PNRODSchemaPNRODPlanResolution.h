@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODPlanResolution : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; unsigned char statementId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) BOOL hasPlanCycleId;
@property (retain, nonatomic) SISchemaUUID *prId;
@property (nonatomic) BOOL hasPrId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) BOOL hasActionStatementId;
@property (nonatomic) unsigned int statementId;
@property (nonatomic) BOOL hasStatementId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *prTotalHandleTime;
@property (nonatomic) BOOL hasPrTotalHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
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
- (void)deleteFailureInfo;
- (void)deletePlanCycleId;
- (void)deletePrId;
- (void)deletePrTotalHandleTime;
- (void)deleteStatementId;

@end
