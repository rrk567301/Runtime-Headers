@class SISchemaInstrumentationMessage, RFSchemaRFComponentShown, RFSchemaRFClientEventMetadata, RFSchemaRFPatternExecuted, NSData, RFSchemaRFInteractionPerformed, RFSchemaRFSnippetRenderingContext;

@interface RFSchemaRFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFPatternExecuted *patternExecuted;
@property (nonatomic) BOOL hasPatternExecuted;
@property (retain, nonatomic) RFSchemaRFInteractionPerformed *interactionPerformed;
@property (nonatomic) BOOL hasInteractionPerformed;
@property (retain, nonatomic) RFSchemaRFComponentShown *componentShown;
@property (nonatomic) BOOL hasComponentShown;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingContext *snippetRenderingContext;
@property (nonatomic) BOOL hasSnippetRenderingContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deletePatternExecuted;
- (void)deleteInteractionPerformed;
- (void)deleteComponentShown;
- (void)deleteSnippetRenderingContext;

@end
