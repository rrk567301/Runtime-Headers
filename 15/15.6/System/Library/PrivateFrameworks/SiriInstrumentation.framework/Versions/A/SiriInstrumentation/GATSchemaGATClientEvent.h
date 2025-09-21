@class GATSchemaGATConfirmationSnippetUserActioned, GATSchemaGATGenerativeRequestContext, GATSchemaGATModelAgentCaptured, SISchemaInstrumentationMessage, GATSchemaGATClientEventMetadata, GATSchemaGATConfirmationSnippetUserActionEvent, GATSchemaGATRequestContext, GATSchemaGATConfirmationSnippetPresented, GATSchemaGATPresentConfirmationSnippetEvent, GATSchemaGATLoadScreenContentContext, GATSchemaGATCreateSessionContext, GATSchemaGATImageResizingContext, NSData, GATSchemaGATRegisterMediaContext;

@interface GATSchemaGATClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) GATSchemaGATClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) GATSchemaGATRequestContext *requestContext;
@property (nonatomic) char hasRequestContext;
@property (retain, nonatomic) GATSchemaGATLoadScreenContentContext *loadScreenContentContext;
@property (nonatomic) char hasLoadScreenContentContext;
@property (retain, nonatomic) GATSchemaGATCreateSessionContext *createSessionContext;
@property (nonatomic) char hasCreateSessionContext;
@property (retain, nonatomic) GATSchemaGATGenerativeRequestContext *generativeRequestContext;
@property (nonatomic) char hasGenerativeRequestContext;
@property (retain, nonatomic) GATSchemaGATImageResizingContext *imageResizingContext;
@property (nonatomic) char hasImageResizingContext;
@property (retain, nonatomic) GATSchemaGATRegisterMediaContext *registerMediaContext;
@property (nonatomic) char hasRegisterMediaContext;
@property (retain, nonatomic) GATSchemaGATPresentConfirmationSnippetEvent *confirmationSnippet;
@property (nonatomic) char hasConfirmationSnippet;
@property (retain, nonatomic) GATSchemaGATConfirmationSnippetUserActionEvent *confirmationSnippetUserAction;
@property (nonatomic) char hasConfirmationSnippetUserAction;
@property (retain, nonatomic) GATSchemaGATConfirmationSnippetPresented *confirmationSnippetPresented;
@property (nonatomic) char hasConfirmationSnippetPresented;
@property (retain, nonatomic) GATSchemaGATConfirmationSnippetUserActioned *confirmationSnippetUserActioned;
@property (nonatomic) char hasConfirmationSnippetUserActioned;
@property (retain, nonatomic) GATSchemaGATModelAgentCaptured *modelAgentCaptured;
@property (nonatomic) char hasModelAgentCaptured;
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
- (void)deleteConfirmationSnippet;
- (void)deleteConfirmationSnippetPresented;
- (void)deleteConfirmationSnippetUserAction;
- (void)deleteConfirmationSnippetUserActioned;
- (void)deleteCreateSessionContext;
- (void)deleteEventMetadata;
- (void)deleteGenerativeRequestContext;
- (void)deleteImageResizingContext;
- (void)deleteLoadScreenContentContext;
- (void)deleteModelAgentCaptured;
- (void)deleteRegisterMediaContext;
- (void)deleteRequestContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
