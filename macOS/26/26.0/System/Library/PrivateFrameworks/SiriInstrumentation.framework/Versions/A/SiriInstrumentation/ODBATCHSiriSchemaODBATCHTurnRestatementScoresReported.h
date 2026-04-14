@class NSArray, NSData;

@interface ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *turnRestatementScores;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTurnRestatementScores:(id)a0;
- (void)clearTurnRestatementScores;
- (void)deleteTurnRestatementScores;
- (id)turnRestatementScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)turnRestatementScoresCount;

@end
