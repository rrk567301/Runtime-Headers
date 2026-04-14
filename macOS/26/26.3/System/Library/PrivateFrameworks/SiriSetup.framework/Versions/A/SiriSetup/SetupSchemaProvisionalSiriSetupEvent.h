@class SetupSchemaProvisionalSiriSetupContext, NSData, SetupSchemaProvisionalSiriSetupEventMetadata;

@interface SetupSchemaProvisionalSiriSetupEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupContext *siriSetupContext;
@property (nonatomic) BOOL hasSiriSetupContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)getTypeId;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isProvisional;
- (id)getVersion;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEventMetadata;
- (void)deleteSiriSetupContext;

@end
