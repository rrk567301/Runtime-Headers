@class SISchemaInstrumentationMessage, JRSchemaJRClientEventMetadata, NSData, JRSchemaJRExperimentTriggered, JRSchemaJRInferenceContext;

@interface JRSchemaJRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) JRSchemaJRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) JRSchemaJRInferenceContext *jrInferenceContext;
@property (nonatomic) BOOL hasJrInferenceContext;
@property (retain, nonatomic) JRSchemaJRExperimentTriggered *jrExperimentTriggered;
@property (nonatomic) BOOL hasJrExperimentTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteJrExperimentTriggered;
- (void)deleteJrInferenceContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
