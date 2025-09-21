@class NSData, SISchemaUUID;

@interface SUTSchemaTestGeneratedTurnID : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *turnID;
@property (nonatomic) char hasTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTurnID;
- (id)suppressMessageUnderConditions;

@end
