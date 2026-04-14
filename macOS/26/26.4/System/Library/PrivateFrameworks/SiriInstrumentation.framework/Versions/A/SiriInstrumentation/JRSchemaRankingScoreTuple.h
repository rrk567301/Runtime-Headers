@class NSArray, NSData;

@interface JRSchemaRankingScoreTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scores;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addScores:(float)a0;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearScores;
- (float)scoresAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (unsigned long long)scoresCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteScores;

@end
