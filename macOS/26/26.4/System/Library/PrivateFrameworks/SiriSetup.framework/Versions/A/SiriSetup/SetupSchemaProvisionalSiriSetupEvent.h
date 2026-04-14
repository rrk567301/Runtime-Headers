@class SetupSchemaProvisionalSiriSetupContext, NSData, SetupSchemaProvisionalSiriSetupEventMetadata;

@interface SetupSchemaProvisionalSiriSetupEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupContext *siriSetupContext;
@property (nonatomic) BOOL hasSiriSetupContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (id)getVersion;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteSiriSetupContext;

@end
