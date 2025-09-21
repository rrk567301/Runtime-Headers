@class PNRODSchemaPNRODIntelligenceFlowSessionSummary, PNRODSchemaPNRODClientEventMetadata, SISchemaInstrumentationMessage, PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary, PNRODSchemaPNRODScheduleDebugSummary, NSData, PNRODSchemaPNRODIntelligenceFlowRequestGrainSummary, PNRODSchemaPNRODIntelligenceFlowPlannerComponentSummary, PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary, PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary, PNRODSchemaPNRODIntelligenceFlowActionGrainSummary, PNRODSchemaPNRODSiriTurnGrainSummary;

@interface PNRODSchemaPNRODClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PNRODSchemaPNRODClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) PNRODSchemaPNRODSiriTurnGrainSummary *pnrodSiriTurnGrainSummary;
@property (nonatomic) char hasPnrodSiriTurnGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowRequestGrainSummary *pnrodIntelligenceFlowRequestGrainSummary;
@property (nonatomic) char hasPnrodIntelligenceFlowRequestGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary *pnrodIntelligenceFlowPlannerGrainSummary;
@property (nonatomic) char hasPnrodIntelligenceFlowPlannerGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowActionGrainSummary *pnrodIntelligenceFlowActionGrainSummary;
@property (nonatomic) char hasPnrodIntelligenceFlowActionGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowSessionSummary *pnrodIntelligenceFlowSessionSummary;
@property (nonatomic) char hasPnrodIntelligenceFlowSessionSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowPlannerComponentSummary *pnrodPNRODIntelligenceFlowPlannerComponentSummary;
@property (nonatomic) char hasPnrodPNRODIntelligenceFlowPlannerComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary *pnrodIntelligenceFlowResponseGenerationComponentSummary;
@property (nonatomic) char hasPnrodIntelligenceFlowResponseGenerationComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary *pnronIntelligenceFlowExecutorComponentSummary;
@property (nonatomic) char hasPnronIntelligenceFlowExecutorComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODScheduleDebugSummary *pnronScheduleDebugSummary;
@property (nonatomic) char hasPnronScheduleDebugSummary;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePnronScheduleDebugSummary;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePnrodSiriTurnGrainSummary;
- (int)getAnyEventType;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deletePnrodIntelligenceFlowActionGrainSummary;
- (void)deletePnrodIntelligenceFlowPlannerGrainSummary;
- (void)deletePnrodIntelligenceFlowRequestGrainSummary;
- (void)deletePnrodIntelligenceFlowResponseGenerationComponentSummary;
- (void)deletePnrodIntelligenceFlowSessionSummary;
- (void)deletePnrodPNRODIntelligenceFlowPlannerComponentSummary;
- (void)deletePnronIntelligenceFlowExecutorComponentSummary;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
