@class FLOWLINKSchemaFLOWLINKActionParameter, NSData;

@interface FLOWLINKSchemaFLOWLINKActionPromptForValueStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameter *parameter;
@property (nonatomic) char hasParameter;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteParameter;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;

@end
