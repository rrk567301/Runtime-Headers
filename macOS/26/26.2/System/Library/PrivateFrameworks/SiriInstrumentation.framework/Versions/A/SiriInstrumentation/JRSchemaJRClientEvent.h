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

- (int)componentName;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteEventMetadata;
- (void)deleteJrExperimentTriggered;
- (void)deleteJrInferenceContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
