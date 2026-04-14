@class NSArray, NSData;

@interface JRSchemaRankingScoreTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scores;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)scoresCount;
- (id)dictionaryRepresentation;
- (void)clearScores;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (float)scoresAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addScores:(float)a0;
- (void)deleteScores;

@end
