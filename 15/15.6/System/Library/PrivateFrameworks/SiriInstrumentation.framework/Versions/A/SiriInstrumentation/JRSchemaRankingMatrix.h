@class NSArray, NSData;

@interface JRSchemaRankingMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tuples;
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
- (void)addTuples:(id)a0;
- (void)clearTuples;
- (void)deleteTuples;
- (id)suppressMessageUnderConditions;
- (id)tuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)tuplesCount;

@end
