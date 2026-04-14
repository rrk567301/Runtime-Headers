@class NLRouterSchemaNLRouterPromptGenerationSignalsCaptured, NLRouterSchemaNLRouterSubComponentSetupContext, SISchemaInstrumentationMessage, NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1, NLRouterSchemaNLRouterHandleContext, NLRouterSchemaNLRouterSubComponentHandleContext, NLRouterSchemaNLRouterPromptGenerated, NLRouterSchemaNLRouterInvalidDecisionEmitted, NSData, NLRouterSchemaNLRouterClientEventMetadata, NLRouterSchemaNLRouterBridgeHandleContext;

@interface NLRouterSchemaNLRouterClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) NLRouterSchemaNLRouterClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) NLRouterSchemaNLRouterHandleContext *nlRouterHandleContext;
@property (nonatomic) BOOL hasNlRouterHandleContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterBridgeHandleContext *nlRouterBridgeHandleContext;
@property (nonatomic) BOOL hasNlRouterBridgeHandleContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleContext *nlRouterSubComponentHandleContext;
@property (nonatomic) BOOL hasNlRouterSubComponentHandleContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentSetupContext *nlRouterSubComponentSetupContext;
@property (nonatomic) BOOL hasNlRouterSubComponentSetupContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1 *nlRouterSubComponentTriggeredHeuristicRuleTier1;
@property (nonatomic) BOOL hasNlRouterSubComponentTriggeredHeuristicRuleTier1;
@property (retain, nonatomic) NLRouterSchemaNLRouterPromptGenerationSignalsCaptured *nlRouterPromptGenerationSignalsCaptured;
@property (nonatomic) BOOL hasNlRouterPromptGenerationSignalsCaptured;
@property (retain, nonatomic) NLRouterSchemaNLRouterPromptGenerated *nlRouterPromptGenerated;
@property (nonatomic) BOOL hasNlRouterPromptGenerated;
@property (retain, nonatomic) NLRouterSchemaNLRouterInvalidDecisionEmitted *nLRouterInvalidDecisionEmitted;
@property (nonatomic) BOOL hasNLRouterInvalidDecisionEmitted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteNLRouterInvalidDecisionEmitted;
- (void)deleteNlRouterBridgeHandleContext;
- (void)deleteNlRouterHandleContext;
- (void)deleteNlRouterPromptGenerated;
- (void)deleteNlRouterPromptGenerationSignalsCaptured;
- (void)deleteNlRouterSubComponentHandleContext;
- (void)deleteNlRouterSubComponentSetupContext;
- (void)deleteNlRouterSubComponentTriggeredHeuristicRuleTier1;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
