@class NSData, USPSchemaUSPLoggingInitalized, SISchemaInstrumentationMessage, USPSchemaUSPMeasureStarted, USPSchemaUSPClientEventMetadata, USPSchemaUSPIterationStarted, USPSchemaUSPMeasureEnded, USPSchemaUSPLoggingReported, USPSchemaUSPIterationEnded;

@interface USPSchemaUSPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) USPSchemaUSPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) USPSchemaUSPLoggingInitalized *loggingInitialized;
@property (nonatomic) BOOL hasLoggingInitialized;
@property (retain, nonatomic) USPSchemaUSPLoggingReported *loggingReported;
@property (nonatomic) BOOL hasLoggingReported;
@property (retain, nonatomic) USPSchemaUSPMeasureStarted *measureStarted;
@property (nonatomic) BOOL hasMeasureStarted;
@property (retain, nonatomic) USPSchemaUSPMeasureEnded *measureEnded;
@property (nonatomic) BOOL hasMeasureEnded;
@property (retain, nonatomic) USPSchemaUSPIterationStarted *iterationStarted;
@property (nonatomic) BOOL hasIterationStarted;
@property (retain, nonatomic) USPSchemaUSPIterationEnded *iterationEnded;
@property (nonatomic) BOOL hasIterationEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

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
- (void)deleteEventMetadata;
- (void)deleteIterationEnded;
- (void)deleteIterationStarted;
- (void)deleteLoggingInitialized;
- (void)deleteLoggingReported;
- (void)deleteMeasureEnded;
- (void)deleteMeasureStarted;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
