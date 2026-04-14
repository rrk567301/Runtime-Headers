@class NSArray, NSData;

@interface STSchemaSTSpotlightRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (unsigned long long)resultCount;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resultAtIndex:(unsigned long long)a0;
- (void)addResult:(id)a0;
- (void)clearResult;
- (void)deleteResult;

@end
