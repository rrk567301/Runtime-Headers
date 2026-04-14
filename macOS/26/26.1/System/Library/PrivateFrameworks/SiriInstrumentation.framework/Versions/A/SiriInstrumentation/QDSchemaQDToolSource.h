@class NSArray, NSData;

@interface QDSchemaQDToolSource : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *spanMatches;
@property (copy, nonatomic) NSArray *contexualMatches;
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
- (void)addSpanMatches:(id)a0;
- (void)addContexualMatches:(id)a0;
- (void)clearContexualMatches;
- (void)clearSpanMatches;
- (id)contexualMatchesAtIndex:(unsigned long long)a0;
- (unsigned long long)contexualMatchesCount;
- (void)deleteContexualMatches;
- (void)deleteSpanMatches;
- (id)spanMatchesAtIndex:(unsigned long long)a0;
- (unsigned long long)spanMatchesCount;

@end
