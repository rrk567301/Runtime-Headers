@class SISchemaInstrumentationMessage, TTMSchemaTTMClientEventMetadata, TTMSchemaTTMRequestContext, TTMSchemaTTMNeuralCombinerRequestContext, NSData, TTMSchemaTTMOverrideRequestContext;

@interface TTMSchemaTTMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) TTMSchemaTTMClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) TTMSchemaTTMRequestContext *ttmRequestContext;
@property (nonatomic) char hasTtmRequestContext;
@property (retain, nonatomic) TTMSchemaTTMNeuralCombinerRequestContext *ttmNeuralCombinerRequestContext;
@property (nonatomic) char hasTtmNeuralCombinerRequestContext;
@property (retain, nonatomic) TTMSchemaTTMOverrideRequestContext *ttmOverrideRequestContext;
@property (nonatomic) char hasTtmOverrideRequestContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTtmOverrideRequestContext;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteTtmNeuralCombinerRequestContext;
- (void)deleteTtmRequestContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
