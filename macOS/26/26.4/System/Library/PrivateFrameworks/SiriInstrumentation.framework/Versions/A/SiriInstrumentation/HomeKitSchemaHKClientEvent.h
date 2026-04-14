@class HomeKitSchemaHomeKitEventMetadata, HomeKitSchemaHKAccessoryOperationReported, SISchemaInstrumentationMessage, NSData, HomeKitSchemaHKAudioTopologyReported;

@interface HomeKitSchemaHKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HomeKitSchemaHomeKitEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HomeKitSchemaHKAccessoryOperationReported *homeKitAccessoryOperationReported;
@property (nonatomic) BOOL hasHomeKitAccessoryOperationReported;
@property (retain, nonatomic) HomeKitSchemaHKAudioTopologyReported *audioTopologyReported;
@property (nonatomic) BOOL hasAudioTopologyReported;
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
- (void)deleteAudioTopologyReported;
- (void)deleteEventMetadata;
- (void)deleteHomeKitAccessoryOperationReported;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
