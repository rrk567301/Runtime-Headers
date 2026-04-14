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

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteLoggingInitialized;
- (void)deleteLoggingReported;
- (void)deleteMeasureStarted;
- (void)deleteMeasureEnded;
- (void)deleteIterationStarted;
- (void)deleteIterationEnded;

@end
