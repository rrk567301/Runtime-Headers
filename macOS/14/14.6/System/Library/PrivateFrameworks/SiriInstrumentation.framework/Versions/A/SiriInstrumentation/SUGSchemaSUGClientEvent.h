@class SUGSchemaSUGGenerationStepContext, SUGSchemaSUGClientEventMetadata, SISchemaInstrumentationMessage, SUGSchemaSUGRequestContext, SUGSchemaSUGResolutionStepContext, SUGSchemaSUGFilteringStepContext, SUGSchemaSUGEngagementMetricReported, NSData, SUGSchemaSUGEngagementReported, SUGSchemaSUGSuggestionsGenerated, SUGSchemaSUGRankingStepContext;

@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUGSchemaSUGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated;
@property (nonatomic) BOOL hasSuggestionsGenerated;
@property (retain, nonatomic) SUGSchemaSUGEngagementReported *engagementReported;
@property (nonatomic) BOOL hasEngagementReported;
@property (retain, nonatomic) SUGSchemaSUGRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) SUGSchemaSUGGenerationStepContext *generationStepContext;
@property (nonatomic) BOOL hasGenerationStepContext;
@property (retain, nonatomic) SUGSchemaSUGResolutionStepContext *resolutionStepContext;
@property (nonatomic) BOOL hasResolutionStepContext;
@property (retain, nonatomic) SUGSchemaSUGFilteringStepContext *filteringStepContext;
@property (nonatomic) BOOL hasFilteringStepContext;
@property (retain, nonatomic) SUGSchemaSUGRankingStepContext *rankingStepContext;
@property (nonatomic) BOOL hasRankingStepContext;
@property (retain, nonatomic) SUGSchemaSUGEngagementMetricReported *engagementMetricReported;
@property (nonatomic) BOOL hasEngagementMetricReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
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
- (void)deleteSuggestionsGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
