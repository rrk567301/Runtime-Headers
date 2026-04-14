@class HOMESchemaHOMEAssistantInfoReported, NSData, HOMESchemaHOMEClientEventMetadata, HOMESchemaHOMEAssistantDeviceBirthday;

@interface HOMESchemaHOMEClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) HOMESchemaHOMEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported;
@property (nonatomic) BOOL hasAssistantInfoReported;
@property (retain, nonatomic) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday;
@property (nonatomic) BOOL hasAssistantDeviceBirthday;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (void)deleteEventMetadata;
- (void)deleteAssistantInfoReported;
- (void)deleteAssistantDeviceBirthday;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
