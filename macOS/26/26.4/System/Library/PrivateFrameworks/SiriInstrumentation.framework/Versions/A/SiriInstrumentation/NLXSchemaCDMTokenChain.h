@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
@property (retain, nonatomic) SISchemaUUID *asrHypothesisId;
@property (nonatomic) BOOL hasAsrHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (void)deleteAsrHypothesisId;
- (void)deleteTokens;
- (id)tokensAtIndex:(unsigned long long)a0;
- (unsigned long long)tokensCount;

@end
