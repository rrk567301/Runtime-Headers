@class IFPlatformRequestSchemaIFPlatformRequestClientEventMetadata, IFPlatformRequestSchemaIFPlatformRequestContext, SISchemaInstrumentationMessage, IFPlatformRequestSchemaIFPlatformRequestInvoked, IFPlatformRequestSchemaIFPlanCycleGenerated, NSData;

@interface IFPlatformRequestSchemaIFPlatformRequestClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestContext *ifPlatformRequestContext;
@property (nonatomic) BOOL hasIfPlatformRequestContext;
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestInvoked *ifPlatformRequestInvoked;
@property (nonatomic) BOOL hasIfPlatformRequestInvoked;
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlanCycleGenerated *ifPlanCycleGenerated;
@property (nonatomic) BOOL hasIfPlanCycleGenerated;
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
- (void)deleteIfPlanCycleGenerated;
- (void)deleteIfPlatformRequestContext;
- (void)deleteIfPlatformRequestInvoked;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
