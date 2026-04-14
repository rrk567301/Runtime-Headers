@class IFPlatformRequestSchemaIFPlatformRequestClientEventMetadata, IFPlatformRequestSchemaIFPlatformRequestContext, SISchemaInstrumentationMessage, IFPlatformRequestSchemaIFPlatformRequestInvoked, IFPlatformRequestSchemaIFPlanCycleGenerated, IFPlatformRequestSchemaIFPlatformRequestStructuredError, NSData;

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
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestStructuredError *ifPlatformRequestStructuredError;
@property (nonatomic) BOOL hasIfPlatformRequestStructuredError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteIfPlanCycleGenerated;
- (void)deleteIfPlatformRequestContext;
- (void)deleteIfPlatformRequestInvoked;
- (void)deleteIfPlatformRequestStructuredError;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
