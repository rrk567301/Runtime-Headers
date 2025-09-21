@class NSArray, NSData;

@interface JRSchemaRankingScoreTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scores;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearScores;
- (unsigned long long)scoresCount;
- (void)addScores:(float)a0;
- (void)deleteScores;
- (float)scoresAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
