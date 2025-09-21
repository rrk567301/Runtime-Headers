@class PRSiriSchemaPRRequestContext, PRSiriSchemaPRClientEventMetadata, SISchemaInstrumentationMessage, PRSiriSchemaPRJointResolverCallContext, NSData, PRSiriSchemaPRResponseGenerationRequestContext;

@interface PRSiriSchemaPRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PRSiriSchemaPRClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) PRSiriSchemaPRRequestContext *requestContext;
@property (nonatomic) char hasRequestContext;
@property (retain, nonatomic) PRSiriSchemaPRResponseGenerationRequestContext *rgRequestContext;
@property (nonatomic) char hasRgRequestContext;
@property (retain, nonatomic) PRSiriSchemaPRJointResolverCallContext *jrCallContext;
@property (nonatomic) char hasJrCallContext;
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
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteJrCallContext;
- (void)deleteRequestContext;
- (void)deleteRgRequestContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
