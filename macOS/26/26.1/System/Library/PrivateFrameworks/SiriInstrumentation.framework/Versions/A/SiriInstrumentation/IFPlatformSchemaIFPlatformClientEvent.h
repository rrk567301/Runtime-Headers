@class SISchemaInstrumentationMessage, IFPlatformSchemaIFPlatformClientEventMetadata, NSData, IFPlatformSchemaIFPlatformTargetContext;

@interface IFPlatformSchemaIFPlatformClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) IFPlatformSchemaIFPlatformClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetContext *ifPlatformTargetContext;
@property (nonatomic) BOOL hasIfPlatformTargetContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteIfPlatformTargetContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
