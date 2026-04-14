@class NSString, PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODIntelligenceFlowActionGrainSummary : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionId;
@property (nonatomic) BOOL hasActionId;
@property (retain, nonatomic) SISchemaUUID *planId;
@property (nonatomic) BOOL hasPlanId;
@property (retain, nonatomic) SISchemaUUID *clientRequestId;
@property (nonatomic) BOOL hasClientRequestId;
@property (retain, nonatomic) SISchemaUUID *rawQueryEventId;
@property (nonatomic) BOOL hasRawQueryEventId;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executionTime;
@property (nonatomic) BOOL hasExecutionTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionId;
- (void)deleteBundleId;
- (void)deleteClientRequestId;
- (void)deleteExecutionTime;
- (void)deleteFailureInfo;
- (void)deletePlanId;
- (void)deleteRawQueryEventId;
- (void)deleteStatus;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
