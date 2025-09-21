@class NSData, SISchemaInstrumentationMessage, RTSSchemaRTSTriggered, RTSSchemaRTSFalseRejectDetected, RTSSchemaRTSFirstPassPolicyTriggered, RTSSchemaRTSClientEventMetadata, RTSSchemaRTSSecondPassPolicyDecisionMade, RTSSchemaRTSMotionData;

@interface RTSSchemaRTSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RTSSchemaRTSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RTSSchemaRTSFalseRejectDetected *rtsFalseRejectDetected;
@property (nonatomic) BOOL hasRtsFalseRejectDetected;
@property (retain, nonatomic) RTSSchemaRTSTriggered *rtsTriggered;
@property (nonatomic) BOOL hasRtsTriggered;
@property (retain, nonatomic) RTSSchemaRTSFirstPassPolicyTriggered *rtsFirstPassPolicyTriggered;
@property (nonatomic) BOOL hasRtsFirstPassPolicyTriggered;
@property (retain, nonatomic) RTSSchemaRTSSecondPassPolicyDecisionMade *rtsSecondPassPolicyDecisionMade;
@property (nonatomic) BOOL hasRtsSecondPassPolicyDecisionMade;
@property (retain, nonatomic) RTSSchemaRTSMotionData *rtsMotionData;
@property (nonatomic) BOOL hasRtsMotionData;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteRtsFalseRejectDetected;
- (void)deleteRtsFirstPassPolicyTriggered;
- (void)deleteRtsMotionData;
- (void)deleteRtsSecondPassPolicyDecisionMade;
- (void)deleteRtsTriggered;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
