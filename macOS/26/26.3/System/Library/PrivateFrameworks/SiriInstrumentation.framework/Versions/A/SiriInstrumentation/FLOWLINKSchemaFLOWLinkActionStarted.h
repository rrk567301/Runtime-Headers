@class NSData, FLOWLINKSchemaFLOWLINKAction;

@interface FLOWLINKSchemaFLOWLinkActionStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAction *currentAction;
@property (nonatomic) BOOL hasCurrentAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCurrentAction;

@end
