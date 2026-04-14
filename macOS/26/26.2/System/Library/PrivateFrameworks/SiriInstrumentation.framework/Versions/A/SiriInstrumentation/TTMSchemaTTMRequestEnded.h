@class NSArray, NSData;

@interface TTMSchemaTTMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addResults:(id)a0;
- (void)deleteResults;

@end
