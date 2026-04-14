@class SetupSchemaProvisionalSiriSetupContext, NSData, SetupSchemaProvisionalSiriSetupEventMetadata;

@interface SetupSchemaProvisionalSiriSetupEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupContext *siriSetupContext;
@property (nonatomic) BOOL hasSiriSetupContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)getTypeId;
- (id)dictionaryRepresentation;
- (void)deleteEventMetadata;
- (void)deleteSiriSetupContext;

@end
