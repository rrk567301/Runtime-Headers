@class NSArray, NSData;

@interface JRSchemaRankingScoreTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scores;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)clearScores;
- (unsigned long long)scoresCount;
- (void)addScores:(float)a0;
- (float)scoresAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteScores;

@end
