@class NSData, SUGSchemaSUGRankingStepContext, SISchemaInstrumentationMessage, SUGSchemaSUGEngagementReported, SUGSchemaSUGSuggestionsUIActivityTier1, SUGSchemaSUGClientEventMetadata, SUGSchemaSUGSuggestionsUIActivity, SUGSchemaSUGRequestContext, SUGSchemaSUGResolutionStepContext, SUGSchemaSUGEngagementMetricReported, SUGSchemaSUGGenerationStepContext, SUGSchemaSUGFilteringStepContext, SUGSchemaSUGTypingWindowEnded, SUGSchemaSUGSuggestionsGeneratedTier1, SUGSchemaSUGSuggestionsGenerated;

@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUGSchemaSUGClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated;
@property (nonatomic) char hasSuggestionsGenerated;
@property (retain, nonatomic) SUGSchemaSUGEngagementReported *engagementReported;
@property (nonatomic) char hasEngagementReported;
@property (retain, nonatomic) SUGSchemaSUGRequestContext *requestContext;
@property (nonatomic) char hasRequestContext;
@property (retain, nonatomic) SUGSchemaSUGGenerationStepContext *generationStepContext;
@property (nonatomic) char hasGenerationStepContext;
@property (retain, nonatomic) SUGSchemaSUGResolutionStepContext *resolutionStepContext;
@property (nonatomic) char hasResolutionStepContext;
@property (retain, nonatomic) SUGSchemaSUGFilteringStepContext *filteringStepContext;
@property (nonatomic) char hasFilteringStepContext;
@property (retain, nonatomic) SUGSchemaSUGRankingStepContext *rankingStepContext;
@property (nonatomic) char hasRankingStepContext;
@property (retain, nonatomic) SUGSchemaSUGEngagementMetricReported *engagementMetricReported;
@property (nonatomic) char hasEngagementMetricReported;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsUIActivity *uiActivity;
@property (nonatomic) char hasUiActivity;
@property (retain, nonatomic) SUGSchemaSUGTypingWindowEnded *typingWindowEnded;
@property (nonatomic) char hasTypingWindowEnded;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGeneratedTier1 *sugGeneratedTier1;
@property (nonatomic) char hasSugGeneratedTier1;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsUIActivityTier1 *uiActivityTier1;
@property (nonatomic) char hasUiActivityTier1;
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
- (int)clockIsolationLevel;
- (void)deleteEngagementMetricReported;
- (void)deleteEngagementReported;
- (void)deleteEventMetadata;
- (void)deleteFilteringStepContext;
- (void)deleteGenerationStepContext;
- (void)deleteRankingStepContext;
- (void)deleteRequestContext;
- (void)deleteResolutionStepContext;
- (void)deleteSugGeneratedTier1;
- (void)deleteSuggestionsGenerated;
- (void)deleteTypingWindowEnded;
- (void)deleteUiActivity;
- (void)deleteUiActivityTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
