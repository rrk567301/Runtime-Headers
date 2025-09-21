@class NSData, STSchemaSTHallucinationDetectionContext, SISchemaInstrumentationMessage, STSchemaSTClientEventMetadata, STSchemaSTDisambiguationContext, STSchemaSTLLMQueryUnderstandingContext, STSchemaSTAnswerSynthesisContext, STSchemaSTSpotlightContext, STSchemaSTGeneralSearchContext, STSchemaSTGlobalSearchContext, STSchemaSTGeneralSearchEndedTier1, STSchemaSTLLMQUQueryArgumentsTier1;

@interface STSchemaSTEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) STSchemaSTClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) STSchemaSTGeneralSearchContext *stGeneralSearchContext;
@property (nonatomic) char hasStGeneralSearchContext;
@property (retain, nonatomic) STSchemaSTLLMQueryUnderstandingContext *stLLMQueryUnderstandingContext;
@property (nonatomic) char hasStLLMQueryUnderstandingContext;
@property (retain, nonatomic) STSchemaSTSpotlightContext *stSpotlightContext;
@property (nonatomic) char hasStSpotlightContext;
@property (retain, nonatomic) STSchemaSTAnswerSynthesisContext *stAnswerSynthesisContext;
@property (nonatomic) char hasStAnswerSynthesisContext;
@property (retain, nonatomic) STSchemaSTGlobalSearchContext *stGlobalSearchContext;
@property (nonatomic) char hasStGlobalSearchContext;
@property (retain, nonatomic) STSchemaSTLLMQUQueryArgumentsTier1 *stLLMQUQueryArgumentsTier1;
@property (nonatomic) char hasStLLMQUQueryArgumentsTier1;
@property (retain, nonatomic) STSchemaSTDisambiguationContext *stDisambiguationContext;
@property (nonatomic) char hasStDisambiguationContext;
@property (retain, nonatomic) STSchemaSTGeneralSearchEndedTier1 *requestEndedTier1;
@property (nonatomic) char hasRequestEndedTier1;
@property (retain, nonatomic) STSchemaSTHallucinationDetectionContext *searchToolHallucinationDetectionContext;
@property (nonatomic) char hasSearchToolHallucinationDetectionContext;
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
- (void)deleteEventMetadata;
- (void)deleteRequestEndedTier1;
- (void)deleteSearchToolHallucinationDetectionContext;
- (void)deleteStAnswerSynthesisContext;
- (void)deleteStDisambiguationContext;
- (void)deleteStGeneralSearchContext;
- (void)deleteStGlobalSearchContext;
- (void)deleteStLLMQUQueryArgumentsTier1;
- (void)deleteStLLMQueryUnderstandingContext;
- (void)deleteStSpotlightContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
