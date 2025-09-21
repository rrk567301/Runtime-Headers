@class FLOWLINKSchemaFLOWLINKActionConfirmationStarted, FLOWLINKSchemaFLOWLINKActionConfirmationEnded, NSData;

@interface FLOWLINKSchemaFLOWLINKActionConfirmationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConfirmationStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConfirmationEnded *ended;
@property (nonatomic) char hasEnded;
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
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
