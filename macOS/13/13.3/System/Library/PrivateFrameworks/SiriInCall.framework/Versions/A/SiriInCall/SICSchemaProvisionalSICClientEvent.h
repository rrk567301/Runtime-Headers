@class SICSchemaProvisionalSICClientEventMetadata, SICSchemaProvisionalSICInvocationContext, NSData;

@interface SICSchemaProvisionalSICClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SICSchemaProvisionalSICClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationContext *siriInCallInvocationContext;
@property (nonatomic) BOOL hasSiriInCallInvocationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteSiriInCallInvocationContext;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
