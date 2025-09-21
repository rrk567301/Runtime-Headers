@class RFSchemaRFSnippetRenderingCancelled, RFSchemaRFSnippetRenderingStarted, NSData, RFSchemaRFSnippetRenderingEnded, RFSchemaRFSnippetRenderingFailed;

@interface RFSchemaRFSnippetRenderingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RFSchemaRFSnippetRenderingStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingCancelled *cancelled;
@property (nonatomic) char hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
