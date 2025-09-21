@class SetupSchemaProvisionalSiriSetupContext, NSData, SetupSchemaProvisionalSiriSetupEventMetadata;

@interface SetupSchemaProvisionalSiriSetupEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupContext *siriSetupContext;
@property (nonatomic) char hasSiriSetupContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (char)isProvisional;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (void)deleteSiriSetupContext;

@end
