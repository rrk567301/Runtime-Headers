@class GATSchemaGATConfirmationSnippetUserActioned, GATSchemaGATGenerativeRequestContext, GATSchemaGATModelAgentCaptured, SISchemaInstrumentationMessage, GATSchemaGATClientEventMetadata, GATSchemaGATConfirmationSnippetUserActionEvent, GATSchemaGATRequestContext, GATSchemaGATConfirmationSnippetPresented, GATSchemaGATRichFormatResponseMetadataCaptured, GATSchemaGATPresentConfirmationSnippetEvent, GATSchemaGATLoadScreenContentContext, GATSchemaGATCreateSessionContext, GATSchemaGATImageResizingContext, GATSchemaGATNotForMeResponseReturned, NSData, GATSchemaGATRegisterMediaContext;

@interface GATSchemaGATClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) GATSchemaGATClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) GATSchemaGATRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) GATSchemaGATLoadScreenContentContext *loadScreenContentContext;
@property (nonatomic) BOOL hasLoadScreenContentContext;
@property (retain, nonatomic) GATSchemaGATCreateSessionContext *createSessionContext;
@property (nonatomic) BOOL hasCreateSessionContext;
@property (retain, nonatomic) GATSchemaGATGenerativeRequestContext *generativeRequestContext;
@property (nonatomic) BOOL hasGenerativeRequestContext;
@property (retain, nonatomic) GATSchemaGATImageResizingContext *imageResizingContext;
@property (nonatomic) BOOL hasImageResizingContext;
@property (retain, nonatomic) GATSchemaGATRegisterMediaContext *registerMediaContext;
@property (nonatomic) BOOL hasRegisterMediaContext;
@property (retain, nonatomic) GATSchemaGATPresentConfirmationSnippetEvent *confirmationSnippet;
@property (nonatomic) BOOL hasConfirmationSnippet;
@property (retain, nonatomic) GATSchemaGATConfirmationSnippetUserActionEvent *confirmationSnippetUserAction;
@property (nonatomic) BOOL hasConfirmationSnippetUserAction;
@property (retain, nonatomic) GATSchemaGATConfirmationSnippetPresented *confirmationSnippetPresented;
@property (nonatomic) BOOL hasConfirmationSnippetPresented;
@property (retain, nonatomic) GATSchemaGATConfirmationSnippetUserActioned *confirmationSnippetUserActioned;
@property (nonatomic) BOOL hasConfirmationSnippetUserActioned;
@property (retain, nonatomic) GATSchemaGATNotForMeResponseReturned *notForMeResponseReturned;
@property (nonatomic) BOOL hasNotForMeResponseReturned;
@property (retain, nonatomic) GATSchemaGATModelAgentCaptured *modelAgentCaptured;
@property (nonatomic) BOOL hasModelAgentCaptured;
@property (retain, nonatomic) GATSchemaGATRichFormatResponseMetadataCaptured *responseMetadataCaptured;
@property (nonatomic) BOOL hasResponseMetadataCaptured;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
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
- (void)deleteNotForMeResponseReturned;
- (void)deleteRegisterMediaContext;
- (void)deleteRequestContext;
- (void)deleteResponseMetadataCaptured;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
