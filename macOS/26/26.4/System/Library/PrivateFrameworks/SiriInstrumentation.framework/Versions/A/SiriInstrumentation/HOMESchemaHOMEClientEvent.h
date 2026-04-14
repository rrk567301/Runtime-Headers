@class SISchemaInstrumentationMessage, HOMESchemaHOMEAssistantInfoReported, NSData, HOMESchemaHOMEClientEventMetadata, HOMESchemaHOMEAssistantDeviceBirthday;

@interface HOMESchemaHOMEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HOMESchemaHOMEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported;
@property (nonatomic) BOOL hasAssistantInfoReported;
@property (retain, nonatomic) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday;
@property (nonatomic) BOOL hasAssistantDeviceBirthday;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

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
- (void)deleteAssistantDeviceBirthday;
- (void)deleteAssistantInfoReported;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
