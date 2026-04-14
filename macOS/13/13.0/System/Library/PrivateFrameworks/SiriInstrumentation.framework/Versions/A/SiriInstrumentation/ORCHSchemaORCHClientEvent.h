@class ORCHSchemaORCHDeviceDynamicContext, ORCHSchemaORCHMUXBridgeContext, ORCHSchemaORCHMultiUserResultCandidateReceived, SISchemaInstrumentationMessage, ORCHSchemaORCHServerFallbackContext, ORCHSchemaORCHClientEventMetadata, ORCHSchemaORCHASRBridgeContext, ORCHSchemaORCHResultSelected, ORCHSchemaORCHRequestContext, ORCHSchemaORCHResourceUtilizationMetadata, ORCHSchemaORCHCDMBridgeContext, ORCHSchemaORCHAssetsReported, ORCHSchemaORCHExecutionBridgeContext, ORCHSchemaORCHPommesBridgeContext, ORCHSchemaORCHConversationContextSubmitted, ORCHSchemaORCHResultCandidateReceived, ORCHSchemaORCHMultiUserResultCandidateSelected, NSData, ORCHSchemaORCHFlowOutputSubmitted;

@interface ORCHSchemaORCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ORCHSchemaORCHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ORCHSchemaORCHResourceUtilizationMetadata *resourceUtilizationMetadata;
@property (nonatomic) BOOL hasResourceUtilizationMetadata;
@property (retain, nonatomic) ORCHSchemaORCHRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) ORCHSchemaORCHASRBridgeContext *asrBridgeContext;
@property (nonatomic) BOOL hasAsrBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHCDMBridgeContext *cdmBridgeContext;
@property (nonatomic) BOOL hasCdmBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHExecutionBridgeContext *executionBridgeContext;
@property (nonatomic) BOOL hasExecutionBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHServerFallbackContext *serverFallbackContext;
@property (nonatomic) BOOL hasServerFallbackContext;
@property (retain, nonatomic) ORCHSchemaORCHFlowOutputSubmitted *flowOutputSubmitted;
@property (nonatomic) BOOL hasFlowOutputSubmitted;
@property (retain, nonatomic) ORCHSchemaORCHResultCandidateReceived *resultCandidate;
@property (nonatomic) BOOL hasResultCandidate;
@property (retain, nonatomic) ORCHSchemaORCHResultSelected *resultSelected;
@property (nonatomic) BOOL hasResultSelected;
@property (retain, nonatomic) ORCHSchemaORCHConversationContextSubmitted *contextSubmissionMessage;
@property (nonatomic) BOOL hasContextSubmissionMessage;
@property (retain, nonatomic) ORCHSchemaORCHAssetsReported *availableAssets;
@property (nonatomic) BOOL hasAvailableAssets;
@property (retain, nonatomic) ORCHSchemaORCHDeviceDynamicContext *orchDeviceDynamicContext;
@property (nonatomic) BOOL hasOrchDeviceDynamicContext;
@property (retain, nonatomic) ORCHSchemaORCHPommesBridgeContext *pommesBridgeContext;
@property (nonatomic) BOOL hasPommesBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHMUXBridgeContext *muxBridgeContext;
@property (nonatomic) BOOL hasMuxBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHMultiUserResultCandidateReceived *multiUserResultCandidate;
@property (nonatomic) BOOL hasMultiUserResultCandidate;
@property (retain, nonatomic) ORCHSchemaORCHMultiUserResultCandidateSelected *multiUserResultSelected;
@property (nonatomic) BOOL hasMultiUserResultSelected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteRequestContext;
- (void)deleteResourceUtilizationMetadata;
- (void)deleteAsrBridgeContext;
- (void)deleteCdmBridgeContext;
- (void)deleteExecutionBridgeContext;
- (void)deleteServerFallbackContext;
- (void)deleteFlowOutputSubmitted;
- (void)deleteResultCandidate;
- (void)deleteResultSelected;
- (void)deleteContextSubmissionMessage;
- (void)deleteAvailableAssets;
- (void)deleteOrchDeviceDynamicContext;
- (void)deletePommesBridgeContext;
- (void)deleteMuxBridgeContext;
- (void)deleteMultiUserResultCandidate;
- (void)deleteMultiUserResultSelected;

@end
