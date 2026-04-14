@class NSArray, NSData;

@interface STSchemaSTAnswerSynthesisRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (unsigned long long)resultCount;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)resultAtIndex:(unsigned long long)a0;
- (void)addResult:(id)a0;
- (void)clearResult;
- (void)deleteResult;

@end
