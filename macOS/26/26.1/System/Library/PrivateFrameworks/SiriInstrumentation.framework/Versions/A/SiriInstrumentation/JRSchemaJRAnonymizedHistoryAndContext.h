@class NSArray, NSData;

@interface JRSchemaJRAnonymizedHistoryAndContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tuples;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTuples:(id)a0;
- (void)clearTuples;
- (void)deleteTuples;
- (id)tuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)tuplesCount;

@end
