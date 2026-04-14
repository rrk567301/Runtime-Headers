@class NSArray, NSData;

@interface JRSchemaRankingTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scores;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addScores:(float)a0;
- (unsigned long long)scoresCount;
- (id)initWithJSON:(id)a0;
- (void)clearScores;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (float)scoresAtIndex:(unsigned long long)a0;
- (void)deleteScores;

@end
