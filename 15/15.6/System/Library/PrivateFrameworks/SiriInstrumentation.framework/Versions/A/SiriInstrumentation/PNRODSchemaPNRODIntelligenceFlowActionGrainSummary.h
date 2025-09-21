@class NSString, PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODIntelligenceFlowActionGrainSummary : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char statementId : 1; unsigned char numQueriesCreated : 1; unsigned char numActionsCreated : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionId;
@property (nonatomic) char hasActionId;
@property (retain, nonatomic) SISchemaUUID *planId;
@property (nonatomic) char hasPlanId;
@property (retain, nonatomic) SISchemaUUID *clientRequestId;
@property (nonatomic) char hasClientRequestId;
@property (retain, nonatomic) SISchemaUUID *rawQueryEventId;
@property (nonatomic) char hasRawQueryEventId;
@property (nonatomic) long long status;
@property (nonatomic) char hasStatus;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) char hasToolId;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (nonatomic) unsigned int statementId;
@property (nonatomic) char hasStatementId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executionTime;
@property (nonatomic) char hasExecutionTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *appEntityQueryResponseTime;
@property (nonatomic) char hasAppEntityQueryResponseTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) char hasFailureInfo;
@property (nonatomic) unsigned int numQueriesCreated;
@property (nonatomic) char hasNumQueriesCreated;
@property (nonatomic) unsigned int numActionsCreated;
@property (nonatomic) char hasNumActionsCreated;
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
- (void)deleteActionId;
- (void)deleteAppEntityQueryResponseTime;
- (void)deleteBundleId;
- (void)deleteClientRequestId;
- (void)deleteExecutionTime;
- (void)deleteFailureInfo;
- (void)deleteNumActionsCreated;
- (void)deleteNumQueriesCreated;
- (void)deletePlanId;
- (void)deleteRawQueryEventId;
- (void)deleteStatementId;
- (void)deleteStatus;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
