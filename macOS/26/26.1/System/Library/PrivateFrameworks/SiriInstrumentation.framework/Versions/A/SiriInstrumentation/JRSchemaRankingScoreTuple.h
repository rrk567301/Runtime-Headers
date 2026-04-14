@class NSArray, NSData;

@interface JRSchemaRankingScoreTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scores;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addScores:(float)a0;
- (id)suppressMessageUnderConditions;
- (float)scoresAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)scoresCount;
- (void)clearScores;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteScores;

@end
