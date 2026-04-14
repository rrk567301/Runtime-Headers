@class QDSchemaQDToolboxSizeReported, NSData, SISchemaInstrumentationMessage, QDSchemaQDCollectionContext, QDSchemaQDTuplesGenerated, QDSchemaQDEntitiesCollected, QDSchemaQDContextStatementIdsReported, QDSchemaQDClientEventMetadata, QDSchemaQDSubComponentContext, QDSchemaQDAppPreLaunchTriggered, QDSchemaQDEntitiesRanked;

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
@property (retain, nonatomic) QDSchemaQDContextStatementIdsReported *contextStatementIdsReported;
@property (nonatomic) BOOL hasContextStatementIdsReported;
@property (retain, nonatomic) QDSchemaQDAppPreLaunchTriggered *appPreLaunchTriggered;
@property (nonatomic) BOOL hasAppPreLaunchTriggered;
@property (retain, nonatomic) QDSchemaQDToolboxSizeReported *toolboxSizeReported;
@property (nonatomic) BOOL hasToolboxSizeReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
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
- (unsigned long long)whichInnerEventType;

@end
