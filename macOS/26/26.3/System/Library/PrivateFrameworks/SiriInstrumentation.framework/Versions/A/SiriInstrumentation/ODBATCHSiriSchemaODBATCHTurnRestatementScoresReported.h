@class NSArray, NSData;

@interface ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *turnRestatementScores;
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
- (void)addTurnRestatementScores:(id)a0;
- (void)clearTurnRestatementScores;
- (void)deleteTurnRestatementScores;
- (id)turnRestatementScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)turnRestatementScoresCount;

@end
