@class SISchemaInstrumentationMessage, SISchemaABClientEventMetadata, SISchemaABExperimentClientFeatureTriggered, SISchemaABExperimentAllocationChanged, NSData, SISchemaABExperimentAssetRetrievalStatusChanged;

@interface SISchemaABClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SISchemaABClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SISchemaABExperimentAllocationChanged *allocationChanged;
@property (nonatomic) BOOL hasAllocationChanged;
@property (retain, nonatomic) SISchemaABExperimentAssetRetrievalStatusChanged *assetRetrievalStatusChanged;
@property (nonatomic) BOOL hasAssetRetrievalStatusChanged;
@property (retain, nonatomic) SISchemaABExperimentClientFeatureTriggered *clientFeatureTriggered;
@property (nonatomic) BOOL hasClientFeatureTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteAllocationChanged;
- (void)deleteAssetRetrievalStatusChanged;
- (void)deleteClientFeatureTriggered;
- (void)deleteEventMetadata;
- (unsigned long long)whichInnerEventType;

@end
