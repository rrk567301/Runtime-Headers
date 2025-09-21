@class SISchemaInstrumentationMessage, SISchemaABClientEventMetadata, SISchemaABExperimentClientFeatureTriggered, SISchemaABExperimentAllocationChanged, NSData, SISchemaABExperimentAssetRetrievalStatusChanged;

@interface SISchemaABClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SISchemaABClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) SISchemaABExperimentAllocationChanged *allocationChanged;
@property (nonatomic) char hasAllocationChanged;
@property (retain, nonatomic) SISchemaABExperimentAssetRetrievalStatusChanged *assetRetrievalStatusChanged;
@property (nonatomic) char hasAssetRetrievalStatusChanged;
@property (retain, nonatomic) SISchemaABExperimentClientFeatureTriggered *clientFeatureTriggered;
@property (nonatomic) char hasClientFeatureTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteAllocationChanged;
- (void)deleteAssetRetrievalStatusChanged;
- (void)deleteClientFeatureTriggered;
- (void)deleteEventMetadata;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
