@class SISchemaInstrumentationMessage, SICSchemaSICClientEventMetadata, NSData, SICSchemaSICInvocationContext;

@interface SICSchemaSICClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SICSchemaSICClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SICSchemaSICInvocationContext *siriInCallInvocationContext;
@property (nonatomic) BOOL hasSiriInCallInvocationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteEventMetadata;
- (void)deleteSiriInCallInvocationContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
