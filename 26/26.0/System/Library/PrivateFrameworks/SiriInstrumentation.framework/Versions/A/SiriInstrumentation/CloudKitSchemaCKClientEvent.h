@class SISchemaInstrumentationMessage, CloudKitSchemaCKChangeReported, NSData, CloudKitSchemaCKErrorReported, CloudKitSchemaCloudKitEventMetadata;

@interface CloudKitSchemaCKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CloudKitSchemaCloudKitEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CloudKitSchemaCKErrorReported *cloudKitErrorReported;
@property (nonatomic) BOOL hasCloudKitErrorReported;
@property (retain, nonatomic) CloudKitSchemaCKChangeReported *cloudKitChangeReported;
@property (nonatomic) BOOL hasCloudKitChangeReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCloudKitChangeReported;
- (void)deleteCloudKitErrorReported;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
