@class GATSchemaGATGenerativeRequestContext, GATSchemaGATModelAgentCaptured, SISchemaInstrumentationMessage, GATSchemaGATClientEventMetadata, GATSchemaGATConfirmationSnippetUserActionEvent, GATSchemaGATRequestContext, GATSchemaGATRichFormatResponseMetadataCaptured, GATSchemaGATPresentConfirmationSnippetEvent, GATSchemaGATLoadScreenContentContext, GATSchemaGATCreateSessionContext, GATSchemaGATImageResizingContext, GATSchemaGATNotForMeResponseReturned, NSData, GATSchemaGATRegisterMediaContext;

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

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmationSnippet;
- (void)deleteConfirmationSnippetUserAction;
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
