@class FLOWSchemaFLOWEventMetadata, NSData, FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed, SISchemaInstrumentationMessage, FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationContext, FLOWLINKSchemaFLOWLINKEntityDisambiguationContext, FLOWLINKSchemaFLOWLINKActionParameterDisambiguationContext, FLOWLINKSchemaFLOWLINKActionContext, FLOWLINKSchemaFLOWLINKActionConversionContext, FLOWLINKSchemaFLOWLINKActionParametersUpdated, FLOWLINKSchemaFLOWLINKActionExecutionContext, FLOWLINKSchemaFLOWLINKActionConfirmationContext, FLOWLINKSchemaFLOWLINKActionPromptForValueContext, FLOWLINKSchemaFLOWLINKActionParameterConfirmationContext, FLOWLINKSchemaFLOWLINKActionTier1, FLOWLINKSchemaFLOWLINKAppShortcutGeneralizedExecutionUsed;

@interface FLOWLINKSchemaFLOWLINKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionContext *linkActionContext;
@property (nonatomic) char hasLinkActionContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKEntityDisambiguationContext *entityDisambiguationContext;
@property (nonatomic) char hasEntityDisambiguationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConversionContext *actionConversionContext;
@property (nonatomic) char hasActionConversionContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionExecutionContext *actionExecutionContext;
@property (nonatomic) char hasActionExecutionContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionPromptForValueContext *actionPromptForValueContext;
@property (nonatomic) char hasActionPromptForValueContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameterDisambiguationContext *actionParameterDisambiguationContext;
@property (nonatomic) char hasActionParameterDisambiguationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameterConfirmationContext *actionParameterConfirmationContext;
@property (nonatomic) char hasActionParameterConfirmationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConfirmationContext *actionConfirmationContext;
@property (nonatomic) char hasActionConfirmationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed *autoShortcutTemplateUsed;
@property (nonatomic) char hasAutoShortcutTemplateUsed;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionTier1 *linkActionTier1;
@property (nonatomic) char hasLinkActionTier1;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParametersUpdated *actionParameterUpdated;
@property (nonatomic) char hasActionParameterUpdated;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationContext *appShortcutFirstRunConfirmationContext;
@property (nonatomic) char hasAppShortcutFirstRunConfirmationContext;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAppShortcutGeneralizedExecutionUsed *appShortcutGeneralizedExecutionUsed;
@property (nonatomic) char hasAppShortcutGeneralizedExecutionUsed;
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
- (void)deleteActionConfirmationContext;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteActionConversionContext;
- (void)deleteActionExecutionContext;
- (void)deleteActionParameterConfirmationContext;
- (void)deleteActionParameterDisambiguationContext;
- (void)deleteActionParameterUpdated;
- (void)deleteActionPromptForValueContext;
- (void)deleteAppShortcutFirstRunConfirmationContext;
- (void)deleteAppShortcutGeneralizedExecutionUsed;
- (void)deleteAutoShortcutTemplateUsed;
- (void)deleteEntityDisambiguationContext;
- (void)deleteEventMetadata;
- (void)deleteLinkActionContext;
- (void)deleteLinkActionTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
