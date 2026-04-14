@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
@property (retain, nonatomic) SISchemaUUID *asrHypothesisId;
@property (nonatomic) BOOL hasAsrHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (void)deleteAsrHypothesisId;
- (void)deleteTokens;
- (id)tokensAtIndex:(unsigned long long)a0;
- (unsigned long long)tokensCount;

@end
