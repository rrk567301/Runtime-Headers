@class NSData, SISchemaInstrumentationMessage, QDSchemaQDCollectionContext, QDSchemaQDTuplesGenerated, QDSchemaQDEntitiesCollected, QDSchemaQDClientEventMetadata, QDSchemaQDSubComponentContext, QDSchemaQDEntitiesRanked;

@interface QDSchemaQDClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) QDSchemaQDClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) QDSchemaQDCollectionContext *collectionContext;
@property (nonatomic) BOOL hasCollectionContext;
@property (retain, nonatomic) QDSchemaQDEntitiesCollected *entitiesCollected;
@property (nonatomic) BOOL hasEntitiesCollected;
@property (retain, nonatomic) QDSchemaQDTuplesGenerated *tuplesGenerated;
@property (nonatomic) BOOL hasTuplesGenerated;
@property (retain, nonatomic) QDSchemaQDEntitiesRanked *entitiesRanked;
@property (nonatomic) BOOL hasEntitiesRanked;
@property (retain, nonatomic) QDSchemaQDSubComponentContext *subComponentContext;
@property (nonatomic) BOOL hasSubComponentContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteCollectionContext;
- (void)deleteEntitiesCollected;
- (void)deleteEntitiesRanked;
- (void)deleteEventMetadata;
- (void)deleteSubComponentContext;
- (void)deleteTuplesGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
