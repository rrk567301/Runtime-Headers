@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
@property (retain, nonatomic) SISchemaUUID *asrHypothesisId;
@property (nonatomic) char hasAsrHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)tokensAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (void)deleteAsrHypothesisId;
- (void)deleteTokens;
- (id)suppressMessageUnderConditions;
- (unsigned long long)tokensCount;

@end
