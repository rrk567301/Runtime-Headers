@class PNRODSchemaPNRODIntelligenceFlowSessionSummary, PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary, SISchemaInstrumentationMessage, PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary, PNRODSchemaPNRODScheduleDebugSummary, PNRODSchemaPNRODIntelligenceFlowRequestGrainSummary, PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary, PNRODSchemaPNRODIntelligenceFlowPlannerComponentSummary, PNRODSchemaPNRODSiriTurnGrainSummary, PNRODSchemaPNRODClientEventMetadata, NSData, PNRODSchemaPNRODIntelligenceFlowActionGrainSummary, PNRODSchemaPnRODSiriMetricsAndDims;

@interface PNRODSchemaPNRODClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PNRODSchemaPNRODClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PNRODSchemaPNRODSiriTurnGrainSummary *pnrodSiriTurnGrainSummary;
@property (nonatomic) BOOL hasPnrodSiriTurnGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowRequestGrainSummary *pnrodIntelligenceFlowRequestGrainSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowRequestGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary *pnrodIntelligenceFlowPlannerGrainSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowPlannerGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowActionGrainSummary *pnrodIntelligenceFlowActionGrainSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowActionGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowSessionSummary *pnrodIntelligenceFlowSessionSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowSessionSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowPlannerComponentSummary *pnrodPNRODIntelligenceFlowPlannerComponentSummary;
@property (nonatomic) BOOL hasPnrodPNRODIntelligenceFlowPlannerComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary *pnrodIntelligenceFlowResponseGenerationComponentSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowResponseGenerationComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary *pnronIntelligenceFlowExecutorComponentSummary;
@property (nonatomic) BOOL hasPnronIntelligenceFlowExecutorComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODScheduleDebugSummary *pnronScheduleDebugSummary;
@property (nonatomic) BOOL hasPnronScheduleDebugSummary;
@property (retain, nonatomic) PNRODSchemaPnRODSiriMetricsAndDims *pnrodSiriMetricsAndDims;
@property (nonatomic) BOOL hasPnrodSiriMetricsAndDims;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePnronScheduleDebugSummary;
- (void)deletePnrodSiriTurnGrainSummary;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deletePnrodIntelligenceFlowActionGrainSummary;
- (void)deletePnrodIntelligenceFlowPlannerGrainSummary;
- (void)deletePnrodIntelligenceFlowRequestGrainSummary;
- (void)deletePnrodIntelligenceFlowResponseGenerationComponentSummary;
- (void)deletePnrodIntelligenceFlowSessionSummary;
- (void)deletePnrodPNRODIntelligenceFlowPlannerComponentSummary;
- (void)deletePnrodSiriMetricsAndDims;
- (void)deletePnronIntelligenceFlowExecutorComponentSummary;
- (unsigned long long)whichInnerEventType;

@end
