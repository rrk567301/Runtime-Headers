@class NSData, USPSchemaUSPLoggingInitalized, SISchemaInstrumentationMessage, USPSchemaUSPMeasureStarted, USPSchemaUSPClientEventMetadata, USPSchemaUSPIterationStarted, USPSchemaUSPMeasureEnded, USPSchemaUSPLoggingReported, USPSchemaUSPIterationEnded;

@interface USPSchemaUSPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) USPSchemaUSPClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) USPSchemaUSPLoggingInitalized *loggingInitialized;
@property (nonatomic) char hasLoggingInitialized;
@property (retain, nonatomic) USPSchemaUSPLoggingReported *loggingReported;
@property (nonatomic) char hasLoggingReported;
@property (retain, nonatomic) USPSchemaUSPMeasureStarted *measureStarted;
@property (nonatomic) char hasMeasureStarted;
@property (retain, nonatomic) USPSchemaUSPMeasureEnded *measureEnded;
@property (nonatomic) char hasMeasureEnded;
@property (retain, nonatomic) USPSchemaUSPIterationStarted *iterationStarted;
@property (nonatomic) char hasIterationStarted;
@property (retain, nonatomic) USPSchemaUSPIterationEnded *iterationEnded;
@property (nonatomic) char hasIterationEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteIterationEnded;
- (void)deleteIterationStarted;
- (void)deleteLoggingInitialized;
- (void)deleteLoggingReported;
- (void)deleteMeasureEnded;
- (void)deleteMeasureStarted;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
