@class NSArray, NSData;

@interface ASRSchemaASRInterpretation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)tokensAtIndex:(unsigned long long)a0;
- (void)clearTokens;
- (void)addTokens:(id)a0;
- (void)deleteTokens;
- (unsigned long long)tokensCount;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
