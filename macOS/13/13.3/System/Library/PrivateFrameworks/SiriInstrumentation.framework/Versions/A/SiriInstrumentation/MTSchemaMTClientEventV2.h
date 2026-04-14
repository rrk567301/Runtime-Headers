@class MTSchemaMTClientEventMetadata, NSData, SISchemaInstrumentationMessage, MTSchemaMTBatchRequestContext, MTSchemaMTInvocationContext, MTSchemaMTInvocationStartedTier1, MTSchemaMTLocalePairResolved, MTSchemaMTASRStateUpdated;

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic) BOOL hasBatchRequestContext;
@property (retain, nonatomic) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic) BOOL hasInvocationContext;
@property (retain, nonatomic) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic) BOOL hasAsrStateUpdated;
@property (retain, nonatomic) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic) BOOL hasLocalePairResolved;
@property (retain, nonatomic) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic) BOOL hasInvocationStartedTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLocalePairResolved;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
