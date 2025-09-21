@class QDSchemaQDToolboxSizeReported, NSData, SISchemaInstrumentationMessage, QDSchemaQDCollectionContext, QDSchemaQDTuplesGenerated, QDSchemaQDEntitiesCollected, QDSchemaQDContextStatementIdsReported, QDSchemaQDClientEventMetadata, QDSchemaQDSubComponentContext, QDSchemaQDAppPreLaunchTriggered, QDSchemaQDEntitiesRanked;

@interface QDSchemaQDClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) QDSchemaQDClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) QDSchemaQDCollectionContext *collectionContext;
@property (nonatomic) char hasCollectionContext;
@property (retain, nonatomic) QDSchemaQDEntitiesCollected *entitiesCollected;
@property (nonatomic) char hasEntitiesCollected;
@property (retain, nonatomic) QDSchemaQDTuplesGenerated *tuplesGenerated;
@property (nonatomic) char hasTuplesGenerated;
@property (retain, nonatomic) QDSchemaQDEntitiesRanked *entitiesRanked;
@property (nonatomic) char hasEntitiesRanked;
@property (retain, nonatomic) QDSchemaQDSubComponentContext *subComponentContext;
@property (nonatomic) char hasSubComponentContext;
@property (retain, nonatomic) QDSchemaQDContextStatementIdsReported *contextStatementIdsReported;
@property (nonatomic) char hasContextStatementIdsReported;
@property (retain, nonatomic) QDSchemaQDAppPreLaunchTriggered *appPreLaunchTriggered;
@property (nonatomic) char hasAppPreLaunchTriggered;
@property (retain, nonatomic) QDSchemaQDToolboxSizeReported *toolboxSizeReported;
@property (nonatomic) char hasToolboxSizeReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteAppPreLaunchTriggered;
- (void)deleteCollectionContext;
- (void)deleteContextStatementIdsReported;
- (void)deleteEntitiesCollected;
- (void)deleteEntitiesRanked;
- (void)deleteEventMetadata;
- (void)deleteSubComponentContext;
- (void)deleteToolboxSizeReported;
- (void)deleteTuplesGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
