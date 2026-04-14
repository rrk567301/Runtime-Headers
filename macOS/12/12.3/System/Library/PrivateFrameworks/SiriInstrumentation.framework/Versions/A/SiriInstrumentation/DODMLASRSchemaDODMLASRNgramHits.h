@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRNgramHits : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *hits;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearHits;
- (void)addHits:(unsigned int)a0;
- (void)deleteHits;
- (unsigned long long)hitsCount;
- (unsigned int)hitsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
