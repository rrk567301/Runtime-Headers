@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRNgramHits : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *hits;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addHits:(unsigned int)a0;
- (void)clearHits;
- (void)deleteHits;
- (unsigned int)hitsAtIndex:(unsigned long long)a0;
- (unsigned long long)hitsCount;

@end
