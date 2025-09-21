@class PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODPQAMetrics, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary : SISchemaInstrumentationMessage {
    struct { unsigned char isAppForeground : 1; unsigned char appState : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionId;
@property (nonatomic) char hasActionId;
@property (retain, nonatomic) SISchemaUUID *planId;
@property (nonatomic) char hasPlanId;
@property (retain, nonatomic) SISchemaUUID *clientRequestId;
@property (nonatomic) char hasClientRequestId;
@property (retain, nonatomic) SISchemaUUID *rawQueryEventId;
@property (nonatomic) char hasRawQueryEventId;
@property (retain, nonatomic) SISchemaUUID *executorId;
@property (nonatomic) char hasExecutorId;
@property (nonatomic) char isAppForeground;
@property (nonatomic) char hasIsAppForeground;
@property (nonatomic) long long appState;
@property (nonatomic) char hasAppState;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executionTime;
@property (nonatomic) char hasExecutionTime;
@property (retain, nonatomic) PNRODSchemaPNRODPQAMetrics *pqaMetrics;
@property (nonatomic) char hasPqaMetrics;
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
- (void)deleteActionId;
- (void)deleteAppState;
- (void)deleteClientRequestId;
- (void)deleteExecutionTime;
- (void)deleteExecutorId;
- (void)deleteFailureInfo;
- (void)deleteIsAppForeground;
- (void)deletePlanId;
- (void)deletePqaMetrics;
- (void)deleteRawQueryEventId;
- (id)suppressMessageUnderConditions;

@end
