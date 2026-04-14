@class SISchemaInstrumentationMessage, CAMSchemaCAMResponseGenerated, CAMSchemaCAMClientEventMetadata, NSData, CAMSchemaCAMAutoSendFeaturesGenerated, CAMSchemaCAMModelExecuted, CAMSchemaCAMRequestReceived;

@interface CAMSchemaCAMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CAMSchemaCAMClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CAMSchemaCAMRequestReceived *requestReceived;
@property (nonatomic) BOOL hasRequestReceived;
@property (retain, nonatomic) CAMSchemaCAMModelExecuted *modelExecuted;
@property (nonatomic) BOOL hasModelExecuted;
@property (retain, nonatomic) CAMSchemaCAMResponseGenerated *responseGenerated;
@property (nonatomic) BOOL hasResponseGenerated;
@property (retain, nonatomic) CAMSchemaCAMAutoSendFeaturesGenerated *autoSendFeaturesGenerated;
@property (nonatomic) BOOL hasAutoSendFeaturesGenerated;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAutoSendFeaturesGenerated;
- (void)deleteEventMetadata;
- (void)deleteModelExecuted;
- (void)deleteRequestReceived;
- (void)deleteResponseGenerated;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
