@class NSData, RFSchemaRFClientEventMetadata, SISchemaInstrumentationMessage, RFSchemaRFGradingDialogReportedTier1, RFSchemaRFSnippetRenderingContext, RFSchemaRFComponentShown, RFSchemaRFPatternExecuted, RFSchemaRFInteractionPerformed;

@interface RFSchemaRFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFPatternExecuted *patternExecuted;
@property (nonatomic) char hasPatternExecuted;
@property (retain, nonatomic) RFSchemaRFInteractionPerformed *interactionPerformed;
@property (nonatomic) char hasInteractionPerformed;
@property (retain, nonatomic) RFSchemaRFComponentShown *componentShown;
@property (nonatomic) char hasComponentShown;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingContext *snippetRenderingContext;
@property (nonatomic) char hasSnippetRenderingContext;
@property (retain, nonatomic) RFSchemaRFGradingDialogReportedTier1 *rfGradingDialogReportedTier1;
@property (nonatomic) char hasRfGradingDialogReportedTier1;
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
- (void)deleteComponentShown;
- (void)deleteEventMetadata;
- (void)deleteInteractionPerformed;
- (void)deletePatternExecuted;
- (void)deleteRfGradingDialogReportedTier1;
- (void)deleteSnippetRenderingContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
